#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//һ�������ܱ������������21�ڶࡣ
//��������ÿ��λ����һ������
//123456789---123��456��789
//987 654 321//������
//
//int main()
////{
////	int n;
////	scanf("%d", &n);
////	char arr[14] = { 0 };
////	int i = 0;
////	int k = 0;//��������ÿ���μ���һ�����š�
////	while (n)
////	{
////		if (k % 3 == 0&&k!=0)
////		{
////			arr[i++] = ',';
////		}
////		arr[i++] = n % 10 + '0';
////		n /= 10;
////		k++;
////	}
////	//����Ŵ�ӡ
////	int j = 0;
////	for (j = i - 1; j >= 0; j--)
////	{
////		printf("%c", arr[j]);
////	}
////	return 0;}
//ɾ����һ���ַ����г��ֵĵڶ����ַ���
//����һ���ַ������ַ����ǵڶ����ַ����е��ַ�ʱ�ʹ�ӡ���ǵ�ʱ��Ͳ���ӡ��
//#include <string.h>
//int is_not_exist(char ch, char* str)
//{
//	while (*str)
//	{
//		if (*str == ch)
//		{
//			return 0;
//		}
//		str++;
//	}
//	return 1;
//}
//int main()
//{
//	char arr1[100] = { 0 };
//	char arr2[100] = { 0 };
//	//����
//	gets(arr1);
//	gets(arr2);
//	int sz = strlen(arr1);
//	//��ӡ
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		/*if (is_not_exist(arr1[i], arr2))
//		{
//			printf("%c", arr1[i]);
//		}*/
//		//strchr--�����ַ�������һ���ַ������Ƿ���һ���ַ���������򷵻ص�һ�γ��ֵĵ�ַ�����û���򷵻�NULL��
//		if(strchr(arr2,arr1[i])==NULL)
//		{
//			printf("%c", arr1[i]);
//		}
//	}/*char* p = "hello ""xiao tao\n";
	/*printf("hello" " xiao tao\n");*/
	/*printf("%s\n", p);*/
//	return 0;
//}
//#define PRINT(FORMAT, VALUE) printf("the value is "FORMAT"\n", VALUE);
//int main()
//{
//
// PRINT("%d", 10);
//	return 0;
//}

//#define PRINT(FORMAT, VALUE) printf("the value of " #VALUE " is  "FORMAT"\n", VALUE);
//int main()
//{
//	int i = 20;
//	PRINT("%d", i + 5);
//	return 0;
//}
//#define ADD_TO_SUM(num, value)  sum##num += value;
//int main()
//{
//	int sum5 = 0;//sum5��ʼ��Ϊ0��
//	ADD_TO_SUM(5, 10);//�����ǣ���sum5����10.
//	//sum##num += value;--->  sum5+=10;
//	return 0;
//}

//#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
//int main()
//{
//	int x = 4;
//	int y = 3;
//	int z = MAX(x++, y++);
//	printf("x=%d y=%d z=%d\n", x, y, z);//����Ľ����ʲô��
//	return 0;
//}
//		//#define OFFSETOF(type,member)

//#include <stddef.h> 
//#define OFFSETOF(type,member) (int)&(((type*)0)->member)
////���Ƚ�0ǿ��ת��Ϊ�ṹ��ָ�����ͣ�Ȼ��ָ���Ա��������ȡ����Ա�ĵ�ַ�����ַ����ƫ����
//struct S
//{
//	char c;
//	int a;
//	double f;
//	
//};
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S,c));
//	printf("%d\n", OFFSETOF(struct S,a));
//	printf("%d\n", OFFSETOF(struct S,f));
//	return 0;
//}
//11111111111111111111111111111111
//10101010101010101010101010101010
//
//#define SWAP(n) ((n&0x55555555)<<1)+((n&0xaaaaaaaa)>>1)
//int main()
//{
//	int n = 10;
//	printf("%d", SWAP(n));
//	return 0;
//}
#include<stdio.h>
int main() {
	unsigned char i = 7;
	//unsigned char �ķ�ΧΪ0-255
	int j = 0;
	for (; i > 0; i -= 3) //Ҫ��i����0����i����0ʱѭ��ֹͣ���������Ǿͼ���ʲôʱ��i����0����ʱjѭ���˶��ٴξͿ�����
	{
		++j;
	}
	//7 4 1 254~~~ 2  255~85
	//3+84+1+85=173
	printf("%d\n", j);
	return 0;
}
//#include<stdio.h>
//#include<stdlib.h>
//void main()
//{
//	int a = -3;
//	//ԭ�룺
//	//100000000000000000000000000000011
//	//111111111111111111111111111111100
//	//111111111111111111111111111111101 -3�Ĳ���
//	unsigned int b = 2;
//	//000000000000000000000000000000010 2�Ĳ���
//	// 
//	//111111111111111111111111111111111�������Ϊ-1�Ĳ���
//	long c = a + b;
//	printf("%ld\n", c);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	char arr[14] = { 0 };//n���������13λ
//	int i = 0;
//	int k = 0;
//	while (n)
//	{
//		if (k % 3 == 0&&k!=0)//k��������¼ÿ��ȡ�������ֺ�ͼ���һ�����ŵı�ʶ
//		{
//			arr[i++] = ',';
//			
//		}
//		//���ϻ�ȡn�ĵ�λ���֣�Ȼ�������������ַ��Ž�������
//		arr[i++] = n % 10 + '0';//���ּ�'0'==�����ַ� ---���� 8+'0'=='8'
//		//���һ�����־͸�����arr���±�+1
//		k++;
//		n /= 10;
//
//	}
//	//����Ŵ�ӡ����
//	int j = 0;
//	for (j = i-1; j >= 0; j--)
//	{
//		printf("%c", arr[j]);
//	}
//	return 0;
//}
#include <string.h>
#include <assert.h>
//int is_not_exist(char ch, char* str)
//{
//	assert(str != NULL);
//	while (*str)
//	{
//		if (*str == ch)
//		{	
//			return 0;//���һ��ֱ�ӷ���0����if���Ͳ��������Ͳ�Ҫ��ӡ
//		}
//		str++;
//	}
//	return 1; //��������arr2����û���ַ���arr1[i]һ�����Ǿͷ���1��if���Ϊ�棬���д�ӡ
//
//}
int main()
{
	char arr1[100] = { 0 };
	char arr2[100] = { 0 };
	//����
	gets(arr1);
	gets(arr2);
	int sz = strlen(arr1);
	int i = 0;
	//���
	for (i = 0; i < sz; i++)
	{
		
		//if (is_not_exist(arr1[i],arr2))//������ַ���arr2�������ַ�����һ���ǾͿ��Դ�ӡ�������һ��һ���ǾͲ���ӡ
		if (strchr(arr2, arr1[i])== NULL)//���û���ҵ��򷵻�NULL,Ҳ�Ϳ��Դ�ӡ��
		{
			printf("%c", arr1[i]);
		}
	}
	return 0;
}