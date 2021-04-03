#include <iostream>
using namespace std;

void read_arr(int*& arr, int& n);
void print_arr(int* arr, int n);
void bubble_sort(int* arr, int n);
int main()
{
	int n, m;
	bool isSemetric = true;
	cin >> n >> m;
	int** matrix = new int* [n];

	//Read matrix
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}

	//Check Symetry
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] != matrix[i][j])
			{
				isSemetric = false;
				break;
			}
		}
	}
	if (isSemetric)
		cout << "Symetric" << endl;
	else
	{
		cout << "Not Symetric" << endl;
	}

	/*
	//Sum of elements under main diagonal
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (j > i)
			{
				sum += matrix[i][j];
			}
		}
	}*/


	//Print matrix
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << '\t';
		}
		cout << endl;
	}
	cout << endl;

	//Delete matrix
	for (int i = 0; i < n; i++)
	{
		delete[]matrix[i];
	}
	delete[]matrix;
	
	/*
	int* arr;
	int size;
	read_arr(arr, size);
	print_arr(arr, size);
	bubble_sort(arr, size);
	print_arr(arr, size);
	delete[] arr; */

	system("pause");

	return 0;

}

void read_arr(int*& arr, int& n)
{
	cout << "Enter a size of array: ";
	cin >> n;
	arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Array[" << i << "]: ";
		cin >> arr[i];
	}

}

void print_arr(int* arr, int n)
{
	cout << "Array: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void bubble_sort(int* arr, int n)
{
	int temp;
	for (int j = 1; j < n; j++)
		for (int i = 0; i < n - j; i++)
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i]; arr[i] = arr[i + 1]; arr[i + 1] = temp;	
			}	
}

