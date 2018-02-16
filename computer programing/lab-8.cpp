/*
#include<iostream>
using namespace std;
class temp
{
	int number;
public:
	temp()
	{
		number = 0;
	}
	temp(int a)
	{
		number = a;
	}
	void get()
	{
		cin >> number;
	}
	void operator !()
	{
		if (number % 2 == 0)
		{
			cout << "even" << endl;
		}
		else
			cout << "odd" << endl;
	}

};
int main()
{
	temp a;
	a.get();
	!a;

}



/*
#include <iostream>
using namespace std;
class A
{
private:int a, b;
public:
	void get()
	{
		cin >> a >> b;
	}
	void show()
	{
		cout << a << b;
	}
};
class C
{
public:
	void show()
	{
		cout << "alpha" << endl;
	}
};
class B :public A,public C
{
public:
	void add()
	{
		cout << a + b << endl;
	}
};
int main()
{ //array
	B a;
	a.A::show()





	int *ptr;
	int intarray[5] = { 31, 54, 77, 52, 93 };
	ptr = intarray;
	for (int j = 0; j<5; j++) //for each element,
		cout << *(ptr++) << endl; //print value
	return 0;
}
*/