#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//一个整形能表达的数字最大是21亿多。
//倒着数，每三位加上一个逗号
//123456789---123，456，789
//987 654 321//倒着数
//
//int main()
////{
////	int n;
////	scanf("%d", &n);
////	char arr[14] = { 0 };
////	int i = 0;
////	int k = 0;//计数器，每三次加入一个逗号。
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
////	//最后倒着打印
////	int j = 0;
////	for (j = i - 1; j >= 0; j--)
////	{
////		printf("%c", arr[j]);
////	}
////	return 0;}
//删除第一个字符串中出现的第二个字符。
//当第一个字符串的字符不是第二个字符串中的字符时就打印，是的时候就不打印。
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
//	//输入
//	gets(arr1);
//	gets(arr2);
//	int sz = strlen(arr1);
//	//打印
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		/*if (is_not_exist(arr1[i], arr2))
//		{
//			printf("%c", arr1[i]);
//		}*/
//		//strchr--查找字符，查找一个字符串中是否有一个字符，如果有则返回第一次出现的地址，如果没有则返回NULL；
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
//	int sum5 = 0;//sum5初始化为0；
//	ADD_TO_SUM(5, 10);//作用是：给sum5增加10.
//	//sum##num += value;--->  sum5+=10;
//	return 0;
//}

//#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
//int main()
//{
//	int x = 4;
//	int y = 3;
//	int z = MAX(x++, y++);
//	printf("x=%d y=%d z=%d\n", x, y, z);//输出的结果是什么？
//	return 0;
//}
//		//#define OFFSETOF(type,member)

//#include <stddef.h> 
//#define OFFSETOF(type,member) (int)&(((type*)0)->member)
////首先将0强制转换为结构体指针类型，然后指向成员变量，再取出成员的地址这个地址就是偏移量
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
	//unsigned char 的范围为0-255
	int j = 0;
	for (; i > 0; i -= 3) //要求i大于0，当i等于0时循环停止。所以我们就计算什么时候i等于0，这时j循环了多少次就可以了
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
//	//原码：
//	//100000000000000000000000000000011
//	//111111111111111111111111111111100
//	//111111111111111111111111111111101 -3的补码
//	unsigned int b = 2;
//	//000000000000000000000000000000010 2的补码
//	// 
//	//111111111111111111111111111111111两个相加为-1的补码
//	long c = a + b;
//	printf("%ld\n", c);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	char arr[14] = { 0 };//n的最大数是13位
//	int i = 0;
//	int k = 0;
//	while (n)
//	{
//		if (k % 3 == 0&&k!=0)//k是用来记录每获取三个数字后就加上一个逗号的标识
//		{
//			arr[i++] = ',';
//			
//		}
//		//不断获取n的低位数字，然后把它变成数字字符放进数组里
//		arr[i++] = n % 10 + '0';//数字加'0'==数字字符 ---比如 8+'0'=='8'
//		//获得一个数字就给数组arr的下标+1
//		k++;
//		n /= 10;
//
//	}
//	//最后倒着打印数组
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
//			return 0;//如果一样直接返回0，那if语句就不成立，就不要打印
//		}
//		str++;
//	}
//	return 1; //最后遍历完arr2后发现没有字符与arr1[i]一样，那就返回1，if语句为真，进行打印
//
//}
int main()
{
	char arr1[100] = { 0 };
	char arr2[100] = { 0 };
	//输入
	gets(arr1);
	gets(arr2);
	int sz = strlen(arr1);
	int i = 0;
	//输出
	for (i = 0; i < sz; i++)
	{
		
		//if (is_not_exist(arr1[i],arr2))//如果该字符与arr2中所以字符都不一样那就可以打印，如果有一个一样那就不打印
		if (strchr(arr2, arr1[i])== NULL)//如果没有找到则返回NULL,也就可以打印了
		{
			printf("%c", arr1[i]);
		}
	}
	return 0;
}