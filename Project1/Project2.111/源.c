#include "stdio.h"
#include<string.h>

/*引用代码不被看见源码！！！！*/
//#pragma comment(lib,"Project2.lib")
//int main() {
//    int a = 60, b = 70;
//    int m = adv(a, b);    //引用外部，不被看源码，发add2.h和Project2.lib给别人就行了
//    printf("%d", m);
//    return 0;
//}


/*
    int arr(int x, int y) {
    int z = x-y;
    return z;
}        //函数调用

    //int num1, num2;
    //scanf("%d%d", &num1, &num2);
    //int sum = arr(num1, num2);
    //printf("%d", sum);
             //放于main中;
*/


// void main() {
//
//    /*const int i = 20;//const锁定变量:常变量 
//    //i = 2;
//    printf("%d", i);*/
//    
//    /*#define max 20000;//定义的标识符常量
//    int l = max;
//    printf("%d", l);*/
//
//    /*
//     char arr[] = "abcd";
//    char arr1[] = {'a','b','c'};
//    int a = strlen("abc");
//    printf("%d\n", a);
//    printf("%d\n", strlen(arr));
//    printf("%d\n", strlen(arr1));//字符串结束为\0,所以为随机数
//    */
//   
//
//
//    //printf("%d",strlen("c:\test\327\test.c"));
//    
//    /* int arr[4] = {1123,55,2};
//    int i = 0;
//    while (i < 4) 
//    {
//        printf("%d ", arr[i]);
//        i++;
//    }
//    */
//
//
//    //int arr[10] = {0};
//    //printf("%d",sizeof(arr));//计算数组总大小，单位为字节。
//   
//   /* int a = (int)3.22;
//    printf("%d", a);*/
//
//    /*int a = 1, b = 2,mat;
//    mat = a > b ?  a : b;
//    printf("%d", mat); //三目运算符
//    */
//  
//}





//void test() {
//  static int a = 1;//static修改局部变量。从栈区（局部变量）->为静态区(全局变量)：只能在自己源文件使用
//  a++;
//    printf("%d ", a);
//}
//void main() {
//
//    int i = 0;
//    while (i < 10)
//    {
//        test();
//        i++;
//    }
//}


//void main()
//{
//    // int a = 10;
//    //int* pa = &a;
//    //*pa = 20;        //解引用操作 *pa是通过pa里的地址找到a。
//    //printf("%d", a);
//    //return 0;
//
//
//   /* struct un
//    {
//       char name[20];
//       int age;
//       float score;
//    };
//    struct un s = { "是",18,99.9 };
//    printf("%s %d %f\n",s.name,s.age,s.score);
//   */
//}

//int max(int x, int y) {
//    if (x > y)
//        return x;
//    else
//        return y;
//}
//int main() {
//   /* int a,b;
//    scanf("%d", &a);
//    scanf("%d", &b);
//    printf("%d",max(a,b));*/
//
//    int a;
//    puts("请输入一个整数");
//    scanf("%d", &a);
//    if (a % 5 == 0)
//        printf("yes");
//    else
//        printf("no");
//}

//int main() {
//
//    int ch = 0;
//    while((ch = getchar()) !=EOF)
//    {
//        putchar(ch);
//    }
//    return 0;
//}

//int main() {
//    char a[20] = { 0 };
//    char b[] = { "阿松大" };
//    strcpy(a, b);         //复制，拷贝
//    printf("%s\n", a);
//    memset(b, 'x', 2);        //!!!
//    printf("%s", b);
//    return 0;
//}

//void test2() {
//    printf("杀杀杀");
//}
//
//int test1() {
//    test2();
//    return 0;
//}
//int main() {
//    //test1();
//    int a=1, b=2;
//    int add(int, int);//声明
//    int m = add(a, b);
//    printf("%d", m);
//    return 0;
//}
//int add(int a, int b) {
//    return (a+b);
//}

int main() {
    //求十个数的最大值
    /*int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
    int max = a[0];
    int i = 0;
    for (i = 0; i < 10; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("%d", max);  

    //九九乘法表
    /* int i, j;
    for (i = 1; i < 10; i++) {
       
        for (j = 1; j <= i; j++) {
            printf("%d*%d=%d ", j, i, i * j);
        }
        printf("\n");
    }*/
   
    
   
    
    return 0;
}

