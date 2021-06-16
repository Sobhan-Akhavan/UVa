#include<iostream>
using namespace std;

int main()
{
	int n;
	int i = 0;
	while (cin >> n)
	{
		if (n == 0)
		{
			return 0;
		}
		i++;
		int x;
		int flag = 0;
		for (size_t i = 0; i < n; i++)
		{
			cin >> x;
			if (x > 0)
			{
				flag++;
			}
			else
			{
				flag--;
			}
		}
		cout << "Case " << i << ": " << flag << endl;
	}
}
