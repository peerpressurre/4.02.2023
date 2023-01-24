#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int sum = 0;
	srand(time(0));
	const int x = 10;
	const int y = 5;
	int arr[x][y];
	const int size = 5;
	int arr1[size][size];


	for (size_t i = 0; i < x; i++)
	{
		for (size_t j = 0; j < y; j++)
		{
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	cout << "------------------------------" << endl;
	for (size_t i = 0; i < 10; i++)
	{
		cout << i << " ";
		for (size_t j = 0; j < 5; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}


	/*for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j+2)
		{
			int sum = 0;
				for (size_t k = 0; k < 2 + 1; k++)
				{
					sum += arr[i][k];
					cout << "k: " << arr[i][k];
					cout << sum << endl;
				}
			cout << "j: " << arr[i][j] << endl;
		}
	}*/
	return 0;
}

	