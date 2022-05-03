#include <iostream>

using namespace std;

int A_BinarySearch(const int arr[],int first,int last,int target)
{
	int mid = (first + last) / 2;

	if(first > last)
	{
		//failed.
		return -1;
	}
	 
	if (arr[mid] == target)
	{
		return arr[mid];
	}
	else if (arr[mid] > target)
	{
		return A_BinarySearch(arr, first, mid - 1, target);
	}
	else
	{
		return A_BinarySearch(arr, mid + 1, last, target);
	}
}

int B_BinarySearch(const int arr[], int first, int last, int target)
{
	while (first < last)
	{
		int mid = (first + last) / 2;

		if (arr[mid] == target)
			return arr[mid];
		else if (arr[mid] < target)
		{
			first = mid + 1;
		}
		else
			last = mid - 1;
	}

	//failed 
	return -1;
}

int main()
{
	int arr[10]{ 1,2,3,4,5,6,7,8,9,10 };

	//재귀함수를 이용한 이진탐색
	cout << A_BinarySearch(arr, 0, 9, 5) <<endl;
	//반복문을 이용한 이진탐색
	cout << B_BinarySearch(arr, 0, 9, 5) <<endl;

	return 0;
}