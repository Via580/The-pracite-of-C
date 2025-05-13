//**
//* Definition for singly - linked list.
//* struct ListNode {
//    *int val;
//    *struct ListNode* next;
//    *
//};
//*/
#include <stdio.h>
#include <string.h>
两数之和
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	struct ListNode* head = NULL;
	struct ListNode* tail = NULL;
	int carry = 0;
	while (l1 || l2)
	{
		int n1 = l1 ? l1->val : 0;
		int n2 = l2 ? l2->val : 0;
		int sum = n1 + n2 + carry;
		if (!head)
		{
			head = tail = (struct ListNode*)malloc(sizeof(struct ListNoede));
			head->val = sum % 10;
			head->next = NULL;
		}
		else
		{
			tail->next = (struct ListNode*)malloc(sizeof(struct ListNoede));
			tail->next->val = sum;
			tail = tail->next;
			tail->next = NULL;
		}
		carry = sum / 10;
		if (l1)
		{
			l1 = l1->next;
		}
		if (l2)
		{
			l2 = l2->next;
		}
	}
	if (carry > 0)
	{
		tail->next = (struct ListNode*)malloc(sizeof(struct ListNoede));
		tail->next->val = carry;
		tail = tail->next;
		tail->next = NULL;
	}
	return head;
}


int main()
{
	char str[100] = "  this   is  a sentence ";
	char arr[100][100] = { 0 };
	int len = strlen(str);
	
	int j = 0;
	int i = 0;
	int m = 0;
	int n = 0;
	int cnt = 0;
	int space = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			for (;str[i] != ' ' && str[i] != '\0'; i++)
			{
				arr[m][n++] = str[i];
			}
			m++;
			n = 0;
			cnt++;
		}
		
		if (str[i] == ' ')
			space++;
	}
	if (cnt == 1)
		goto end;
	int period = space / (cnt - 1);
	for (i = 0; i <= m; i++)
	{
		printf("%s", arr[i]);
		for (j = 0; j < period && space > 0;j++)
		{
			printf(" ");
			space--;
		}
	}
end:
	if (cnt == 1)
		printf("%s", arr[0]);
	while (space--)
		printf(" ");
	return 0;
}