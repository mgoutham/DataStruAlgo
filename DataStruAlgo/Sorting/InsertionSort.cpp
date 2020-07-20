#include <iostream>

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