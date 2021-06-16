#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		int m;
		int x, y, z;
		int result = 0;
		cin >> m;
		for (size_t j = 0; j < m; j++)
		{
			cin >> x >> y >> z;
			result += x * z;
		}
		cout << result << endl;
	}
}
