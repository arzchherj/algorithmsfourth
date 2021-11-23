#include"insert_sort.h"
#include<vector>
void  insert_sort::init()
{
	int number;
	while (cin >> number)
	{
		vec.push_back(number);
	}
}
bool insert_sort::isSortState()
{
	printAll();
	if (vec.size() <= 1)
	{
		return true;
	}
	for (int i = 0; i < vec.size() - 1; i++)
	{
		if (vec.at(i) > vec.at(i + 1))
		{
			return false;
		}
	}
	return true;
}
void insert_sort::sort()
{
	if (vec.size() <= 1)
	{
		return;
	}
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec.size()-1; j++)
		{
			if (vec.at(j) > vec.at(j + 1))
			{
				int tmp = vec.at(j);
				vec.at(j) = vec.at(j + 1);
				vec.at(j + 1) = tmp;
			}
		}
	}
}
void insert_sort::printAll()
{
	for (const auto &n : vec)
	{
		cout << n << " ";
	}
}

int insert_sort::test_main()
{
	init();
	sort();
	if (isSortState())
	{
		printAll();
	}
	return 0;
}