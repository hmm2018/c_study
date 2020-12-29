#include <stdio.h>
// sizeof内部表达式不参与计算

/* int main()
{
    short s = 0; //short类型长度是2
    int a = 10;
    printf("%d\n", sizeof(s = a + 5)); //sizeof(s = a + 5)仅仅是个摆设，不参与运算
    printf("%d\n", s);                 //sizeof(s = a + 5)sizeof中的表达式不参与运算，仅仅是个摆设，所以s还是0
    return 0;
}
 */
/* void test1(int arr[])
{
    printf("arr=%d/n", sizeof(arr));
}
void test2(char ch[])
{
    printf("ch=%d\n", sizeof(ch));
}
int main()
{
    int arr[10] = {0};
    char ch[10] = {0};
    printf("%d\n", sizeof(arr)); //40  =>数组名放在sizeof中，计算的是整个数组的大小，单位是字节
    printf("%d\n", sizeof(ch));  //10
    test1(arr);                  //数组传参时真正传过去的是首元素的地址
    test2(ch);
    return 0;
} */

// 操作符 && ||
/* int main()
{
    int i = 0, a = 1, b = 2, c = 3, d = 4;
    // i = a++ && ++b && d++; //逻辑与 && 左边如果为假，右边不管是什么整个值都为假，所有 ++b, d++ 都没有参与运算
    i = a++ || ++b || d++; //逻辑或 ||左边如果为真，右边不管是什么值都为真，所有 ++b, d++ 都没有参与运算
    printf("a=%d\n b=%d\n c=%d\n d =%d\n", a, b, c, d);
    return 0;
} */

// 创建一个结构体类型
/* struct Stu
{
    // 描述对象的成员变量
    char name[20];
    int age;
    char id[20];
};
int main()
{
    int a = 10;
    // 使用struct Stu这个类型创建一个学生对象s1,并初始化
    struct Stu s1 = {"张三", 20, "20201219"};
    struct Stu *ps = &s1;     //把s1的地址给到类型为 struct Stu 的ps变量
    printf("%s\n", ps->name); //->是结构体指针操作符，用法：结构体指针->成员名
    printf("%d\n", ps->age);
    // printf("%s\n", s1.name);
    // printf("%d\n", s1.age);
    // printf("%s\n", s1.id);
    return 0;
} */

// 隐式类型转换
// 1.整型提升
// 2.算术转换
