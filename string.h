#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20] = "stringa";
	char str2[20];
	char str3[20] = "stringb";

	printf("strcap result: %d\n", strcmp(str1, str3));
	strcpy(str2, str1);
	printf("strcpy: %s\n", str2);
	printf("strcap result: %d\n", strcmp(str1, str2));
	strcat(str2, str3);
	printf("strcat result: %s\n", str2);
}
