#include <stdio.h>
// 指针
// * 间接访问操作符（解引用操作符）
// & 取地址
// 指针类型决定了
// 1.指针进行解引用操作的时候，能够访问空间的大小

// int *p *P 能够访问的4个字节
// char *p *p 能够访问1个字节
// double *p  *p 能够访问8个字节

// 2.指针向前或向后走一步有多大距离(指针的步长)
// int *P: p+1-->4 每次跳过4个字节
// char *P p+1-->1 每次跳过1个字节
// double *p p+1-->每次跳8个字节
/* int main()
{
    int a = 0x11223344;
    // int *pa = &a;
    char *pc = (char *)&a; //(char *)强制类型转换，不然编译器会报错

    // printf("%p\n", pa);
    printf("%p\n", pc);
    return 0;
} */

// 如何避免野指针
// 1.指针初始化
// 2.小心指针越界
// 3. 指针指向空间释放 ，将其置为NULL
// 4.指针使用之前检查有效性

/* int main()
{
    // tips:只有以下两种情况，数组名表示整个数组，其他情况数组名都表示首元素地址
    // 1.数组：&arr  &数组名 表示的不是首元素的地址,而是数组名表示整个数组  &数组名 取出的是整个数组的地址
    // 2.sizeof(arr):sizeof(数组名)   数组名表示的是整个数组  sizeof(数组名)计算的是整个数组的大小
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    int *p = arr; //数组名是首元素地址，把首元素地址复制给指针变量p
    for (i = 0; i < sz; i++)
    {
        printf("%d ", *p);
        p = p + 1;
    }
    return 0;
} */

// 指针的运算:
// 指针+-整数
// 指针-指针 => 得到的绝对值是指针和指针之间元素的个数

//  指针数组
/* int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int *arr2[3] = {&a, &b, &c}; //指针数组
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        printf("%d ", *(arr2[i]));
    }
    return 0;
} */

// 整型数组 存放整型
// 字符数组 存放字符
// 指针数组 存放指针
// 二维数组，可以省略行不能省略列

/* int main()
{
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    // printf("%d\n", a[0][0]);
    // printf("%d\n", a[1][0]);
    // printf("%d\n", a[1][1]);
    printf("%d\n", a[2][1]);
    return 0;
} */

// 关于数组传参的编程题
// 题目:创建一个整型数组，完成对数组的操作
// 1.实现函数Init()初始化数组为0
// 2.实现函数print()打印数组的每个元素
// 3.实现reverse()函数完成数组元素的逆置
// 要求自己设计上述函数的参数、返回值
/* void Init(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        arr[i] = 0;
    }
}

void Print(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n", arr[i]);
}
void Reverse(int arr[], int sz)
{
    int left = 0;
    int right = sz - 1;
    while (left < right)
    {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(arr) / sizeof(arr[0]);
    // Init(arr, sz);    //把数组初始化为 0
    Print(arr, sz);
    Reverse(arr, sz); //逆置
    Print(arr, sz);
    return 0;
} */

// 练习 交换两个数组中的元素
/* int main()
{
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    int tmp = 0;
    int i = 0;
    int sz = sizeof(arr1) / sizeof(arr1[0]);
    for (i = 0; i < sz; i++)
    {
        tmp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = tmp;
    }
    printf("arr1=%d \n", arr1);
    printf("arr2=%d", arr2);
    return 0;
} */

// 练习：下面代码输出的结果是：
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    short *p = (short *)arr; //short类型大小为2个字节
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        *(p + i) = 0;
    }
    // printf("%d ", arr[i]);
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]); //0 0 3 4 5
    }
    return 0;
}