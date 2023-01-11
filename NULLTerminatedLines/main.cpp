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
void to_lower(char str[]);
void srink(char str[]);
bool is_palindrome(char str[]);

void main()
{
	setlocale(LC_ALL, "");
	//char str[] = { 'H','e','l','l','o',0 };
	/*char str[] = "Hello";
	cout << str << endl;
	cout << sizeof(str) << endl;*/
	const int n = 256;
	//char str[n] = "Хорошо    живет     на свете      Винни    Пух";
	char str[n] = "Аргентина манит негра";
	cout << "Введитe строку: "; 
	SetConsoleCP(1251);
	//cin >> str;
	//cin.getline(str, n);
	SetConsoleCP(866);
	cout << str << endl;
	cout << "Длина строки: " << string_length(str) << endl;
	cout << "Строка в верхнем регистре: "; to_upper(str); Print(str); 
	cout << "Строка в нижнем регистре: "; to_lower(str); Print(str);
	srink(str); cout << str << endl;
	cout << "Строка " << (is_palindrome(str) ? "" : "НЕ") << " палиндром" << endl;
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
	for (int i = 0; str[i]; i++)
	{

		if (str[i] >= 'a' && str[i]<='z')str[i] -= 32;
	    if (str[i] >= 'а' && str[i] <= 'я')str[i] -= 32;
		str[i] = toupper(str[i]);
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
void to_lower(char str[])
{
	for (int i = 0; str[i]; i++) str[i] = tolower(str[i]);
}
void srink(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		while (str[i] == ' ' && str[i + 1] == ' ')
		{
			for (int j = i; str[j]; j++)
			{
				str[j] = str[j + 1];
			}
		}
	}
	cout << endl;
}
void remove_symbol(char str[], char symbol)
{
	for (int i = 0; str[i]; i++)
	{
		while (str[i] == symbol)
		{
			for (int j = i; str[j]; j++) str[j] = str[j + 1];
		}
	}
}
bool is_palindrome(char str[])
{
	to_lower(str);
	remove_symbol(str,' ');
	int n = strlen(str);
	for (int i = 0; i < n / 2; i++)
	{
		if (str[i] != str[n - 1 - i]) return false;
	}
	return true;
}