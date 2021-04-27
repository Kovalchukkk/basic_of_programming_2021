#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string floating_part(string a);
string enter(string a);
int main()
{
	/*ofstream fout;
	fout.open("test.txt");
	fout << "hello world" << endl;
	fout.close();*/

	/*char* text = new char(100);

	ifstream fin("test.txt");
	fin >> text;
	fin.getline(text, 100);
	fin.close();

	cout << text << endl;*/

	//string str1("some string");
	//string str2(str1);
	//string str3(5, '$');

	//string str4(str1.begin(), str1.begin() + 3);

	//string str6 = str4;
	//str4.clear();

	//int len = str6.length();

	//cout << str1[2] << ' ' << str1.at(2) << endl;

	//const char* chr = str1.c_str();

	//str4.append("test");

	//str4.append(str3, 0, 3);


	//cout << str4.substr(4, 3) << endl;

	//cout << str4.find("$") << endl;
	//cout << str4.find("#") << endl;//string::npose

	//cout << enter("a b c") << endl;

	system("pause");
	return 0;

}

string floating_part(string a)
{
	int index = a.find(" . ");
	if (index == string::npos)
	{
		return a;
	}
	else
	{
		//int len = (a.length() - index - 1);
		return a.substr(index + 1);
	}
}

string enter(string a)
{
	int enter_index = 0;
	string replace = "%20";
	enter_index = a.find(" ");
	while (enter_index != string::npos)
	{
		a.replace(enter_index, 1, replace);
		enter_index += replace.length();
		enter_index = a.find(" ", enter_index);
	}

	return a;

}