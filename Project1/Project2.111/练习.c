#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include"string.h"
#include"windows.h"
#include"math.h"
#include"stdlib.h"

//#include"add.h"
//int main() {
//	int a = 10, b = 20;      /* �����ⲿ  */   
//	int m = add(a, b);
//	printf("%d", m);
//	return 0;
//}
/* �����ⲿ �����Ͱ汾 */

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("�Ҳ�����\n");
//	}
//
//	return 0;
//}
/*���ֲ���*/

//int main() {
//	char arr1[] = "welcome to jiangxi!!!";
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯��1��
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main() {
//	int a[] = {6,7,11};
//	int i,l,j;
//	for (j = 0; j < 2; j++) {
//		for (i = 1; i < 5; i++) {
//			if (a[i-1] < a[i]) {
//				l = a[i-1];
//				a[i-1] = a[i];
//				a[i] = l;
//			}
//		}
//	}
//	for (i = 0; i < 3; i++) {
//		printf("%d ", a[i]);
//	}  �Ӵ�С���С�		
// return 0;
//}


//int main() {
//	/*int i,j;
//	for (i = 1000; i <= 2000; i++) {
//		if ((i % 4 == 0 && i % 100 != 0)||(i % 400 == 0)) {
//			printf("%d ", i);
//		}
//	}*/
//
//	/*	int i, j;
//		for (i = 100; i <= 200; i++) {
//
//			for (j = 2; j <i; j++) {
//				if (i % j == 0) {
//					break;
//				}
//			}
//			if (i == j) {
//				printf("%d ", i);    ������ϰ����1
//			}
//		}*/
//
//		/*int i, j;
//		for (i = 101; i <= 200; i+=2) {
//			int t = 1;
//			for (j = 2; j <= sqrt(i); j++) {
//				if (i % j == 0) {
//					t = 0;
//					break;
//				}
//			}
//			if (t == 1) {
//				printf("%d ", i);    ������ϰ����2
//			}
//		}*/
//
//	return 0;
//}
/*������ϰ����2�ַ���*/


//int main() {
//	/*char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	begin:
//	printf("��ע����Լ����ػ�������60�������룺���ͼ��ͣ���ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "���ͼ���") == 0) {
//		system("shutdown -a");
//	}
//	else {
//		printf("���������������\n");    �ػ�С����goto���
//		goto begin;
//	}*/
//
//	//char input[20] = { 0 };
//	//system("shutdown -s -t 60");
//	//while (1) {
//	//	printf("��ע����Լ����ػ�������60�������룺���ͼ��ͣ���ȡ���ػ�\n");
//	//	scanf("%s", input);
//	//	if (strcmp(input, "���ͼ���") == 0) {
//	//		system("shutdown -a");
//	//		break;
//	//	}
//	//	else {
//	//		printf("���������������\n");    //�ػ�С����while���
//	//	}
//	//}
//	return 0;
//}
/*�ػ�С����*/

//void get_max1(int* a1,int* b1) {
//	int min = *a1;
//	*a1 = *b1;
//	*b1 = min;
//}
//int main() {
//	int a = 5, b = 10;
//	printf("a��b����ǰ��a = %d,b = %d\n", a, b);  //a��b�ú�������λ��
//
//	get_max1(&a, &b);                             //<----��ַ����
//	printf("a��b������a = %d,b = %d", a,b);	
//
//	return 0;
//}   
/*<----��ַ����*/

//void add(int* num) {
//	(* num)++;
//}
//int main() {
//	int num=0;
//	add(&num);
//	printf("%d", num);
//	return 0;
//}
/*��ַ���ü���ʾ*/

//int is_prime(int n) {
//	int j = 0;
//	for (j = 2; j < n; j++) {
//		if (n % j == 0) {
//			return 0;
//		}
//
//	}
//	return 1;
//}
//
//int is_run_year(int n) {
//	return (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0));
//}
//
//
//int main() {
//	/*int i = 0,l=0;
//	for (i = 100; i < 200; i++) {
//		if (is_prime(i) == 1) {
//			l++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d ", l);*/
//
//
//	/*int i = 0,l=0;
//	for (i = 1000; i <= 2000; i++) {
//		if (is_run_year(i) == 1) {
//			l++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d", l);*/
//	return 0;
//}
 

//erfen_seek(int arr[], int key, int ret){
//	int left = arr[0];
//	int right = ret - 1;
//	
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] < key) {
//			left = mid + 1;
//		}
//		else if (arr[mid] > key) {
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = erfen_seek(arr, key, sz);
//	if (ret == -1) {
//		printf("û�ҵ�");
//	}
//	else {
//		printf("�ҵ����±꣺%d", ret);
//	}
//	return 0;
//  }
/*���±� ��������*/

//void print(unsigned int a) {
//    if (a > 9) {
//        print(a / 10);
//    }                           /*if�жϡ�����д���˻�ջ���*/
//    printf("%d ", a % 10);
//}
// int main() {
//    unsigned int a = 0;
//    scanf("%u", &a);
//    print(a);
//    return 0;
//}
/*�����ݹ�*/

//int my_strlen(char* a) {
//    if (*a != '\0') {
//        return 1 + my_strlen(a + 1);
//    }
//    else {
//        return 0;
//    }
//}
//int main() {
//    char a[] = { "rty" };
//    printf("%d", my_strlen(a));
//    return 0;
//}
/*�����ݹ�2���鳤��*/

//int my_jiec(int a) {
//    if (a <= 1) {
//        return 1;
//    }
//    else
//    {
//        return a * my_jiec(a - 1);
//    }
//}
//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    printf("%d", my_jiec(a));
//}
/*�����ݹ�3�ײ�*/

//int my_jiec(int a) {
//   /* if (a <= 2) {
//        return 1; 
//    }
//    else
//    {
//        return my_jiec(a-1)+my_jiec(a-2);
//    }*/
//    //��n��쳲�������,�ݹ���
//    /*int b = 1, c = 1, d = 1;
//    while (a > 2) {
//        d = b + c;
//        b = c;
//        c = d;
//        a--;
//    }
//    return d;*/
//    //��n��쳲�������,����(����==ѭ��)��
//}
//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    printf("%d", my_jiec(a));
//}
/*��n��쳲�������,�ݹ�͵�����*/



