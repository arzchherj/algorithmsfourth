#pragma once
#include <iostream>
//排序类的父类 应包含排序函数 比较函数 是否已排序函数 输出函数
class sort_base
{
public:
	
	 virtual void sort() = 0;
	 virtual bool isSortState() = 0;
	 virtual void printAll() = 0;
	 virtual int test_main() = 0;
};