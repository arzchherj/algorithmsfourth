#pragma once
#include <iostream>
#include <vector>
using namespace std;

class union_find
{
public:
	
	//���������ʼ��
	void union_init(int n);
	//��������������
	void union_connect(const int &i,const int &j);
	//��ѯ�����ڵ��Ƿ�����
	bool union_connect_state(const int &i, const int &j);
	//��ȡ���ĸ��ڵ�
	int union_get(const int i);
	int test_main();
private:
	int size;
	int number[256];
	
};

