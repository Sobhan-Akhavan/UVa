#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int p;
	int a, b, c, d;
	int n;
	while (cin >> p >> a >> b >> c >> d >> n)
	{
		double price;
		double mx = -2001;
		double distance = 0;
		for (size_t k = 1; k <= n; k++)
		{
			price = p * (sin(a * k + b) + cos(c * k + d) + 2);
			if (price > mx)
			{
				mx = price;
			}
			distance = max(distance, mx - price);
		}
		cout.precision(6);
		cout << fixed << distance << endl;
	}
}
//don`t need to determine max and min price just computing the max(price(n-i), ... ,price(n))
