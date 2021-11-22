#include "union_find.h"
static int times = 0;
void union_find::union_init(int  n)
{
	size = n;
	for (int i = 0; i < n; i++)
	{
		number[i] = i;
	}
}
int union_find::union_get(const int i)
{
	int result = i;
	while (number[result] != result)
	{
		number[result] = number[number[result]];
		result = number[result];
		times++;
	}
	return result;
}
bool union_find::union_connect_state(const int &i,const int &j)
{
	int rea = union_get(i);
	int reb = union_get(j);
	return rea == reb ? true : false;
}
void union_find::union_connect(const int &a,const int &b)
{
	int rea = union_get(a);
	int reb = union_get(b);
	if (rea == reb) return;
	number[rea] = reb;
	times++;
}
int union_find::test_main()
{
	int number;
	cin >> number;
	union_init(number);
	int a, b;
	while (cin >> a >> b)
	{
		if (union_connect_state(a, b))
			continue;
		union_connect(a, b);
		
	}
	for (int i = 0; i < number; i++)
	{
		cout << union_get(i)<< endl;
	}
	cout << times << endl;
	return 0;
}