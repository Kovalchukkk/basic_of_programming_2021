//#include <iostream>
//#include <string>
//using namespace std;

//Var-2

//1.
//int main_1()
//{
//	string s, res;
//	getline(cin, s);
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] >= '0' && s[i] <= '9') // check if elem of string is a number
//		{
//			if (s[i] == s[i + 1])
//			{
//				s.erase(i, 1);
//			}
//		}
//	}
//
//	cout << s << endl;
//
//
//	system("pause");
//	return 0;
//
//}

/* Examples */
/*
effne fe __ 11 ecme 211
effne fe __ 1 ecme 21
*/

//2. 

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
int Check(string a);
string split(string s);
int main()
{
	string path = "in.txt";
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
			getline(fin, str);
			
			res += str;

		}
		//cout << res << endl;
		//cout << split(res);
		
		fout << split(res) << endl; //Print result string to out.txt

	}

	fin.close();
	fout.close();

	system("pause");
	return 0;

}

int Check(string a)
{
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == ',' || a[i] == '!' || a[i] == '.')
		{
			return true;
		}
	}
}

string split(string s)
{
	string reversed_word, res;
	stringstream ss(s);
	string word;
	while (ss >> word)
	{
		if (Check(word) != 1)
		{
			for (int i = word.size() - 1; i >= 0; i--)
			{
				reversed_word += word[i];
			}
			res = res + " " + reversed_word;
			reversed_word = "";
		}
	}
	return res;
}