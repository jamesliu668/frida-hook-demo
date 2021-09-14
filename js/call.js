
var ModAddress=Process.findModuleByName('hello.exe');
console.log('Mod Address:' + ModAddress.base);

var callAddress=ModAddress.base.add('0x15D5')
console.log('Hook Address: ' + callAddress);


const fastCallback = Memory.alloc(Process.pageSize);
Memory.patchCode(fastCallback, 128, code => {
    const cw = new X86Writer(code, { pc: fastCallback });
    cw.putMovRegU32("eax", 5)
    cw.putMovRegOffsetPtrReg("esp", 4, "eax")

    cw.putMovRegU32("eax", 15)
    cw.putMovRegPtrReg("esp", "eax")

    //call hello.004015D5
    cw.putCallAddress(callAddress);
    cw.flush();
})
const callMemFun = new NativeFunction(fastCallback, 'void', [])
var result = callMemFun()