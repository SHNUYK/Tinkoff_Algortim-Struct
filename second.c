#include <iostream>

using namespace std;

int main()
{
	int n;
	int* arr;
	
	cin >> n;
	arr = new int[n];

	cin >> arr[0];

	for (int i = 1; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] > arr[i - 1]) { arr[i] = arr[i - 1]; }
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";
	}

	return 0;
}
