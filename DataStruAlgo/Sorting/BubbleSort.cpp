#include <iostream>


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
	}
}