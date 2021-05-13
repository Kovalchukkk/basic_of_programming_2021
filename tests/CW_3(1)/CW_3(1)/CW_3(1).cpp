#include <iostream>
#include <string>
#include <fstream>
using namespace std;


struct Worker
{
	string last_name;
	double salary;
	string department;
	double experience;

	Worker() : Worker(0, 0, 0, 0) {}

	Worker(string department, string last_name, double experience, double salary)
	{
		this->department = department;
		this->last_name = last_name;
		this->experience = experience;
		this->salary = salary;
	}

};

int main()
{

	string path = "myFile.txt";
	string path_2 = "out.txt";
	ifstream fin;
	ofstream fout;
	fin.open(path);
	fout.open(path_2, ofstream::app);

	if (!fin.is_open())
	{
		cout << "An error!" << endl;
	}
	
	else
	{
		cout << "File is opened!" << endl;
		string str, res;

		while (!fin.eof())
		{
			while (!fin.eof())
			{
				str = "";
				getline(fin, str);
				cout << str << endl;
			}

		}
	}

	fout.close();

	system("pause");
	return 0;

}