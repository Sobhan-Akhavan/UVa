include<iostream>
using namespace std;

int main()
{
	int t;
	int x;
	int flag = 0;
	int arr[10];
	cin >> t;
	cout << "Lumberjacks:\n";
	for (size_t i = 0; i < t; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			cin >> x;
			arr[j] = x;

		}
		for (size_t j = 0; j < 9; j++)
		{
			if (arr[j + 1] > arr[j])
			{
				flag++;
			}
			else
			{
				flag--;
			}
		}
		if (flag == 9 || flag == -9)
		{
			cout << "Ordered\n";
		}
		else
		{
			cout << "Unordered\n";
		}
		flag = 0;
	}
}
