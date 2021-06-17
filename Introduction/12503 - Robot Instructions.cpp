#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t, n;
	string instruction;
	int position;
	int arr[101];
	cin >> t;
	for (size_t i = 0; i < t; i++)
	{
		position = 0;
		cin >> n;
		for (size_t j = 0; j < n; j++)
		{
			cin >> instruction;
			if (instruction == "LEFT")
			{
				position--;
				arr[j] = -1;
			}
			else if (instruction == "RIGHT")
			{
				position++;
				arr[j] = +1;
			}
			else
			{
				string as;
				int x;
				cin >> as >> x;
				position += arr[x - 1];
				arr[j] = arr[x - 1];
			}
		}
		cout << position << endl;
	}
}
