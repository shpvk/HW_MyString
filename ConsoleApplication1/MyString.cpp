#include "MyString.h"
#include <iostream>
MyString::MyString()
{
	length = 80;
	str = new char[length] {};
}

MyString::MyString(const MyString& obj)
{
	length = obj.length;
	str = new char[length + 1];
	strcpy_s(str, length + 1, obj.str);

	std::cout << "Copy constructor\n";
}

MyString::MyString(int size)
{
	length = size;
	str = new char[length];

}

MyString::MyString(const char* st)
{
	length = strlen(st);
	str = new char[length + 1];
	strcpy_s(str, length + 1, st);

}

MyString::~MyString()
{
	delete[] str;
	length = 0;
	std::cout << "Destructor\n";
}

int MyString::MyStrlen()
{
	return strlen(this->str);
}

void MyString::MyStrCat(MyString obj)
{
	strcat_s(this->str, strlen(obj.str) + strlen(this->str) + 1, obj.str);
}

void MyString::MyDelChr(char ch)
{
	char* result_str = new char[strlen(this->str) + 1];

	for (int i = 0; i < strlen(this->str); ++i)
	{
		if (this->str[i] != ch)
		{
			result_str[i] = this->str[i];
		}
		else
		{
			continue;
		}
	}
	this->str = result_str;
	delete[] result_str;
}

	int MyString::MyChr(char c)
{
	for (int i = 0; i < strlen(this->str); ++i)
	{
		if (this->str[i] == c)
		{
			return i;
		}
	}
	return -1;
}

void MyString::MyStrcpy(MyString& obj)
{
	strcpy_s(this->str, strlen(obj.str) + 1, obj.str);

}

void MyString::Print()
{
	std::cout << str << std::endl;
}
