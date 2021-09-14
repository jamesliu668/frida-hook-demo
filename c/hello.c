#include <stdio.h>
#include <Windows.h>

//无参数，无返回的函数
void g() {
    printf("This is g(),No parameter No return!\n");
}

//有2参数，有1返回的函数
int h(int m, int n) {
    printf("This is h(), two parameter is %d and %d\n", m, n);
    return m + n;
}

//1参数，无返回的函数
void f(int n) {
    printf ("This is f(), one parameter is No return!, Number: %d\n", n);
}

//主函数
int main (int argc, char * argv[]) {
    int i = 0;
    int j = 0;
    int l = 0;
    int num = 0 ;
    printf("g(No parameter No return ) is at %p\n", g);
    printf ("f(One parameter One return)) is at %p\n", f);
    printf("h(Two parameter One return) is at %p\n", h);
    printf("-------------------------------------------------------------------------\n");
    printf("please input one number in [1,3],Then press \"Enter\":\n");

    while (1) {
        int n = j++;
        int m = l++;
        h(n, m);
    }
}