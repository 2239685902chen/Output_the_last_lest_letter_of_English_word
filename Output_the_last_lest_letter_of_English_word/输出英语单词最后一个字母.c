#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char q[250] = "0";
	gets(q);
	char* w = " ";
	char* ret = NULL;
	for (ret = strtok(q, w); ret != NULL; ret = strtok(NULL, w))
	{
		while (*ret)
		{
			ret++;
		}
		printf("%c ", *(ret - 1));
	}
	return 0;
}