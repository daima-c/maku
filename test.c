#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//} 
// 
//int main()
//{
// 
// const���εĳ�����
//	const int n = 10;
//	//int arr[n] = {0};
//	n = 20;
//	//const int num = 4;
//	//printf("%d\n", num);
// 
//	////2;���泣��
//	////4;
//	////num = 8;
//	//printf("%d\n", num);
//	return 0;
//}


//#define min 20//����ı�ʶ������
//
//int main()
//{
//	int arr[min] = { 0 };
//	printf("%d\n", min);
//	return 0;
//}

//ö�ٳ���
//ö��---һһ�о�

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET,
//};
//
//int main()
//{
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

	//�ַ�������
int main()
{
	char arr1[] = "abc";//����
	char arr2[] = { 'a','b','c',0};//  ��\0����ʾ�ַ����Ľ�����־
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}