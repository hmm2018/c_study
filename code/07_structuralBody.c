#include <stdio.h>
#include <string.h>

//结构体
// struct->结构体关键字 Stu->结构体标签  struct Stu->结构体类型
/* struct Stu
{
  // 成员变量
  char name[20];
  short age;
  char tele[12];
  char sex[5];
} s1, s2, s3; //s1,s2,s3是三个全局结构体变量
 */

// typedef 把struct Stu 这种类型重新起名字 Stu类型
// 定义变量的时候，既可以用Struct Stu 也可以用Stu
/* typedef struct Stu
{
  // 成员变量
  char name[20];
  short age;
  char tele[12];
  char sex[5];
} Stu; //Stu 是类型

int main()
{
  struct Stu s1 = {"李狗蛋", 20, "123456789", "男"}; //用struct Stu 定义变量s1,并初始化(初始化就是赋值)
  Stu s2 = {"呦呦鹿鸣", 18, "9876543221", "女"};     //用Stu 定义变量s2并初始化,此行代码与上一行功能相同，完全等价
  return 0;
} */

/* 
struct S
{
  int a;
  char c;
  char arr[20];
  double d;
};
struct T
{
  char str[10];
  char *pc;
  struct S s1;
};
int main()
{
  char arr[] = "hello bit\n";
  struct T t =
      {
          "hehe",
          arr,
          {100, 'w', "hello world", 3.14}, //结构体中可以嵌套结构体
      };
  printf("%s\n", t.str);
  printf("%s\n", t.s1.arr);
  printf("%lf\n", t.s1.d);
  printf("%s\n", t.pc);
  return 0;
} */

// c 语言中，栈区的默认使用：
// 1.先使用高地址处的空间（大的内存），在使用低地址处的空间(小的内存)
// 2.数组随着下标的增长，地址是由低到高变化

// 练习 字符串拷贝
/* void my_strcpy(char *dest, char *src)
{
  while (*src != '\0')
  {
    *dest = *src; //将src的元素循环传给dest
    src++;        //指针向后移一位
    dest++;       //指针向后移一位
  }
  *dest = *src; //跳出循环后，*src中还有一个\0,最后赋值给*dest
} */

// 优化一: 字符串拷贝
// void my_strcpy(char *dest, char *src)
// {
//   while (*dest++ = *src++)
//   {
//   }
// }

// 优化二: 字符串拷贝---后置++提上来
/* void my_strcpy(char *dest, char *src)
{
  if (dest != NULL && src != NULL) //有此判断，即使传过去的是空指针程序也不会崩掉
  {
    while (*dest++ = *src++)
    {
    }
  }
} */

// 优化三: 字符串拷贝 --使用assert()断言函数
/* #include <assert.h>
void my_strcpy(char *dest, char *src)
{
  // assert 断言 一个库函数
  assert(dest != NULL);
  assert(src != NULL);
  while (*dest++ = *src++)
  {
  }
}
 */

// 优化四: 字符串拷贝 --加上const
/* #include <assert.h>
void my_strcpy(char *dest, const char *src) //加上const
{
  // assert 断言 一个库函数
  assert(dest != NULL);
  assert(src != NULL);
  while (*dest++ = *src++)
  {
  }
} */

// 优化四(完美): 字符串拷贝 --返回值
/* #include <assert.h>
char *my_strcpy(char *dest, const char *src) //加上const
{
  char *ret = dest;
  // assert 断言 一个库函数
  assert(dest != NULL);
  assert(src != NULL);

  //把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
  while (*dest++ = *src++)
  {
  }
  return ret;
} */

/* int main()
{
  char arr1[] = "##########";
  char arr2[] = "hello 2021";
  my_strcpy(arr1, arr2); //数组传参传的是数组第一个元素的值
  // strcpy(arr1, arr2);  strcpy是一个库函数，有两个参数(目标数据，源数据)
  printf("%s\n", my_strcpy(arr1, arr2));
  return 0;
} */

// ***重点知识:const修饰指针
// assert 断言 针对保护

// 练习：求字符串长度
#include <assert.h>
int my_strlen(const char *str)
{
  int count = 0;tt
  assert(str != NULL);
  while (*str != '\0')
  {
    count++;
    str++;
  }
  return count;
}

int main()
{
  char arr[] = "abcdef";
  int len = my_strlen(arr);
  printf("%d\n", len);
  return 0;
}
