/*

	Sort	: Selection

	Data structure - Array

	The algorithm divides the input list into two parts: a sorted sublist of items which is built up from
	left to right at the front (left) of the list and a sublist of the remaining unsorted items that occupy
	the rest of the list. Initially, the sorted sublist is empty and the unsorted sublist is the entire
	input list. The algorithm proceeds by finding the smallest (or largest, depending on sorting order)
	element in the unsorted sublist, exchanging (swapping) it with the leftmost unsorted element
	(putting it in sorted order), and moving the sublist boundaries one element to the right.

	The time efficiency of selection sort is quadratic, so there are a number of sorting techniques
	which have better time complexity than selection sort. One thing which distinguishes selection sort
	from other sorting algorithms is that it makes the minimum possible number of swaps, n ? 1 in the
	worst case.

	Time and Space complexities :-
	Worst-case performance			О(n2) comparisons, О(n) swaps
	Best-case performance			О(n2) comparisons, О(n) swaps
	Average performance				О(n2) comparisons, О(n) swaps

	Worst-case space complexity		O(1) auxiliary

*/

#include <iostream>

using namespace std;

void selectionSort(int p[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int iMin = i;

		for (int j = i; j < len; j++) 
		{
			if (p[j] < p[i])
			{
				iMin = j;
			}
		}

		if (i != iMin)
		{
			//swap
			int tmp = 0;
			tmp = p[i];
			p[i] = p[iMin];
			p[iMin] = tmp;
		}

		cout << "\nAfter " << i + 1 << "th iteration\n";
		for (int i = 0; i < len; i++)
			cout << p[i] << "\t";
	}
}