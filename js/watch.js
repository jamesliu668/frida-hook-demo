
var ModAddress=Process.findModuleByName('hello.exe');
console.log('Mod Address:' + ModAddress.base);

var hookAddress=ModAddress.base.add('0x15D5')
console.log('Hook Address: ' + hookAddress);

Interceptor.attach(hookAddress, {
    onEnter: function (args) {
        var esp = this.context.esp;
        //0x004015d5 push ebp; hook在这里；push ebp的指令后esp会被压入一个新值，所以，之前esp站内的参数地址都需要加0x4的偏移。
        console.log("两个参数分别为：" + Memory.readU32(esp.add('0x4')) + "和" + Memory.readU32(esp.add('0x8')))
    }
})