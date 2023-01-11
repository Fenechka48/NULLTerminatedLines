//NULLTerminatedLines
#include <iostream>
#include <windows.h>
#include <conio.h> 
#include <string>
using namespace std;
using std::cout;
using std::endl;
using std::cin;

int  string_length(char str[]);
void to_upper(char str[]);
void Print(char str[]);


void main()
{
	setlocale(LC_ALL, "");
	//char str[] = { 'H','e','l','l','o',0 };
	/*char str[] = "Hello";
	cout << str << endl;
	cout << sizeof(str) << endl;*/
	const int n = 256;
	char str[n] = {};
	cout << "Введитe строку: "; 
	SetConsoleCP(1251);
	//cin >> str;
	cin.getline(str, n);
	SetConsoleCP(866);
	cout << str << endl;
	cout << "Длина строки: " << string_length(str) << endl;
	cout << "Строка в верхнем регистре: "; to_upper(str); 
	Print(str);

}
int  string_length(char str[])
{
	int len=0;
	for (int i = 0; str[i]!='\0'; i++)
	{
		len ++;
	}
	return len;
}
void to_upper(char str[])
{
	for (int i = 0; str[i] < string_length(str); i++)
	{
		char a=97;
		char z=122;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			
		}
		cout << str[i] << endl;
	}
	cout <<endl ;
}
void Print(char str[]) 
{
	int n;
	n = string_length(str);
	for (int i = 0; i < n; i++)
	{
		cout << str[i];
	}
	cout << endl;
}