#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[] = "abc";
//	//char arr2[] = { 'a','b','c' };
//	char arr2[] = { 'a','b','c','\0'};
//	printf("%d\n",strlen(arr1));//strlen -string length -�����ַ������ȵ�
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//ת���ַ�--ת���ַ�����˼  ����"\n"- ����
//int main()
//{
//	//printf("\D:\c++\\test1\n");
//	//printf("%d\n",strlen("c:\test\32\test.c"));
//	//  \32--32��2��8��������
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���Ϊascii��ֵ����Ӧ���ַ�
//	//32--> 10���� 26->��Ϊascii��ֵ������ַ�
//	printf("%c\n",'\x61');
//	return 0;
//}

//ѡ�����
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��ú�ѧϰ��(1/0)>: ");
//	scanf("%d", &input);
//	if (input == 1)
//	printf("��offer");
//	else
//		printf("������\n");
//	return 0;
//}

//ѭ�����
int main()
{
	int line = 0;
	printf("�������\n");
	while (line < 20000)
	{
		printf("��һ�д���:%d\n",line);
		line++;
	}
	if(line>=20000)
	printf("��offer\n");
	return 0;
}