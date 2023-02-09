#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int sum = 0;
	srand(time(0));
	const int x = 5;
	const int y = 10;
	int arr[x][y];
	const int size = 5;
	int arr2[size][size];


	for (size_t i = 0; i < x; i++)
	{
		for (size_t j = 0; j < y; j++)
		{
			arr[i][j] = rand() % 50;
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	cout << "--------------arr2--------------" << endl;

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < y; j+=2)
		{
			arr2[i][j] = arr[i][j] + arr[i][j + 1];
			cout << arr2[i][j] << ' ';
		}
		cout << endl;
	}
	
	return 0;
}

	