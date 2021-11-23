#include"select_sort.h"
#include<vector>
void  select_sort::init()
{
	int number;
	while (cin >> number)
	{
		vec.push_back(number);
	}
}
bool select_sort::isSortState()
{
	printAll();
	if (vec.size() <= 1)
	{
		return true;
	}
	for (int i = 0; i < vec.size()-1; i++)
	{
		if (vec.at(i) > vec.at(i + 1))
		{
			return false;
		}
	}
	return true;
}
void select_sort::sort()
{
	if (vec.size() <= 1)
	{
		return;
	}
	for (int i = 0; i < vec.size()-1; i++)
	{
		int min = vec.at(i);
		int min_index = i;
		for (int j = i+1; j < vec.size(); j++)
		{
			if (vec.at(j) < min)
			{
				min_index = j;
				min = vec.at(j);
			}
		}
		if (min_index != i)
		{
			int tmp = vec.at(i);
			vec.at(i) = vec.at(min_index);
			vec.at(min_index) = tmp;
		}
	}
}
void select_sort::printAll()
{
	for (const auto &n : vec)
	{
		cout << n << " ";
	}
}

int select_sort::test_main()
{
	init();
	sort();
	if (isSortState())
	{
		printAll();
	}
	return 0;
}