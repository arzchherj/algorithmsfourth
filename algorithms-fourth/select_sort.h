#pragma once
#include <iostream>
#include <vector>
#include "sort_base.h"
using namespace std;
//此处应使用模板来支持各种类型的排序，但是这里空间太小，我写不下
class select_sort:public sort_base
{
public:
	void  init();
	bool isSortState();
	void sort();
	void printAll();
	int test_main();
private:
	vector<int> vec;

};