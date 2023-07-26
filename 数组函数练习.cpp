#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void init(int arr[],int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] != 0)
//		{
//			arr[i] = 0;
//		}
//	}
//}
//void reverse(int arr[],int len)
//{
//	int left = 0; 
//	int right = len - 1;
//	int tmp = 0;
//	while (left<right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void print(int arr[], int len)
//{
//	int j = 0;
//	for (j = 0; j < len; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	
//	int arr[10] = {0,1,2,3,4,5,6,7,9,8};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	print(arr, len);
//	reverse(arr, len);
//	print(arr, len);
//	init(arr,len);
//	int n = 0;
//	for (n = 0; n < 10; n++)
//	{
//		printf("%d ", arr[n]);//´òÓ¡
//	}
//
//
//}

//void bubblesort(int arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len - 1; i++)
//	{
//		int j = 0;
//		for(j=0;j<len-i-1;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
// }
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 9,8,6,5,4,7,2,3,1,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bubblesort(arr, len);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <  101; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count=%d\n", count);
//}
