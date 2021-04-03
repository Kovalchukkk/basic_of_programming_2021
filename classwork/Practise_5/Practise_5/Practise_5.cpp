#include <iostream>
using namespace std;

void printarr(const int* start, const int* end);
int main()
{   
    int var = 10;
    int* pointer = &var;


    cout << "var = " << var << " pointer = " << pointer << endl;
    cout << "var = " << var << " var by pointer = " << *pointer << endl;
    cout << "address of var = " << &var << " pointer = " << pointer << endl;

    int var2 = 6;
    pointer = &var2;
    cout << "var = " << var << " var2 = " << var2 << " var by pointer = " << *pointer << endl;
    *pointer = 3;
    cout << "var = " << var << " var2 = " << var2 << " var by pointer = " << *pointer << endl;

    float* pointer2 = new float(3.14);
    cout << "var = " << *pointer2 << " pointer2 = " << pointer2 << endl;
    delete pointer2;
    
    /*
    int var = 25;
    int* pointer = &var;

    int b = var;

    b *= 2;

    cout << var << '\t' << b << endl;*/

    //b = *pointer;

    /*
    int x;
    int y = 10;
    const int* p = &y;
    x = *p;

    cout << x << '\t' << y << endl;*/

    /*
    int a, b;
    int* p1, *p2;

    p1 = &a;
    p2 = &b;

    *p1 = 10;
    *p2 = *p1;
    
    p1 = p2;
    *p1 = 20;*/

    //p = &b;
    //*p = 20;

    //cout << a << '\t' << b << endl;

	system("pause");
	return 0;

}



void printarr(const int* start, const int* end)
{
    const int* current = start;
    while (current != end)
    {
        cout << *current << '\t';
        ++current;
    }
    cout << endl;
}