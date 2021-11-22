#pragma once
#include <iostream>
#include <vector>
using namespace std;

class union_find
{
public:
	
	//依据输入初始化
	void union_init(int n);
	//将两个连接起来
	void union_connect(const int &i,const int &j);
	//查询两个节点是否连接
	bool union_connect_state(const int &i, const int &j);
	//获取他的根节点
	int union_get(const int i);
	int test_main();
private:
	int size;
	int number[256];
	
};

