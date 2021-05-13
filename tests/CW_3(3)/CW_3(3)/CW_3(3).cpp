#include <iostream>
using namespace std;

struct Triangle
{
	double a;
	double b;
	double c;

	Triangle() : Triangle(0, 0, 0) {}

	Triangle(double a, double b, double c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}

	void print()
	{
		cout << "(" << a << ", " << b << ", " << c << ")" << endl;
	}

	double perymetr()
	{
		double per = a + b + c;
		return per;
	}

};

int main()
{
	Triangle p1(3, 4, 5);
	cout << p1.perymetr() << endl;

	system("pause");
	return 0;

}

/*Result*/
// 12