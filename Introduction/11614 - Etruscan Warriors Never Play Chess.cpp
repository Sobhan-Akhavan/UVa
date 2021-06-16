#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	long long x;
	cin >> t;
	for (size_t i = 0; i < t; i++)
	{
		cin >> x;
		cout << (long long)floor(sqrt(1 + 8 * x) - 1) / 2 << endl; 
	}
}
//formula for sum of 1 + 2 + 3 + 4 + ... is (n (n + 1) ) / 2 
