
#include <stdio.h>
#include <string.h>
// 库函数： 1.官方文档：http://cplusplus.com/reference/cstdio/scanf/?kw=scanf
// 2.参考文档：http://cplusplus.com/reference/cstdio/scanf/?kw=scanf

//一、自定义函数：
// 1.自定义函数交换变量

/* void swap(int *pa, int *pb)
{
    int tmp = 0;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

int main()
{
    int a = 10;
    int b = 20;
    swap(&a, &b);
    printf("a=%d b=%d\n", a, b);
    return 0;
} */

// 练习：写一个函数，每一次调用一次函数，就会将num 的值增加1
/* void Add(int *p)
{
    (*p)++;
}
int main()
{
    int num = 0;
    Add(&num);
    printf("num=%d\n", num);
    Add(&num);
    printf("num=%d\n", num);
    Add(&num);
    printf("num=%d\n", num);
    Add(&num);
    printf("num=%d\n", num);
    return 0;
} */

// 二、函数的嵌套和链式访问
// 函数嵌套：函数中彼此互相调用
// 链式访问：把一个函数的返回值作为参数传递个另一个函数

/* #include <string.h>

int main()
{
    // int len = 0;
    // printf("%d\n", strlen("abcdefg")); //函数的链式访问

    printf("%d", printf("%d", printf("%d", 43))); // =>4321   printf()函数执行的返回值是当前打印的字符的个数
    return 0;
} */

// 三、函数的声明与定义
// 函数的声明:
//           1.告诉编译器有个函数叫什么，参数是什么，返回类型是什么，但具体是否存在无关紧要
//           2.函数的声明一般出现在函数使用前，要满足先声明后使用
//           3.函数的声明一般要放在头文件中，函数的定义一般放在.c文件中

// 2).函数的声明
/* int Add(int x, int y);
int main()
{
    int a = 10;
    int b = 20;
    int sum = 0;
    // 3).函数的调用
    sum = Add(a, b);
    printf("%d\n", sum);
    return 0;
}
// 1).函数的定义
int Add(int x, int y)
{
    int z = x + y;
    return z;
} */

// 四、函数的递归
// 递归:程序自己调用自己 容易出现栈溢出

// 练习：写代码，输入1234，在屏幕上打印1 2 3 4;(递归实现)
/* void print(int n) //假如输入的是1234
{
    if (n > 9) //n>9说明输入的至少是两位数及两位以上的数
    {
        print(n / 10); //先用1234/10=123;
    }
    printf("%d\n", n % 10); //然后打印1234%10=4;
}
int main()
{
    unsigned int num = 0;
    scanf("%d", &num);
    print(num);
    return 0;
} */

// 练习 写代码，计算字符串长度
/* int my_strlen(char *str)
{
    int count = 0;

    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}
int main()
{
    char arr[] = "bit";

    // int len = strlen(arr);
    // printf("len=%d", len);

    int len = my_strlen(arr); //arr是数组，数组传参，传过去不是整个数组，而是第一个元素的地址
    printf("len=%d ", len);
    return 0;
} */

// 练习 写代码，计算字符串长度，不允许创建临时变量(递归实现)
/* int my_strlen(char *str)
{
    if (*str != '\0')
        return 1 + my_strlen(str + 1); //递归
    else
        return 0;
}
int main()
{
    char arr[] = "bit";
    int len = my_strlen(arr);
    printf("len=%d", len);
} */

// 练习 求n 的阶乘(递归实现)
/* int Fac2(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * Fac2(n - 1);
}

int main()
{
    int n = 0;
    int ret = 0;
    scanf("%d", &n);
    ret = Fac2(n);
    printf("%d\n", ret);
    return 0;
} */

// 练习 求第n 个斐波那契数列的值(递归实现)方法一
/* int Fib(int n)
{
    if (n <= 2)
        return 1;
    else
        return Fib(n - 1) + Fib(n - 2);
}
int main()
{
    int n = 0;
    int ret = 0;
    scanf("%d", &n);
    ret = Fib(n);
    printf("ret=%d\n", ret);
    return 0;
} */

// 练习 求第n 个斐波那契数列的值(循环方式实现)方法二
/* int Fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;
    while (n > 2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}
int main()
{
    int n = 0;
    int ret = 0;
    scanf("%d", &n);
    ret = Fib(n);
    printf("%d", ret);
    return 0;
} */

// 函数递归经典面试题
//1.汉诺塔问题
//2 青蛙跳台阶问题
// 《剑指offer》67道经典面试题