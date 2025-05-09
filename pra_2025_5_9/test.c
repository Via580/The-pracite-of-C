// //leetcode����֮��
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int* ret = (int*)malloc(2 * sizeof(int));
    int i = 0;
    int j = 0;
    for (i = 0; i < numsSize - 1; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ret[0] = i;
                ret[1] = j;
                *returnSize = 2;
                goto end;
            }
        }
    }
end:
    return ret;
}                             


//���ظ��ַ�����Ӵ�
//�������ڴ���
//����Ƿ����ظ��ַ������ֵĳ��÷���
#include <stdio.h>
#include <string.h>
#define MAX(a , b) ((a > b) ? a : b)

int lengthOfLongestSubstring(char* s)
{
    int ans = 0;
    int left = 0;
    int right = 0;
    char cnt[127] = { 0 };
    for (right = 0; s[right]; right++)
    {
        cnt[s[right]]++;
        while (cnt[s[right]] > 1)//����Ƿ����ַ��ظ�
        {
            cnt[s[left]]--;//ȥ���ظ��ַ����Ӵ�������˿�ʼȥ��
            left++;
        }
        ans = MAX(ans, right - left + 1);
    }
    return ans;
}

int main()
{
    char s[100] = "abcabcde";
    printf("%d", lengthOfLongestSubstring(s));
    return 0;
}
