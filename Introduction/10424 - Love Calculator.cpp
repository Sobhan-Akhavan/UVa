#include<iostream>
#include<string>
using namespace std;

int sum_of_characters(string x)
{
	int sum = 0;
	for (size_t i = 0; i < x.size(); i++)
	{
		if ((int)x[i] >= 97 && (int)x[i] <= 122)
		{
			sum += (int)x[i] - 96;
		}
		if ((int)x[i] >= 65 && (int)x[i] <= 90)
		{
			sum += (int)x[i] - 64;
		}
	}
	return sum;
}

int sum_of_numbers(int sum)
{
	int quotient;
	int reminder = 0;
	while (sum >= 10 || reminder >= 10)
	{
		do
		{
			reminder += sum % 10;
			quotient = sum / 10;
			sum = quotient;
		} while (quotient != 0);
		sum = reminder;
		reminder = 0;
	}
	return sum;
}

int main()
{
	string x, y;
	int digit_x, digit_y;
	while (getline(cin, x))
	{
		getline(cin, y);
		digit_y = sum_of_numbers(sum_of_characters(y));
		digit_x = sum_of_numbers(sum_of_characters(x));
		cout.precision(2);
		if (digit_y > digit_x)
		{
			swap(digit_y, digit_x);
		}
		cout << fixed << ((float)digit_y / (float)digit_x) * 100 << " %" << endl;
	}
}
