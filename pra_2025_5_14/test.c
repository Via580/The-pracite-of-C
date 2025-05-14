#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	char b = 0;
	int ret = 0;
	int flag = 0;
	scanf("%d %c", &ret, &b);
	while (b != '='&& ret != 0)
	{
		
		switch (b)
		{
		case '+':
			scanf("%d %c ", &a, &b);
			ret += a;

			break;
		case '-':
			scanf("%d %c ", &a, &b);
			ret = ret - a;
			break;
		case '*':
			scanf("%d %c ", &a, &b);
			ret = ret * a;
			break;
		case '/':
			if (a <= 0)
			{
				flag = 1;
				break;
			}
			else
			{
				scanf("%d %c ", &a, &b);
				ret /= a;
				break;
			}
		default:
			break;
		}
		if (flag== 1)
			break;
	}
	if (1 == flag)
		printf("ERROR");
	else
	printf("%d", ret);
	return 0;
}


#include<stdio.h>
#include<math.h>

int main(void) {
    int a, b, sum;
    char c;
    a = 0;
    scanf("%d%c", &sum, &c);
    while (c != '=' && sum != 0) {
        switch (c) {
        case '+':scanf("%d%c", &b, &c);sum += b;break;
        case '-':scanf("%d%c", &b, &c);sum -= b;break;
        case '*':scanf("%d%c", &b, &c);sum *= b;break;
        case '/':if (b <= 0) { a = 1;break; }
                else { scanf("%d%c", &b, &c);sum /= b;break; }
        default:a = 1;break;
        }
        if (a == 1) {
            break;
        }
    }
    if (a == 0) {
        printf("%d", sum);
    }
    else printf("ERROR\n");
    return 0;
}


