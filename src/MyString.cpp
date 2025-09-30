#include "MyString.h"
#include <iostream>
#include <cstring>


// MyString& MyString::operator-=(const char* input_str)
// {
	
// }


MyString& MyString::operator+=(const char* input_str)
{
	unsigned int result_str_size = strlen(str) + strlen(input_str) + 1;
	char* result_str = new char[result_str_size];
	for(int i = 0; i < result_str_size; ++i)
	{
		result_str[i] = str[i];
		
	}
	unsigned int str_size = strlen(str);
	for(int i = 0; i < result_str_size; ++i)
	{
		result_str[str_size + i] = input_str[i];
	}

	delete[] str;
	char* str = new char[result_str_size];
	strcpy(str, result_str);
	str[result_str_size] = '\0';
	delete[] result_str;
	return *this;
}

MyString& MyString::operator--()
{
	unsigned int result_str_size = strlen(str) - 1;
	char* result_str = new char[result_str_size];
	for(int i = 0; i < result_str_size; ++i)
	{
		result_str[i] = str[i];
	}

	delete[] str;
	char* str = new char[result_str_size];
	strcpy(str, result_str);
	str[result_str_size] = '\0';
	delete[] result_str;
	return *this;
}


MyString& MyString::operator++()
{
	char* result_str = new char[strlen(str)+1];
	strcpy(result_str, str);
	result_str[strlen(str)] = '+';

	delete[] str;
	char* str = new char[strlen(str)+1];
	strcpy(str, result_str);
	delete[] result_str;

	return *this;

}

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
	//std::cout << "Destructor\n";
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

void MyString::Print() const
{
	std::cout << str << std::endl;
}

char MyString::operator[](int index)
{
	if(index >= 0 && index < length)
	{
		return str[index];
	}
	return '0';
	//throw std::exception("Index error");
}


