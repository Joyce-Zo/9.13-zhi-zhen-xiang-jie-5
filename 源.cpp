#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void menu()
{
	printf("*********************\n");
	printf("**** 1.Add 2.Div ****\n");
	printf("**** 3.Mul 4.Sub ****\n");
	printf("**** 5.Xor 0.Quit ***\n");
	printf("*********************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int Xor(int x, int y)
{
	return x ^ y;// XOR 异或
}

void Calc(int(*pf)(int, int))
{
	int x = 0, y = 0;
	printf("请输入2个数字:->");
	scanf("%d%d", &x, &y);
	printf("%d\n", pf(x, y));
}
int main()
{
	int input = 0;
	do
	{
		menu();
		int x = 0, y = 0;
		printf("请选择模式:->");
		scanf("%d", &input);
		 pfArr函数指针[]数组 用途 - 转移表
		int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
		if (input >= 1 && input < 6)
		{
			printf("请输入2个数字:->");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
			printf("退出程序!\n");
		else
			printf("输入错误!\n");
	} while (input);
	return 0;
}

int  main()
{
	int input = 0;
	do
	{
		menu();
		int x = 0, y = 0;
		printf("请选择模式:->");
		scanf("%d", &input);
		/*printf("请输入2个数字:->");
		scanf("%d%d", &x, &y);*/
		switch (input)
		{
		case 1:
			printf("请输入2个数字:->");
			scanf("%d%d", &x, &y);
			printf("%d\n", Add(x,y));
			break;
		case 2:
			printf("请输入2个数字:->");
			scanf("%d%d", &x, &y);
			printf("%d\n", Sub(x,y));
			break;
		case 3:
			printf("请输入2个数字:->");
			scanf("%d%d", &x, &y);
			printf("%d\n", Mul(x,y));
			break;
		case 4: 
			printf("请输入2个数字:->");
			scanf("%d%d", &x, &y);
			printf("%d\n", Div(x,y));
			break;
		case 0:
			printf("退出程序!");
			break;
		default:
			printf("输入错误!");
			break;
		}
	} while (input);
	return 0;
}

int  main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择模式:->");
		scanf("%d", &input);
		/*printf("请输入2个数字:->");
		scanf("%d%d", &x, &y);*/
		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4: 
			Calc(Div);
			break;
		case 5:
			Calc(Xor);
			break;
		case 0:
			printf("退出程序!");
			break;
		default:
			printf("输入错误!");
			break;
		}
	} while (input);
	return 0;
}

int main()
{
	int arr[10] = { 0 };		// 数组
	int(*p)[10] = &arr;			// 指针数组

	int (*pf)(int, int);		// 函数指针
	int(* pfarr [5])(int, int);	// 函数指针数组 - 是数组
	int(* (*ppfarr) [4])(int, int);// 指向函数指针数组的指针 - 是指针
			ppfarr是一个数组指针，指针指向的数组[]有4个元素
			指向的数组的每一个元素的类型是一个函数指针 int(*)(int,int)；
	return 0;
}

void print(char* str)
{
	printf("I love you:%s",str);
}
void  test(void (*p)(char*))
{
	printf("test\n");
	 p("Joyce");
}
int main()
{
	test(print);

	return 0;
}