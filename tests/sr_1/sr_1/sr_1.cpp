
//Variant - 2
#include <iostream>
using namespace std;

//1.

int main()
{
	int num;
	cout << "n= ";
	cin >> num;
	for (int i = 1; i <= num; num--)
	{
		for (int j = 1; j <= num; j++)
		{
			cout << j << " ";
		}
		cout << endl;

	}
	system("pause");
	return 0;

}
/*n= 4
1 2 3 4
1 2 3
1 2
1*/

/*n = 10
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1*/


//2.
/*
int main()
{
	int count_num;
	int current = 0;

	cout << "Enter number of elements: ";
	cin >> count_num;
	cout << "Enter an integer: ";
	cin >> current;

	int max = current;
	int min = current;

	for (int i = 0; i < count_num; ++i)
	{
		cout << "Enter an integer: ";
		cin >> current;
		if (current > max)
		{
			max = current;
		}
		else if (current < min)
		{
			min = current;
		}
	}
	cout << "Max= " << max << endl;
	cout << "Min= " << min << endl;
	cout << "Sum of max and min= " << max + min << endl;*/

	/*Enter number of elements : 3
		Enter an integer : 1
		Enter an integer : 2
		Enter an integer : 3
		Enter an integer : 4
		Max = 4
		Min = 1
		Sum of max and min = 5*/

	/*Enter number of elements : 4
		Enter an integer : 4
		Enter an integer : 3
		Enter an integer : 6
		Enter an integer : 2
		Enter an integer : 1
		Max = 6
		Min = 1
		Sum of max and min = 7*/


