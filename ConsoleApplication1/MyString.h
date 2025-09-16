#pragma once
class MyString
{
	char* str;
	int length;
public:
	MyString();
	MyString(const MyString& obj);
	MyString(int size);
	MyString(const char* st);
	~MyString();

	int MyStrlen();
	void MyStrCat(MyString obj);
	void MyDelChr(char ch);
	int MyStrCmp(const MyString& obj);

	int MyChr(char c);

	void MyStrcpy(MyString& obj);
	void Print();

};

