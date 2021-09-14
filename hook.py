# -*- coding: UTF-8 -*-
# py3
from __future__ import print_function
import frida
import codecs
import sys


def main(target_process):
    session = frida.attach(target_process)
    with codecs.open('js/watch.js', 'r', 'utf-8') as f:
        source = f.read()
    script = session.create_script(source)
    script.load()
    print("[!] Ctrl+D on UNIX, Ctrl+Z on Windows/cmd.exe to detach from instrumented program.\n\n")
    sys.stdin.read()
    session.detach()

if __name__ == '__main__':
    main('hello.exe')