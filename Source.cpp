#include <iostream>
#include <ctime>
#include <string>

void selectionSort(int list[], int listSize)
{
	for (int i = 0; i < listSize - 1; i++)
	{
		double currentMin = list[i];
		int currentMinIndex = i;

		for (int j = i + 1; j < listSize; j++)
		{
			if (currentMin > list[j])
			{
				currentMin = list[j];
				currentMinIndex = j;
			}
		}

		if (currentMinIndex != i)
		{
			list[currentMinIndex] = list[i];
			list[i] = currentMin;
		}
		std::cout << list[i] << std::endl;
	}
}

int binarySearch(const int lyst[], int key, int listSize)
{
	int low = 0;
	int high = listSize - 1;


	while (high >= low)
	{
		int mid = (low + high) / 2;
		if (key < lyst[mid])
			high = mid - 1;
		else if (key == lyst[mid])
			return mid;
		else
			low = mid + 1;
	}
	return -1;
}


int main()
{
	int list[] = { 2, 4, 5, 3, 6, 16, 23, 45, 34, 64, 2, 3, 65, 45, 234, 34 };
	selectionSort(list, 16);
	int i = binarySearch(list, 45, 16);
	int j = binarySearch(list, 16, 16);

	std::cout << i << "  " << j << std::endl;

	

	return 0;
}