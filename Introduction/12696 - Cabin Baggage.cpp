#include<iostream>
using namespace std;

int main()
{
	int t;
	float length, width, height, weight;
	int out;
	int sum = 0;
	cin >> t;
	for (size_t i = 0; i < t; i++)
	{
		out = 1;
		cin >> length >> width >> height >> weight;
		if (length + width + height <= 125 && weight <= 7)
		{
			out = 1;
		}
		else if (length > 56 || width > 45 || height > 25 || weight > 7)
		{
			out = 0;
		}
		cout << out << endl;
		sum += out;
	}
	cout << sum << endl;
}
