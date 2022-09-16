#pragma once
class MyString {
private:
	char* str;
	int lenght;

public:
	MyString();
	MyString(int answer);
	MyString(const char* ch);
	~MyString();

	MyString& operator=(const MyString& obj2); 
	//void operator()();
	char operator[](int index);
	operator int() const; 

	void MyStrcpy(MyString& obj);
	bool MyStrStr(char* str);
	int  MyChr(char c);
	int MyStrLen(const char* str);
	void MyStrCat(MyString& b);
	void MyDelChr(char c);
	int MyStrCmp(MyString& b);
	int GetString() const;
	char* GetrString() const;

	void Input();
	void Print() const;
};

