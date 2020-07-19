#include <iostream>

using namespace std;

extern void selectionSort(int p[], int len);
extern void bubblesort(int p[], int len);

int main()
{

	int array1[5] = { 11, 25, 12, 22, 64 };
	int len = 0;

	//size of array
	len = sizeof(array1) / sizeof(array1[0]);
	//cout << len << endl;

	cout << "Before Sorting\n";
	for (auto d : array1)
	{
		cout << d << "\t";
	}

	//selectionSort(array1, len);
	bubblesort(array1, len);

	cout << "\nAfter Sorting\n";
	for (auto d : array1)
	{
		cout << d << "\t";
	}

	return 0;
}