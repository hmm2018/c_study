#include <stdio.h>

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
}