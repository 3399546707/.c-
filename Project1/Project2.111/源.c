#include "stdio.h"
#include<string.h>

/*���ô��벻������Դ�룡������*/
//#pragma comment(lib,"Project2.lib")
//int main() {
//    int a = 60, b = 70;
//    int m = adv(a, b);    //�����ⲿ��������Դ�룬��add2.h��Project2.lib�����˾�����
//    printf("%d", m);
//    return 0;
//}


/*
    int arr(int x, int y) {
    int z = x-y;
    return z;
}        //��������

    //int num1, num2;
    //scanf("%d%d", &num1, &num2);
    //int sum = arr(num1, num2);
    //printf("%d", sum);
             //����main��;
*/


// void main() {
//
//    /*const int i = 20;//const��������:������ 
//    //i = 2;
//    printf("%d", i);*/
//    
//    /*#define max 20000;//����ı�ʶ������
//    int l = max;
//    printf("%d", l);*/
//
//    /*
//     char arr[] = "abcd";
//    char arr1[] = {'a','b','c'};
//    int a = strlen("abc");
//    printf("%d\n", a);
//    printf("%d\n", strlen(arr));
//    printf("%d\n", strlen(arr1));//�ַ�������Ϊ\0,����Ϊ�����
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
//    //printf("%d",sizeof(arr));//���������ܴ�С����λΪ�ֽڡ�
//   
//   /* int a = (int)3.22;
//    printf("%d", a);*/
//
//    /*int a = 1, b = 2,mat;
//    mat = a > b ?  a : b;
//    printf("%d", mat); //��Ŀ�����
//    */
//  
//}





//void test() {
//  static int a = 1;//static�޸ľֲ���������ջ�����ֲ�������->Ϊ��̬��(ȫ�ֱ���)��ֻ�����Լ�Դ�ļ�ʹ��
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
//    //*pa = 20;        //�����ò��� *pa��ͨ��pa��ĵ�ַ�ҵ�a��
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
//    struct un s = { "��",18,99.9 };
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
//    puts("������һ������");
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
//    char b[] = { "���ɴ�" };
//    strcpy(a, b);         //���ƣ�����
//    printf("%s\n", a);
//    memset(b, 'x', 2);        //!!!
//    printf("%s", b);
//    return 0;
//}

//void test2() {
//    printf("ɱɱɱ");
//}
//
//int test1() {
//    test2();
//    return 0;
//}
//int main() {
//    //test1();
//    int a=1, b=2;
//    int add(int, int);//����
//    int m = add(a, b);
//    printf("%d", m);
//    return 0;
//}
//int add(int a, int b) {
//    return (a+b);
//}

int main() {
    //��ʮ���������ֵ
    /*int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
    int max = a[0];
    int i = 0;
    for (i = 0; i < 10; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("%d", max);  

    //�žų˷���
    /* int i, j;
    for (i = 1; i < 10; i++) {
       
        for (j = 1; j <= i; j++) {
            printf("%d*%d=%d ", j, i, i * j);
        }
        printf("\n");
    }*/
   
    
   
    
    return 0;
}

