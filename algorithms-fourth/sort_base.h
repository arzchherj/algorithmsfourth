#pragma once
#include <iostream>
//������ĸ��� Ӧ���������� �ȽϺ��� �Ƿ��������� �������
class sort_base
{
public:
	
	 virtual void sort() = 0;
	 virtual bool isSortState() = 0;
	 virtual void printAll() = 0;
	 virtual int test_main() = 0;
};