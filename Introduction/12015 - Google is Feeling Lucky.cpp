#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (size_t i = 0; i < t; i++)
	{
		int mx = 0;
		int arr[10];
		string arr_s[10];
		for (size_t j = 0; j < 10; j++)
		{
			cin >> arr_s[j] >> arr[j];
			if (arr[j] > arr[mx])
			{
				mx = j;
			}
		}
		cout << "Case #" << i + 1 << ":" << endl;
		for (size_t j = 0; j < 10; j++)
		{
			if (arr[j] == arr[mx])
			{
				cout << arr_s[j] << endl;
			}
		}
	}
}
