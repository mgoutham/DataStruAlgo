#include <iostream>

/*

	Sort : Insersion Sort
	Data Structure : Array

	Insertion sort iterates, consuming one input element each repetition, and growing a sorted output list. 
	At each iteration, insertion sort removes one element from the input data, finds the location it belongs 
	within the sorted list, and inserts it there. It repeats until no input elements remain.

	Time and Space complexities :-
	Worst-case performance			О(n2) comparisons, О(n2) swaps
	Best-case performance			О(n) comparisons, О(1) swaps
	Average performance				О(n2) comparisons, О(n2) swaps

	Worst-case space complexity		O(n) total,O(1) auxiliary

*/

void InsertionSort(int p[],int len)
{
	for (int i = 1; i < len; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (p[j] < p[j-1])
			{
				auto tmp = p[j-1];
				p[j-1] = p[j];
				p[j] = tmp;
			}
		}

		std::cout << "\nAfter " << i + 1 << "th iteration\n";
		for (int i = 0; i < len; i++)
			std::cout << p[i] << "\t";
	}
}