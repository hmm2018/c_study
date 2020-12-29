#include <stdio.h>
// #include <string.h>

// 函数
int Add(int x, int y)
{
    int z = x + y;
    return z;
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    int sum = 0;
    int a = 100;
    int b = 200;
    // sum = num1 + num2;
    sum = Add(num1, num2);
    // sum = a + b;
    sum = Add(a, b);
    printf("sum = %d\n", sum);
    return 0;
}

/* int main()
{
    // while循环
    int line = 0;
    printf("好好工作\n");
    while (line < 20000)
    {
        printf("敲一行代码 %d\n", line);
        line++;
    }
    if (line >= 2000)
        printf("走向人生巅峰");
    return 0;
}*/