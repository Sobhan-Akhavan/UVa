#include<iostream>
using namespace std;

int main()
{
	int h, w;
	char s;
	bool flag;
	float area;
	while (cin >> h >> w)
	{
		area = 0;
		for (size_t i = 0; i < h; i++)
		{
			flag = false;
			for (size_t j = 0; j < w; j++)
			{
				cin >> s;
				if (s == '\\' || s == '/')
				{
					area += 0.5;
					flag = !flag;
				}
				else if (flag)
				{
					area += 1;
				}
			}
		}
		cout << (int)area << endl;
	}
}
