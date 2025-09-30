#pragma once
#include <iostream>
class MyString
{
	char* str;
	int length;
public:


	MyString(MyString&& obj)
	{
		str = obj.str;
		obj.str = nullptr;
		length = obj.length;
		obj.length = 0;
	}
	MyString();
	MyString(const MyString& obj);
	MyString(int size);
	MyString(const char* st);
	~MyString();

	char operator[](int index);

	int MyStrlen();
	void MyStrCat(MyString obj);
	void MyDelChr(char ch);
	int MyStrCmp(const MyString& obj);

	int MyChr(char c);

	void MyStrcpy(MyString& obj);
	void Print() const;
	
	MyString& operator++ ();
	MyString& operator-- ();
	MyString& operator+= (const char* input_str);
	//MyString& operator-= (const char* input_str);

	static int objects_counter;

	friend std::ostream& operator<<(std::ostream& os, MyString& obj);
	friend std::istream& operator>>(std::istream& is, MyString&obj);

};

