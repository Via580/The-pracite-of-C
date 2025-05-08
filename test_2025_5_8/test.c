#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char*  convert(char* s, int numRows)
{
	char ss[100] = { 0 };
	int len = strlen(s);
	int t = 2 * numRows - 2;
	int i = 0;
	int k = 0;
	for (i = 0; i < numRows; i++)
	{
		int j = 0;
		for (j = 0; j + i <= len - 1; j += t)
		{
			ss[k++] = s[j + i];
			if (i != 0 && i != numRows - 1 && j + t - i <= len - 1)
				ss[k++] = s[j + t - i];
		}
	}
	ss[k] = '\0';
	return ss;
}
int main()
{
	char s[100] = "P";
	int numRows = 0;
	scanf("%d", &numRows);
	printf("%s" , convert(s, numRows));
	return 0;
}
