#include<iostream>
using namespace std;

int main()
{
	int p, h, o;
	while (cin >> p >> h >> o)
	{
		if (h > o - p)
		{
			cout << "Hunters win!\n";
		}
		else
		{
			cout << "Props win!\n";
		}
	}
}
