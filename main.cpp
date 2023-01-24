#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int sum = 0, avr, min, max;
	srand(time(0));
	const int size = 5;
	int arr2D[size][size];
	
	
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			arr2D[i][j] = rand() % 10;
			cout << arr2D[i][j] << ' ';
		}
	    cout << endl;
	}
	min = max = arr2D[0][0];

	
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (arr2D[i][j] < min)
			{
				min = arr2D[i][j];
			}
			if (arr2D[i][j] > max)
			{
				max = arr2D[i][j];
			}
			sum += arr2D[i][j];
		}
	}
	//------------------AVR------------------
	avr = sum / (size * size);

	cout << "Summary: " << sum << endl;
	cout << "Average: " << avr << endl;
	cout << "Maximum: " << max << endl;
	cout << "Minimum: " << min << endl;

	return 0;
}