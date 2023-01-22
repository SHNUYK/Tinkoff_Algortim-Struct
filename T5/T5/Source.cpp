#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int tmp = 0, tmp1 = 0, tmp2 = 0;
	int c = 0, c1 = 0, c2 = 0;
	int val = 0; 
	int* arr, * arr1, * arr2;

	arr = new int [n];
	arr1 = new int[n];
	arr2 = new int[n];

	for (int i = 1; i <= n; i++)
	{
		tmp += i;
	}

	if (tmp % 3 != 0)
	{
		cout << "-1";
		return 0;
	}
	else
	{
		val = tmp / 3;
		tmp = 0;
		for (int i = n; i != 0; i--)
		{
			if (tmp + i <= val) { tmp += i; arr[c] = i; c++;  continue; }
			else {
				if (tmp1 + i <= val) { tmp1 += i; arr1[c1] = i; c1++;  continue; }
				else
					if (tmp2 + i <= val) { tmp2 += i; arr2[c2] = i; c2++;  continue; }
			}
		}
	}
	cout << c << endl;
	for (int i = 0; i < c; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl << c1 << endl;
	for (int i = 0; i < c1; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl << c2 << endl;
	for (int i = 0; i < c2; i++)
	{
		cout << arr2[i] << " ";
	}
	return 0;
}