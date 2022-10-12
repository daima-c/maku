#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[] = "abc";
//	//char arr2[] = { 'a','b','c' };
//	char arr2[] = { 'a','b','c','\0'};
//	printf("%d\n",strlen(arr1));//strlen -string length -计算字符串长度的
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//转义字符--转变字符的意思  例如"\n"- 换行
//int main()
//{
//	//printf("\D:\c++\\test1\n");
//	//printf("%d\n",strlen("c:\test\32\test.c"));
//	//  \32--32是2个8进制数字
//	//32作为8进制代表的那个十进制数字，作为ascii码值，对应的字符
//	//32--> 10进制 26->作为ascii码值代表的字符
//	printf("%c\n",'\x61');
//	return 0;
//}

//选择语句
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你好好学习吗？(1/0)>: ");
//	scanf("%d", &input);
//	if (input == 1)
//	printf("好offer");
//	else
//		printf("卖红薯\n");
//	return 0;
//}

//循环语句
int main()
{
	int line = 0;
	printf("加入比特\n");
	while (line < 20000)
	{
		printf("敲一行代码:%d\n",line);
		line++;
	}
	if(line>=20000)
	printf("好offer\n");
	return 0;
}