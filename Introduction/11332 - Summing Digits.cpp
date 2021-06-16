#include<iostream>
using namespace std;

int sum_of_numbers(int number)
{
	int quotient;
	int reminder = 0;
	while (number >= 10 || reminder >= 10)
	{
		while (number > 0)
		{
			reminder += number % 10;
			quotient = number / 10;
			number = quotient;

		}
		number = reminder;
		reminder = 0;
	}
	return number;
}

int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
		{
			return 0;
		}
		cout << sum_of_numbers(n) << endl;
	}
}
