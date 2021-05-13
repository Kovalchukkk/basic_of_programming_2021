#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
string split(string s1, string s2);
int main()
{
	string path = "in1.txt";
	string path_2 = "in2.txt";
	string path_3 = "out.txt";
	ifstream fin;
	ifstream fin2;
	ofstream fout;
	fin.open(path);
	fin2.open(path_2);
	fout.open(path_3, ofstream::app);

	if (!fin.is_open())
	{
		cout << "An error!" << endl;
	}
	else
	{
		cout << "File is opened!" << endl;
		string str, res, str2, res2;

		while (!fin.eof())
		{
			getline(fin, str);

			res += str;
		}

		while (!fin2.eof())
		{
			getline(fin2, str2);

			res2 += str2;
		}
		cout << res << endl;
		cout << res2 << endl;
		cout << split(res, res2);
	}


	fin.close();
	fin2.close();
	fout.close();
	
	system("pause");
	return 0;

}

string split(string s1, string s2)
{
	string word, word2, res, tmp, tmp2;
	stringstream ss(s1);
	stringstream ss2(s2);


	while (ss >> word)
	{
		tmp = word;
		while (ss2 >> word2)
		{
			tmp2 = word2;

			if (tmp.find(tmp2) != string::npos)
			{
				res += " " + tmp;
			}
			tmp2 = "";
		}
		tmp = "";
	}
	return res;
}