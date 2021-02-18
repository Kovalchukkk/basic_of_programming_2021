#include <iostream>
using namespace std;

int main()
{
	int n, i;
	bool Prime = true;
	cout << "Enter a number: ";
	cin >> n;
	for (i = 2; i <= (sqrt(abs(n))); i++)
	{
		if (n % i == 0)
		{
			Prime = false;
			break;
		}
	
	}

	if(Prime)
	{
		cout << "This is a prime number" << endl;
	}
	else
	{
		cout << "This is not a prime number" << endl;
	}

	
	system("pause");
	return 0;

}