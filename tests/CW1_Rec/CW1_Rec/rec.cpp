#include <iostream>
using namespace std;

//Variant 3

//3.

int Rec(int number);
int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	int a = Rec(n);
	cout << a << endl;
	system("pause");
	return 0;

}

int Rec(int number)
{
	if (number == 0)
		return 1;
	if (number == 1)
		return -1;
	else
		return	abs(4 * pow(Rec(number - 2), 2)) + 1 - Rec(number - 1);
}

//Examples
/*
Enter a number: 3
-1
Enter a number: 4
146
Enter a number: 5
-141
Enter a number: 6
85406
*/

