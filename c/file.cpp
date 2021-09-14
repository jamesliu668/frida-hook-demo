#include <stdio.h>
#include <locale.h>

main()
{
    //    TCHAR  *Name[80];
    //    *Name = L"aaaa";
    // setlocale(LC_CTYPE, "chs");
    wchar_t *Name = L"我是天才";

    FILE *fd;
    FILE *fp;                           /*定义文件指针*/
    fp = _wfopen(L"test.dat", L"w");        /*建立一个文字文件只写*/
    fputs("Your score of TOEFLis", fp); /*向所建文件写入一串字符*/
    fputc(':', fp);                     /*向所建文件写冒号:*/
    _wsetlocale(0,L"chs");
    fwprintf(fp, L"%s", Name);            /*向所建文件写一字符串*/
    fclose(fp);
    fclose(fd);
}