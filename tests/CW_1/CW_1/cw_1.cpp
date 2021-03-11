#include <iostream>
using namespace std;

//Variant 3

//1.

/*int n;
double a;
double sum = 0;

int main_()
{
	cout << "Enter number of elements: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter a number: ";
		cin >> a;
		sum += a;

	}
	cout << "Sum: " << sum << endl;

	system("pause");
	return 0;

}*/

/*Examples
Enter number of elements: 5
Enter a number: 1.22
Enter a number: 5.44
Enter a number: 7.55
Enter a number: 7.455
Enter a number: 6.77
Sum : 28.435*/

/*
int suma__(int num, int a)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Enter a number: ";
		cin >> a;
		sum += a;

	}
	return sum;
}*/


//2.

/*
int prod(int m);
int main__()
{	
	int n;
	int k;
	cout << "Enter a number: ";
	cin >> n;
	//int pr = prod(14);
	//cout << pr << endl;
	for (k = 10; k <= 1000; k++)
	{
		if (prod(k) == n)
		{
			cout << "Result: " << k << endl;
			break;
		}
	}

	system("pause");
	return 0;

}

int prod(int m)
{
	int p = 1, temp;
	while (m > 0)
	{
		temp = m % 10;
		if (temp)
		{
			p *= temp;
			m /= 10;
		}
		else 
		{
			p = 0;
			break;
		}
	}
	return p;
}*/

/*
Examples:
Enter a number: 6
Result: 16
Enter a number: 45
Result: 59
Enter a number: 240
Result: 568
*/


//3.

//int Recursion(int number);
int main()
{
	//int n;
	//cout << "Enter a number: ";
	//cin >> n;
	//int a = Recursion(1);
	//cout << a << endl;
	system("pause");
	return 0;

}
/*
int Recursion(int number)
{
	if (number == 0)
		return 1;
	if (number == 1)
		return -1;
	return	Recursion(4 * number * number - 1) + 1 - Recursion(number - 2);
}*/


