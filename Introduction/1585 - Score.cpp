#include<iostream>
#include<string>
using namespace std;

int calculated(string s)
{
	int k = 1;
	int sum = 0;
	for (size_t i = 0; i < s.size(); i++)
	{
		if (s[i] == 'O')
		{
			sum += k;
			k++;

		}
		else
		{
			k = 1;
		}
	}
	return sum;
}

int main()
{
	int t;
	string s;
	cin >> t;
	for (size_t i = 0; i < t; i++)
	{
		cin >> s;
		cout << calculated(s) << endl;
	}
}
