# frida-hook-demo
本项目是Windows逆向教程中使用Frida实现HOOK应用的Demo代码。其中包含两个部分：
1. 使用C语言编写的一个exe程序
2. 使用Python和Frida编写的HOOK应用

## 如何使用
请结合逆向教程内容使用本项目代码：

[《使用OllyDbg逆向查找HOOK地址和寄存器使用》](https://jmsliu.cn/tech/%e4%bd%bf%e7%94%a8ollydbg%e9%80%86%e5%90%91%e6%9f%a5%e6%89%behook%e5%9c%b0%e5%9d%80%e5%92%8c%e5%af%84%e5%ad%98%e5%99%a8%e4%bd%bf%e7%94%a8.html "使用OllyDbg逆向查找HOOK地址和寄存器使用")

[《使用Frida编写HOOK实现内存注入》](https://jmsliu.cn/tech/%e4%bd%bf%e7%94%a8frida%e7%bc%96%e5%86%99hook%e5%ae%9e%e7%8e%b0%e5%86%85%e5%ad%98%e6%b3%a8%e5%85%a5.html "使用Frida编写HOOK实现内存注入")

[《使用Frida实现内存注入主动调用函数》](https://jmsliu.cn/tech/%e4%bd%bf%e7%94%a8frida%e5%ae%9e%e7%8e%b0%e5%86%85%e5%ad%98%e6%b3%a8%e5%85%a5%e4%b8%bb%e5%8a%a8%e8%b0%83%e7%94%a8%e5%87%bd%e6%95%b0.html "使用Frida实现内存注入主动调用函数")

## C语言编译
本项目使用mingw-w64编译。`C`文件夹中附带`VS Code`的编译配置脚本。