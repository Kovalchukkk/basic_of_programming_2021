#include <iostream>
using namespace std;

//int add(int a, int b = 2); //Оголошення дефолтних аргументів
void print(const int& a);
void dublicate(int& a);
int main()
{
	int x = 5;
	print(x);
	dublicate(x);
	print(x);
	//int res = add(5);
	//cout << res;
	return 0;
}

/*int add(int a, int b) 
{
	int r = a + b;

	return r;
}*/

void print(const int& a) //Передача аргументу по посиланню
{
	cout << a << endl;
}

void dublicate(int& a)
{
	a *= 2;
}


