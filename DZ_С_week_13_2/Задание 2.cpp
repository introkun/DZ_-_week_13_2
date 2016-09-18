#include <iostream>
using namespace std;

int* newArray(int size);
void initializationArray(int* arr, int size);
void outArray(int* arr, int size);
void deleteArray(int* arr);
void reversArray(int* arr, int size);

int main()
{
	int* arr = nullptr;
	int size = 9;
	arr = newArray(size);
	initializationArray(arr, size);
	outArray(arr, size);
	reversArray(arr, size);
	outArray(arr, size);
	deleteArray(arr);
	return 0;
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
void reversArray(int* arr, int size)
{
	int buff;
	for (int i = 0; i < size / 2; i++)
	{
		buff = *(arr + i);
		*(arr + i) = *(arr + ((size - 1) - i));
		*(arr + ((size - 1) - i)) = buff;
	}
}
