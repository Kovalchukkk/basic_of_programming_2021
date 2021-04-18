#include <iostream>
using namespace std;

char* replace(char* string, char in, char out);
char change(char s);
int main()
{
	/*
	char s[100] = "this is an apple";
	
	cout << strlen(s) << endl;

	for (int i = 0; i < strlen(s); i++)
	{
		cout << s[i] << endl;
	}

	if (strchr(s, 'x'))
	{
		cout << "x is in string" << endl;
	}
	else
	{
		cout << "x is not in string" << endl;
	}

	if (strstr(s, "apple"))
	{
		cout << "apple is in string" << endl;
	}
	else
	{
		cout << "apple is not in string" << endl;
	}

	char others[100] = "this is an orange";
	if (strcmp(s, others) > 0)
	{
		cout << "apple is greater than orange" << endl;
	}
	else
	{
		cout << "orange is greater than apple" << endl;
	}

	if (strncmp(s, others, 11) == 0)
	{
		cout << "strings are kind of equal" << endl;
	}
	else
	{
		cout << "strings are different" << endl;
	}

	char input[10];

	cin.getline(input, 10);
	cout << strlen(input) << " " << input << endl;

	cin.get(input, 10, '.');
	cout << strlen(input) << " " << input << endl;*/

	//char input[10];
	//char dest[10];
	//cin.get(input, 10, '.');
	//!strcpy(dest, input);
	//strcpy_s(dest, 10, input);
	//cout << "Dest " << dest << endl;

	//strncpy_s(dest, 10, input, 5);
	//cout << "Dest " << dest << endl;

	//char text[200] = "";

	//strcat_s(text, 200, s);
	//cout << "text: " << text << endl;

	/*char buff[10];
	_itoa_s(42, buff, 10);

	cout << buff << endl;

	cout << atoi(buff) + 13 << endl;

	cout << isalpha('4') << isdigit('4') << endl;*/

	/*char input[10];
	cin.getline(input, 10);

	for (int i = 0; i < strlen(input); i++)
	{
		input[i] = change(input[i]);
	}
	cout << input << endl;*/

char* input = new char[100];
cin.getline(input, 100);

char a = '+';
char b = '-';

input = replace(input, a, b);
cout << input << endl;

system("pause");
return 0;

}


char* replace(char* string, char in, char out)
{
	for (int i = 0; i < strlen(string); i++)
	{
		if (string[i] == in)
		{
			string[i] = out;
		}
	}
	return string;
}


char change(char s)
{
	if (islower(s))
	{
		char res = s - 'a' + 'A';
		return res;
	}
	return s;

}

