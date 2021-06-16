#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (size_t i = 0; i < t; i++)
	{
		int x, y;
		int flag = 0;
		cin >> x;
		for (size_t j = 0; j < 4; j++)
		{
			y = x;
			cin >> x;
			if (x - y != 1)
			{
				flag = 1;
			}
		}
		if (flag == 0)
		{
			cout << "Y" << endl;
		}
		else
		{
			cout << "N" << endl;

		}
	}
}
