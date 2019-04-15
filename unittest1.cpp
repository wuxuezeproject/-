#include "stdafx.h"
#include "CppUnitTest.h"

extern int GetSum(int* array, int num);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)	//array==NULL
		{
			int *array = {};
			int num = sizeof(array) / sizeof(array[0]);
			int Max = GetSum(array, num);
			Assert::AreEqual(Max, 0);
		}
		TEST_METHOD(TestMethod2)	//(sum=sum+array)&&(sum>max)&&(max>0)
		{
			int array[] = { 2,2,2 };
			int num = sizeof(array) / sizeof(array[0]);
			int Max = GetSum(array, num);
			Assert::AreEqual(Max, 6);
		}
		TEST_METHOD(TestMethod3)	//(sum=sum+array)&&(sum<max)&&(max>0)
		{
			int array[] = { 5,-2,3 };
			int num = sizeof(array) / sizeof(array[0]);
			int Max = GetSum(array, num);
			Assert::AreEqual(Max, 6);
		}
		TEST_METHOD(TestMethod4)	//(sum=array)&&(sum>max)&&(max>0)
		{
			int array[] = { -2,5,3 };
			int num = sizeof(array) / sizeof(array[0]);
			int Max = GetSum(array, num);
			Assert::AreEqual(Max, 8);
		}
		TEST_METHOD(TestMethod5)	//(sum=array)&&(sum>max)&&(max<0)
		{
			int array[] = { -2,-1 };
			int num = sizeof(array) / sizeof(array[0]);
			int Max = GetSum(array, num);
			Assert::AreEqual(Max, 0);
		}
		TEST_METHOD(TestMethod6)	//(sum=array)&&(sum<max)&&(max<0)
		{
			int array[] = { -2,-3,-5 };
			int num = sizeof(array) / sizeof(array[0]);
			int Max = GetSum(array, num);
			Assert::AreEqual(Max, 0);
		}
	};
}