/*
#include<iostream>
using namespace std;
class a
{

public:
	a()
	{}
	void add(int a1, int b1)
	{
		b = a1 + b1;
	}
protected:
	int b;
};
class sec :public a
{
public:
	sec()
	{}
	void sub(int a1,int b1)
	{
		b = a1 - b1;
	}
};
class thir :public sec
{
public:
	thir()
	{}
	void mul(int a1,int b1)
	{
		b = a1*b1;
	}
};
class last :public thir
{
public:
	last()
	{

	}
	void show()
	{
		cout << b << endl;
	}
};
int main()
{
	last t;
	t.sub(2, 4);
	t.show();
}

*/