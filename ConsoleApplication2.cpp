// ConsoleApplication2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

int GetSum(int* array, int num)
{
	if (array == NULL) return 0;
	int i;
	int Max{ array[0] };
	int Sum{ array[0] };
	for (i = 1; i < num; i++)
	{
		Sum = (Sum + array[i]) > (array[i]) ? (Sum + array[i]) : (array[i]);
		if (Sum > Max)
		{
			Max = Sum;
		}
	}
	if (Max < 0)
	{
		Max = 0;
	}
	return Max;
}

int main()
{
	int array[] = { -2,11,-4,13,-5,-2 };
	int num;
	int MaxSum = 0;
	num = sizeof(array) / sizeof(array[0]);
	MaxSum = GetSum(array, num);
	cout << MaxSum << endl;
    return 0; 
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
