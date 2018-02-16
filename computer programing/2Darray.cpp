/*
#include<iostream>
using namespace std;
class length
{
private:
	static int feet;
public:
	length()
	{
		feet = 2;
	}
	void inc()
	{
		++feet;
	}
	void show()
	{
		cout << feet << endl;
	}
};
class afterpoint:public length
{

	int inches;
public:
	afterpoint()
	{
		inches = 7;
	}
	void add(length l);
	afterpoint operator +=(int a)
	{
		afterpoint f;
		f.inches = inches += a;
		return f ;
	}
	void show()
	{
		cout << inches << endl;
		length::show();
	}
};

int main()
{
	afterpoint f;
	f.show();

}
/*
#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////////
class foo
{
private:
	static int count; //note: “declaration” only!
public:

	int getcount() //returns count
	{
		return ++count;
	}
};
--------------------------------------------------------------
int foo::count = 0; //*definition* of count
//////////////////////////////////////////////////////////////
int main()
{
	foo f1, f2, f3; //create three objects
	cout << "count is " << f1.getcount() << endl; //each object
	cout << "count is " << f2.getcount() << endl; //sees the
	cout << "count is " << f3.getcount() << endl; //same value
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
class minutes
{
	int m;
public:
	minutes()
	{
		m = 0;
	}
	void get()
	{
		cin >> m;
	}
	void show()
	{
		cout << m;
	}
};
class hours
{
	int h;
public:
	hours()
	{
		h = 0;
	}
	void operator = (minutes x)
	{
		h = x.get() / 60;
	}
};
*/