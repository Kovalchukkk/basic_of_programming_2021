#include <iostream>
using namespace std;

//Variant - 8

//1.

/*
void read_arr(int*& arr, int& n);
void print_arr(int* arr, int n);
void print_arr_odd(int* arr, int n);
void print_arr_res(int* arr, int n);
int main_1()
{
	int* arr;
	int n;
	read_arr(arr, n);
	cout << "Initial array: ";
	print_arr(arr, n);
	cout << "Result array: ";
	print_arr_res(arr, n);
	delete[] arr;

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
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void print_arr_odd(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 != 0)
			cout << arr[i] << "  ";
	}
}

void print_arr_res(int* arr, int n)
{
	print_arr_odd(arr, n);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
			cout << arr[i] << "  ";
	}
	cout << endl;
}*/

/*Examples*/
/*
Enter a size of array: 6
Array[0]: 1
Array[1]: 4
Array[2]: 6
Array[3]: 8
Array[4]: 7
Array[5]: 9
Initial array: 1  4  6  8  7  9
Result array: 1  7  9  4  6  8

Enter a size of array: 10
Array[0]: 1
Array[1]: 5
Array[2]: 7
Array[3]: 6
Array[4]: 4
Array[5]: 2
Array[6]: 3
Array[7]: 8
Array[8]: 6
Array[9]: 5
Initial array: 1  5  7  6  4  2  3  8  6  5
Result array: 1  5  7  3  5  6  4  2  8  6
*/

//2.
/*
int main_2()
{
	//Check size of matrix
	int row, col;
	do {
		cout << "Enter a row and col: ";
		cin >> row >> col;
	} while (row != col);

	int** matrix = new int* [row];

	//Read matrix
	for (int i = 0; i < row; i++)
	{
		matrix[i] = new int[col];
		for (int j = 0; j < col; j++)
		{
			cin >> matrix[i][j];
		}
	}
	system("pause");
	return 0;

	//Main program
	double maxsum = 0;

	for (int i = 0; i < row; i++)
	{
		int r = 0, c = i;

		//Sum
		double sum_1 = 0, sum_2 = 0;
		while (c < row && r < row)
		{
			sum_1 += matrix[r][c];
			sum_2 += matrix[c][r];
			r++;
			c++;
		}
		maxsum = max(sum_1, maxsum, sum_2);
	}

	cout << "Result: " << maxsum << endl;

	//Print matrix
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix[i][j] << '\t';
		}
		cout << endl;
	}
	cout << endl;

	//Delete matrix
	for (int i = 0; i < row; i++)
	{
		delete[]matrix[i];
	}
	delete[]matrix;
}*/

//3.


void read_arr(int*& arr, int& n);
void print_arr(int* arr, int n);
bool check_anagram(int* arr1, int* arr2);
int main()
{
	int* arr1;
	int* arr2;
	int n1;
	int n2;
	read_arr(arr1, n1);
	print_arr(arr1, n1);
	read_arr(arr2, n2);
	print_arr(arr2, n2);
	bool check_anagram(arr1, arr2);

	delete[] arr1;
	delete[] arr2;
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
int n1, n2;
bool check_anagram(int* arr1, int* arr2)
{
	if (n1 != n2)
	{
		return false;
	}

	for (int i = 0; i < n1; i++)
	{
		if (arr1[i] != arr2[i])
			return false;
		return true;
	}
}

