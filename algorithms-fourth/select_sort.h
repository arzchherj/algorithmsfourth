#pragma once
#include <iostream>
#include <vector>
#include "sort_base.h"
using namespace std;
//�˴�Ӧʹ��ģ����֧�ָ������͵����򣬵�������ռ�̫С����д����
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