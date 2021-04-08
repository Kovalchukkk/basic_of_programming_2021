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

int main()
{
	cout << "Enter row and col: ";

	int n, m;
	cin >> n >> m;

	int** matrix = new int* [n];


	//Read matrix
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
		for (int j = 0; j < m; j++)
		{
			cout << "Enter matrix[" << i << "]" << "[" << j << "]" << "=" << "\t";
			cin >> matrix[i][j];
		}
	}

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

	
	//Sum of principal diagonal
	double principalsum = 0;
	for (int i = 0; i < n; i++)
	{
		principalsum += matrix[i][i];
	}

	//Sum of elem above and below main diagonal
	double abovesum = 0, belowsum = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (j > i)
			{
				abovesum += matrix[i][j];
			}
			else
			{
				if (i > j)
				{
					belowsum += matrix[i][j];
				}
					
			}
				
		}
	}

	//Main program
	
	if (principalsum > abovesum && principalsum > belowsum)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "Max diagonal: " << matrix[i][i] << ", ";
		}
		cout << endl;
	}
	else if (abovesum > principalsum && abovesum > belowsum)
		cout << "Max sum diagonal: " << abovesum << endl;
	else if (belowsum > principalsum && belowsum > abovesum)
		cout << "Max sum diagonal: " << belowsum << endl;
 
	//Delete matrix
	for (int i = 0; i < n; i++)
	{
		delete[]matrix[i];
	}
	delete[]matrix;
}

//3.
/*
void read_arr(int*& arr, int& n);
void print_arr(int* arr, int n);
int check_anagram(int* arr1, int n1, int* arr2, int n2);
void bubble_sort(int* arr, int n);
int main_3()
{
	int* arr1;
	int* arr2;
	int n1;
	int n2;
	read_arr(arr1, n1);
	read_arr(arr2, n2);
	print_arr(arr1, n1);
	print_arr(arr2, n2);
	bubble_sort(arr1, n1);
	bubble_sort(arr2, n2);

	cout << "Res: " << check_anagram(arr1, n1, arr2, n2) << endl;
	delete[] arr1;
	delete[] arr2;
	system("pause");
	return 0;

}*/

//Main function
/*
int check_anagram(int* arr1, int n1, int* arr2, int n2)
{
	if (n1 != n2)
		return false;

	else if (n1 == n2)
	{
		for (int i = 0; i < n1; i++)
		{
			if (arr1[i] != arr2[i])
				return false;
		}
		return true;
	}
}*/

/*Examples*/

/* Enter a size of array: 5
Array[0]: 1
Array[1]: 2
Array[2]: 3
Array[3]: 5
Array[4]: 4
Enter a size of array: 5
Array[0]: 2
Array[1]: 4
Array[2]: 1
Array[3]: 5
Array[4]: 3
Array:
1  2  3  5  4
Array:
2  4  1  5  3
Res: 1 

Enter a size of array: 3
Array[0]: 3
Array[1]: 2
Array[2]: 1
Enter a size of array: 3
Array[0]: 1
Array[1]: 5
Array[2]: 3
Array:
3  2  1
Array:
1  5  3
Res: 0

Enter a size of array: 3
Array[0]: 1
Array[1]: 2
Array[2]: 3
Enter a size of array: 4
Array[0]: 1
Array[1]: 2
Array[2]: 3
Array[3]: 4
Array:
1  2  3
Array:
1  2  3  4
Res: 0
*/

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





