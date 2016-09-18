#include <iostream>
using namespace std;

int* newArray(int size);
void initializationArray(int* arr, int size);
void outArray(int* arr, int size);
void deleteArray(int* arr);
void copyAndReversArray(int* arr1, int* arr2, int size);

int main()
{
	int* arr1 = nullptr;
	int* arr2 = nullptr;
	int size = 10;
	arr1 = newArray(size);
	arr2 = newArray(size);
	initializationArray(arr1, size);
	outArray(arr1, size);
	copyAndReversArray(arr1, arr2, size);
	outArray(arr2, size);
	deleteArray(arr1);
	deleteArray(arr2);
}

int* newArray(int size)
{
	return new int[size];
}
void initializationArray(int* arr, int size)
{
	srand(25);
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void outArray(int* arr, int size)
{
	cout << "arr[" << size << "] = { ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << "};" << endl;
}
void deleteArray(int* arr)
{
	delete arr;
}
void copyAndReversArray(int* arr1, int* arr2, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr2 + ((size - 1) - i)) = *(arr1 + i);
	}
}
