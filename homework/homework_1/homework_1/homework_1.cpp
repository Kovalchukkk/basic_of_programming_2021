#include <iostream>
using namespace std;

int Check(int a);
int main() 
{
  double a, b;
  int i;
  cin >> a >> b;
  
  for (i = a; i <= b; i++)
  {
	  if (Check(i) == i)
	  {
		  cout << i << " " << "Prime" << endl;
	  }
	
  }

	return 0;
}

int Check(int a)
{
	int j;
	bool Prime = true;

	for (j = 2; j <= (sqrt(abs(a))); j++)
	{
		if (a % j == 0)
		{
			Prime = false;
			break;
		}

	}

	if (Prime)
	{
		return a;
	}
	else
	{
		return 0;
	}

}

	
