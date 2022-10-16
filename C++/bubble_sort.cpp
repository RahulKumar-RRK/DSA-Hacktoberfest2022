// C++ program for implementation
// of Bubble sort
#include <bits/stdc++.h>
using namespace std;

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		// Last i elements are already
		// in place
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver code
int main()
{
	//int arr[] = { 5, 1, 4, 2, 8};
	int arr[50],n,i;
	cout << "Enter the size of the list:";
    cin >> n;
	cout << "Enter the list:";
	for (i=0;i<n;i++)
	{
	cin >> arr[i];
	}
	//int N = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	cout << "Sorted list is: \n";
	printArray(arr, n);
	return 0;
}
// This code is contributed by rathbhupendra

