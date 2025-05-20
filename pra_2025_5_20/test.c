#include <stdio.h>
#include <string.h>
char* longestCommonPrefix(char** strs, int strsSize)
{
    if (strsSize == 0)
        return "";
    int i = 0;
    int j = 0;
    for (i = 0; i < strlen(strs[0]); i++)
    {
        for (j = 1; j < strsSize; j++)
        {
            if (strs[0][i] != strs[j][i])
            {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }
    return strs[0];
}
int main()
{
    char strs[10][10] = { "abcde" , "abcjh" , "skjhgdf" };
    char* p = longestCommonPrefix(strs, 3);
    printf("%s", strs[0]);
    return 0;
}