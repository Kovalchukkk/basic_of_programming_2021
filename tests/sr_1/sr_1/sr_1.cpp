
//Варіант 2
#include <iostream>
using namespace std;
//2.
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
	cout << "Sum of max and min= " << max + min << endl;

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

//1.
/*int main_()
{
	int n;
	cout << "n= ";
	cin >> n;
	if (n < 1)
	{
		return false;
	}
	for (int i = 1; i <= n; ++i)
	{
		for (int j = n; j >= i; --j)
		{
			cout << j << " ";
		}
		cout << endl;
	}*/
	system("pause");
	return 0;

}
//n= 4
//4 3 2 1
//4 3 2
//4 3
//4
/*n = 5
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5*/