#include <iostream>
using namespace std;

struct MyException : exception
{
	const char* what() const
	{
		return "Zero division exception";
	}
};

struct Fraction
{
	int num;
	int den;

	Fraction() : Fraction(0, 0) {}

	Fraction(int num, int den)
	{
		this->num = num;
		this->den = den;
	}

	void print()
	{
		cout << num << "/" << den << endl;
	}

	double ToDecimal()
	{
		if (num == den)
			throw 1;
		if (den == 0)
			throw "zero denominator";
		return (double)num / den;
	}
};

int main()
{
	Fraction frac(1, 0);

	frac.print();
	try 
	{
		cout << frac.ToDecimal() << endl;
	}

	catch (const MyException& ex) 
	{
		cerr << ex.what() << endl;
		throw "something weird happened!";
	}
	catch (const exception& ex)
	{
		cerr << ex.what() << endl;
	}
	catch (int ex)
	{
		cerr << "num = den: " << ex << endl;
	}
	catch (const char* ex)
	{
		cerr << ex << endl;
	}

	system("pause");
	return 0;

}