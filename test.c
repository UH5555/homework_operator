#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//reverseһ������
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// Init(arr, sz);//�����ʼ��
//	Print(arr, sz);//��ӡ����
//	Reverse(arr, sz);
//	printf("\n");
//	Print(arr, sz);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}

//int i;//ȫ�ֱ��� - ����ʼ�� - Ĭ����0
//int main()
//{
//	i--;
//	//-1
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	if (i > sizeof(i))//sizeof() - �������/������ռ�ڴ�Ĵ�С >=0 �޷�����
//		printf(">\n");
//	else
//		printf("<\n");
//	return 0;
//}

////ͳ��һ����������(����)��1�ĸ���
//#include <stdlib.h> 
////int count_bit_one(unsigned int n)
////{
////	int count = 0;
////	while (n)
////	{
////		if (n % 2 == 1)
////		{
////			count++;
////		}
////		n = n / 2;
////	}
////	return count;
////}
////int count_bit_one(int n)
////{
////	int count = 0;
////	int i = 0;
////	for (i = 0; i < 32; i++)
////	{
////		if ((1 & (n>>i)) == 1)
////		{
////			count++;
////		}
////	}
////	return count;
////}
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count = %d\n", count);
//	//system("pause");//system�⺯�� - ִ��ϵͳ���� - ��ͣ
//	return 0;
//}

//int get_diff_bit(int m,int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a,&b);
//	int count = get_diff_bit(a, b);
//	printf("count = %d", count);
//	return 0;
//	
//}

//void print(int m)
//{
//	int i = 0;
//	printf("����λ\n");
//	for (i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (m >> i) & 1);
//		//����λ
//	}
//	printf("\n");
//	printf("ż��λ\n");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//		//ż��λ
//	}
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	return 0;
//}

//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

////�ַ�������
//#include <string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if(my_strlen(arr+1)>=2)
//		reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

////����ÿλ��֮��
//int Digitsum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return (Digitsum(num / 10) + (num % 10));
//	}
//	else
//		return num;
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = Digitsum(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}

////n��k�η�
//int Pow(int n, int k)
//{
//	if (k < 0)
//		return (1.0 / Pow(n, -k));
//	else if (k == 0)
//		return 1;
//	else
//		return n * Pow(n, k - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("ret=%lf\n", ret);
//	return 0;
//}