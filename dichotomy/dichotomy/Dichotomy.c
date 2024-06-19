#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//二分法
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9};
	int k = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	scanf("%d", &k);
	while (left <= right)
	{
		int mid = ((left + right) / 2);
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了,下标为%d", mid); 
			break;
		}
	}
	if (left > right)
	{
		printf("找不到");
	}
	return 0;
}