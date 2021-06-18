#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n, b, h, w;
	while (cin >> n >> b >> h >> w)
	{
		int p, a;
		int total;
		int sum = 2147483647;
		for (size_t i = 0; i < h; i++)
		{
			cin >> p;
			for (size_t j = 0; j < w; j++)
			{
				cin >> a;
				if (a >= n)
				{
					total = p * n;
					if (total <= b)
					{
						sum = min(total, sum);
					}
				}
			}
		}
		if (sum != 2147483647)
		{
			cout << sum << endl;
		}
		else
		{
			cout << "stay home" << endl;
		}
	}
}
