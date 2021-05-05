#include <iostream>
using namespace std;

struct Point
{
	double x;
	double y;

	Point() : Point(0, 0) {}

	Point(double x, double y)
	{
		this->x = x;
		this->y = y;
	}

	void print() const
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

void printPoint(const Point& p)
{
	p.print();
}


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
		double per = (a + b + c) / 2;
		return per;
	}

	double area()
	{
		double p = perymetr();
		double s = sqrt(p * (p - a) * (p - b) * (p - c));
		return s;
	}
};

void print_arr(double* arr, int n);
void bubble_sort(double* arr, int n);
int main()
{
	/*
	Point p1{ 3.14, 12 };
	cout << p1.x << "\t" << p1.y << endl;
	p1.print();
	

	Point p2 = p1;
	p2.x = 10;

	Point* pp = &p1;
	cout << pp->x << "\t" << pp->y << endl;
	(*pp).print();
	pp->x = 10;
	cout << p1.x << endl;


	int n = 5;
	Point* pa = new Point[n];
	for (int i = 0; i < n; i++)
	{
		pa[i].x = (double)i + 1;
		pa[i].y = (double)i * 2;

	}

	for (int i = 0; i < n; i++)
	{
		cout << pa[i].x << "\t" << pa[i].y << endl;
		pa[i].print();
	}

	printPoint(p1);
	*/

	/*
	Point p3;
	Point p4(10, 20);
	printPoint(p3); // res: (0, 0)
	printPoint(p4); // res: (10, 20)
 	*/


	/* Homework */

	double f, s, t;

	Triangle space_1(3, 4, 5);
	Triangle space_2(10, 18, 9);
	Triangle space_3(12, 8, 5);

	f = space_1.area();
	s = space_2.area();
	t = space_3.area();
	
	const int n = 3;
	double arr[n] = { f, s, t };
	cout << "Array before sort: ";
	print_arr(arr, n);
	cout << "Array after sort: ";
	bubble_sort(arr, n);
	print_arr(arr, n);

	
	system("pause");
	return 0;
	 
}


void print_arr(double* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void bubble_sort(double* arr, int n)
{
	double temp;
	for (int j = 1; j < n; j++)
		for (int i = 0; i < n - j; i++)
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i]; arr[i] = arr[i + 1]; arr[i + 1] = temp;
			}
}