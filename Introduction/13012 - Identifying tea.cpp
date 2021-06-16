#include<iostream>
using namespace std;

int main()
{
	int x, y;
	while (cin >> x)
	{
		int flag = 0;
		for (size_t i = 0; i < 5; i++)
		{
			cin >> y;
			if (y == x)
			{
				flag++;
			}
		}
		cout << flag << endl;
	}
}
