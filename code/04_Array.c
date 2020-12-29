#include <stdio.h>
#include <string.h>

// 数组：是一组相同类型元素的集合
// 可以通过下标来访问
// 计算数组长度：int len = sizeof(arr)/sizeof(arr[0])
// 一维数组在内存中的存储是连续的
/* int main()
{
    char arr[] = "abcdef";
    printf("sizeof=%d\n", sizeof(arr));
    // sizeof 计算arr所占空间的大小，每个元素是一个char 所以大小为7*1=7;
    // strlen 求字符串长度,遇到\0则停止，并且\0不算字符串长度
    printf("strlen=%d\n", strlen(arr));
    return 0;
} */
// tips:strlen和sizeof的关系
// 1.strlen是求字符串长度的，只能只针对字符串求长度，并且是一个库函数，使用时需引库文件
// 2.sizeof 计算变量、数组、类型的到小，单位是字节，并且仅仅是一个操作符

/* int main()
{
    char arr1[] = "abc";
    char arr2[] = {'a', 'b', 'c'};
    printf("%d\n", sizeof(arr1)); //4
    printf("%d\n", sizeof(arr2)); //3
    printf("%d\n", strlen(arr1)); //3
    printf("%d\n", strlen(arr2)); //随机数
    return 0;
} */

// 二维数组
// 二维数组在内存中的存储也是连续的
/* int main()
{
    int arr[3][4] = {{1, 2, 3}, {4, 5}};
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        int j = 0;
        for (j = 0; j < 4; j++)
        {
            printf("%d\n", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
} */

// 数组作为函数参数
// 冒泡排序(有报错)
/* void bubble_sort(int arr[], int sz)
{
    // 确定冒泡排序的趟数
    int i = 0;
    for (i = 0; i < sz - 1; i++)
    {
        int flag = 1; //假设这一趟要排序的数据已经有序
        // 每一趟冒泡排序
        int j = 0;
        for (j = 0; i < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                flag = 0; //本趟要排序的数据不完全有序
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
}
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5};
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    // 对arr 排序，排成升序
    // arr 是数组，
    bubble_sort(arr, sz);
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
} */

// 关于数组：
// 1.sizeof(数组名),计算整个数组的大小,sizeof内部单独放一个数组名，数组名表整个数组
// 2.&数组名 取出的是数组的地址。&数组名，数组名表示整个数组。
// 除此1,2两种情况之外，所有的数组名都表示数组首元素的地址