#include <iostream>

using namespace std;


/*

	Sort : Bubble Sort
	Data Structure : Array

	Bubble sort, sometimes referred to as sinking sort, is a simple sorting algorithm that repeatedly steps 
	through the list, compares adjacent elements and swaps them if they are in the wrong order.
	The pass through the list is repeated until the list is sorted.

	Time and Space complexities :-
	Worst-case performance			О(n2) comparisons, О(n2) swaps
	Best-case performance			О(n) comparisons, О(1) swaps
	Average performance				О(n2) comparisons, О(n2) swaps

	Worst-case space complexity		O(n) total,O(1) auxiliary

*/


void bubblesort(int p[], int len)
{

	for (auto i = 0; i < len; i++)
	{
		for (auto j = 0; j < (len-i-1); j++)
		{
			if (p[j] > p[j + 1])
			{
				auto tmp = p[j + 1];
				p[j + 1] = p[j];
				p[j] = tmp;
			}
		}

		std::cout << "\nAfter " << i + 1 << "th iteration\n";
		for (int i = 0; i < len; i++)
			std::cout << p[i] << "\t";

	}
}


//int main()
//{

//    int array1[] = { 3 , 7,  4,  9,  5,  2,  6,  1 };
//    int len = 0;

//    //size of array
//    len = sizeof(array1) / sizeof(array1[0]);
//    //cout << len << endl;

//    cout << "Before Sorting\n";
//    for (auto d : array1)
//    {
//        cout << d << "\t";
//    }

//    //selectionSort(array1, len);
//    //bubblesort(array1, len);
//    bubblesort(array1, len);

//    cout << "\nAfter Sorting\n";
//    for (auto d : array1)
//    {
//        cout << d << "\t";
//    }

//    return 0;
//}
