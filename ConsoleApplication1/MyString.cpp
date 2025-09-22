#include "MyString.h"
#include <iostream>
#include <cstring>


int MyString::objects_counter = 0;

MyString::MyString()
{
	objects_counter++;
	length = 80;
	str = new char[length] {};
}


MyString::MyString(const MyString& obj)
{
	objects_counter++;
	length = obj.length;
	str = new char[length + 1];
	strcpy(str, obj.str);

	std::cout << "Copy constructor\n";
}

MyString::MyString(int size)
{
	objects_counter++;
	length = size;
	str = new char[length];

}

MyString::MyString(const char* st)
{
	objects_counter++;
	length = strlen(st);
	str = new char[length + 1];
	strcpy(str, st);

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
	strcat(this->str, obj.str);
}

void MyString::MyDelChr(char ch)
{
	int len = strlen(this->str);
	char* result_str = new char[len + 1];


	int j = 0;
	for (int i = 0; i < len; ++i)
	{
		if (this->str[i] != ch)
		{
			result_str[j++] = this->str[i];
		}
	}
	result_str[j] = '\0';

	delete[] this->str;
	this->str = result_str;
}

int MyString::MyStrCmp(const MyString& obj)
{
	return strcmp(this->str, obj.str);
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
	strcpy(this->str, obj.str);

}

void MyString::Print()
{
	std::cout << str << std::endl;
}
