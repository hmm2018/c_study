#include <stdio.h>

/* int main()
{
    //1. if语句执行对行语句时要用代码块，即用{}包起来，

    //2.悬空else:    else和它离得最近的未匹配的if匹配
    int a = 0;
    int b = 2;
    if (a == 1)
        if (b == 2)
            printf("hehe\n");
        else
            printf("haha\n");
    return 0;

} */

// 练习1：
// 找出1-100之间的奇数
/* int main()
{
    int i = 1;
    while (i <= 100 )
    {
        if (i % 2 == 1)
            printf("i= %d\n", i);
        i++;
    }
    return 0;
} */

// 练习2：
/*int main()
{
    int n = 1;
    int m = 2;
    switch (n)
    {
    case 1:
        m++; //2+1=3;
    case 2:
        n++; //1+1=2;
    case 3:
        switch (n)
        {
        case 1:
            n++;
        case 2:
            m++; //3+1=4
            n++; //2+1=3
            break;
        }
    case 4:
        m++; //4+1=5
        break;
    default:
        break;
    }
    printf("m=%d,n=%d\n", m, n); //m=5;n=3
    return 0;
} */

// while语句
/* int main()
{
    int i = 1;
    while (i <= 10)
    {
        if (5 == i)
            continue; //continue终止循环中本次循环后面的代码，
                      // 即本次循环中continue后面的代码不会再执行，而是直接跳到while语句的判断部分，进行下一次循环入口的判断;
                      // 此处换成break呢？break 是用于永久终止循环
        printf("%d ", i);
        i++;
    }

    return 0;
}
 */

// while语句 练习1
/* int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF) //EOF: END OF FILE
    {
        // printf("%c\n", ch);
        putchar(ch); //getchar()获取字符,putchar()输出字符(相当于printf("%c\n",ch))
    }
    return 0;
}
 */

// while语句 练习2
/* int main()
{
    int ret = 0;
    int ch = 0;
    char password[20] = {0};
    printf("请输入密码:>");
    scanf("%s", password); //输入密码，并存放在password数组中
    while ((ch = getchar()) != '\n')
    {
        ;
    }
    printf("请确认(Y/N):>");
    ret = getchar();
    if (ret == 'Y')
    {
        printf("确认成功\n");
    }
    else
    {
        printf("放弃确认\n");
    }
    return 0;
} */

// for 循环
/* int main()
{
    int i = 0;
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
            // break;
            continue;
        printf("%d\n", i);
    }
    return 0;
} */

// for循环练习1
/* int main()
{
    int i = 0;
    int j = 0;
    for (; i < 10; j++)
    {
        for (; j < 10; j++)
        {
            printf("hehe\n");
        }
    }
    // tips:不要随便省略for循环的部分
} */

// for循环练习2
//以下代码循环几次？
/* int main()
{
    int i = 0;
    int k = 0;
    for (i = 0, k = 0; k = 0; i++, k++) //循环零次，由于在判断的地方写的是k=0为假，所以循环不会进去。
        k++;
    printf("haha\n");

    return 0;
} */

// do...while循环

/* int main()
{
    int i = 1;
    do
    {
        // if (i == 5)
        // continue;    //加上这两行，代码，会打印1 2 3 4 死循环
        printf("%d\n", i);
        i++;
    } while (i <= 10);
    return 0;
} */

// 练习：
// 1.计算n 的阶乘
/* int main()
{
    int i = 0;
    int n = 0;
    int product = 1; //乘积
    scanf("%d", &n); //通过输入的方式得到n
    for (i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("n=%d\n", n);
    printf("product=%d\n", product);
    return 0;
} */

// 2.计算1!+2!+3!...+10! 的和
/* int main()
{
    int i = 0;
    int n = 0;
    int product = 1; //乘积
    int sum = 0;

    for (n = 1; n <= 3; n++)
    {
        product = 1; //每次循环前都要讲product置为1，否则结果会有"惊喜"!!!
        for (i = 1; i <= n; i++)
        {
            product = product * i;
        }
        printf("product=%d\n", product);
        sum = sum + product;
    }

    printf("n=%d\n", n);

    printf("sum=%d\n", sum);
    return 0;
} */

// 2.计算1!+2!+3!...+10! 的和 ==>代码优化
/* int main()
{
    int i = 0;
    int n = 0;
    int product = 1;
    int sum = 0;
    for (n = 1; n <= 3; n++)
    {
        product = product * n;
        sum = sum + product;
    }
    printf("sum = %d\n", sum);
    return 0;
} */
// 3.在一个有序数组中查找某个元素 方法一:
/* int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 7; //要查找的元素
    // 写一个代码，在arr数组(有序的)中找到7
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]); //计算数组的个数;
    for (i = 0; i < sz; i++)
    {
        if (k == arr[i])
        {
            printf("找到了,下标是:%d\n", i);
            break;
        }
    }
    if (i == sz)
        printf("没找到\n");
    return 0;
} */

// 3.在一个有序数组中查找某个元素 方法二:
// 二分查找算法
/* int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 7;                             //要找到的元素
    int sz = sizeof(arr) / sizeof(arr[0]); //计算元素个数
    int left = 0;                          //左下标
    int right = sz - 1;                    //右下标

    //  //这是个二分查找循环体
    while (left <= right) //只有left<right中间才有元素查找
    {
        int mid = (left + right) / 2; //中间元素下标 ,每次进入查找时，都要通过左右元素下标求出中间元素下标
        if (arr[mid] > k)             //如果中间元素比要找的元素大，说明要找的元素在中间元素的左边
        {
            right = mid - 1; //右下标-1
        }
        else if (arr[mid] < k) //如果中间元素比要找的元素小，说明要找的元素在中间元素的右边
        {
            left = mid + 1; //左下标+1
        }
        else //中间元素与要查找的元素相等
        {
            printf("找到了，下标是：%d\n", mid);
            break; //找到了要跳出去
        }
    }
    if (left > right)
    {
        printf("找不到\n");
    }
    return 0;
} */

// 4.编写代码 演示多个字符从两端移动，向中间汇聚
/*#include <string.h>
#include <windows.h>
#include <stdlib.h>
 int main()
{
    char arr1[] = "welcome to bit!!!!!!!!!!!!!";
    char arr2[] = "#####################";
    int left = 0;                 //左下标
    int right = strlen(arr1) - 1; //右下标
    // printf("%s\n", arr2);
    printf("%d\n", right);
    printf("%d\n", left);

    while (left <= right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr2[right];
        printf("%s\n", arr2);
        printf("%s\n", arr1);
        Sleep(1000);
        system("cls"); //执行系统命令放入一个函数
        left++;
        right--;
    }

    return 0;
} */

// 5.编写代码，模拟用户登录场景，并且只能登录三次(只允许输入三次密码，密码正确则登录，三次均输入错误，则退出程序)
/* int main()
{
    int i = 0;
    char password[20] = {0};
    for (i = 0; i < 3; i++)
    {
        printf("请输入密码:>");
        scanf("%s", password);
        if (strcmp(password, "123456") == 0) //不能用 == 来比较两个字符串是否相等，而应该用strcmp(),
        // strcmp()是一个库函数，判断两个字符串是否相等，如果相等，则结果为0，如果左边的大于右边，则返回一个大于0的数字，否则返回一个小于0的数
        {
            printf("登录成功\n");
            break;
        }
        else
        {
            printf("密码错误\n");
        }
    }
    if (i == 3)
    {
        printf("三次密码均错误，退出程序\n");
    }
    return 0;
} */

// 6.输入三个数，并按从大到小的顺序输出
/* int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d%d%d", &a, &b, &c);
    // 算法实现，a中存最大的，b中次之 c中放最小的
    if (a < b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if (a < c)
    {
        int tmp = a;
        a = c;
        c = tmp;
    }
    if (b < c)
    {
        int tmp = b;
        b = c;
        c = tmp;
    }

    printf("%d%d%d\n", a, b, c);
    return 0;
} */

// 7.打印1~100之间的3的倍数
/* int main()
{
    int i = 0;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
} */

// 8.求最大公约数 (使用辗转相除法)
/* int main()
{
    int m = 96;
    int n = 24;
    int r = 0;
    scanf("%d%d", &m, &n);
    while (r = m % n)
    {
        // r = m % n;
        m = n;
        n = r;
    }
    printf("%d\n", n);
    return 0;
}
 */

// 9.计算1500~3000之前有多少个闰年
/* int main()
{
    int year = 0;
    int count = 0;
    for (year = 1500; year <= 3000; year++)
    {
        // 判断year是否为闰年
        // 1.能被4整除并且不能被100整除是闰年；
        // 2.能被400整除是闰年;

        if (year % 4 == 0 && year % 100 != 0)
        {
            printf("%d ", year);
            count++;
        }
        else if (year % 400 == 0)
        {
            printf("%d ", year);
            count++;
        }
    }
    printf("count=%d ", count);
    return 0;
} */

// 10.打印100~200之间的素数(方法一)
/* int main()
{
    int i = 0;     //要找的素数
    int count = 0; //计数
    for (i = 100; i <= 200; i++)
    {
        //  判断是否为素数：只能被1和自身整除 (方法一)
        // 判断规则:试除法 产生2~i-1之间的数
        int j = 0;
        for (j = 2; j < i; j++) //for循环产生2~i-1之间的数
        {
            if (i % j == 0)
            { //如果找到了2~i-1之前有被i整除的数，说明不是素数，退出循环
                break;
            }
        }
        if (j == i)
        {
            count++;
            printf("找到了%d ", i);
        }
    }
    printf("\ncount=%d\n", count);
    return 0;
} */

// 10.打印100~200之间的素数(方法二)
// i=a*b 说明a和b 中至少有一个数字<=开平方i
/* #include <math.h>
int main()
{
    int i = 0;     //要找的素数
    int count = 0; //计数
    for (i = 100; i <= 200; i++)
    {
        //  判断是否为素数：只能被1和自身整除 (方法二)
        // 判断规则:i=a*b 说明a和b 中至少有一个数字<=开平方i
        int j = 0;
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j > sqrt(i))
        {
            count++;
            printf("找到了%d ", i);
        }
    }
    printf("\ncount=%d\n", count);
    return 0;
} */

// 10.打印100~200之间的素数(方法三)
// 改变循环条件，跳过偶数，在奇数中寻找素数
/* #include <math.h>
int main()
{
    int i = 0;     //要找的素数
    int count = 0; //计数
    for (i = 101; i <= 200; i += 2)
    {
        //  判断是否为素数：只能被1和自身整除 (方法三)
        // 判断规则:i=a*b 说明a和b 中至少有一个数字<=开平方i
        int j = 0;
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j > sqrt(i))
        {
            count++;
            printf("找到了%d ", i);
        }
    }
    printf("\ncount=%d\n", count);
    return 0;
} */

// 11.1~100之间,所有整数中出现多少个数字9？
/* int main()
{
    int i = 0;
    int count = 0;
    for (i = 1; i <= 100; i++)
    {
        if (i % 10 == 9)
            count++;
        // printf("模9%d ", i);
        else if (i / 10 == 9)
            count++;
        // printf("\n除9%d", i);
    }
    printf("count=%d ", count);
    return 0;
} */

// 12.计算 1/1-1/2+1/3-1/4+1/5...+1/99-1/100的值，打印结果
/* int main()
{
    int i = 0;
    double sum = 0.0;
    int flag = 1;
    for (i = 1; i <= 100; i++)
    {
        sum += flag * 1.0 / i;
        flag = -flag;
    }
    printf("%lf\n", sum);
    return 0;
} */

// 13.求10个数中的最大值
/* int main()
{
    int arr[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
    int max = arr[0]; //最大值
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    for (i = 1; i < sz; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("max=%d ", max);
    return 0;
} */

// 14 打印乘法口诀表
/* int main()
{
    int i = 0; //列数
    for (i = 1; i < 9; i++)
    {
        // 打印一行
        int j = 1;
        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%-2d ", i, j, i * j); //%2d，d和%之间出现2，表示打印该数字的时候打印2位，如果不够两位，用空格补齐且右对齐，写成%-2d表左对齐
        }
        printf("\n");
    }
    return 0;
} */

// goto语句
// 利用goto语句，写一个关机程序
/* #include <stdlib.h>
#include <string.h>
int main()
{
    // cmd命令： shutdown -s -t 60电脑将在60秒之内关机
    // system() 执行系统命令的
    char input[20] = {0};
    system("shutdowm -s -t 60");
again:
    printf("请注意，你的电脑将在1分钟内关机，如果输入:我是猪,则取消关机\n请输入:>");
    scanf("%s", input);
    if (strcmp(input, "我是猪") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
} */
