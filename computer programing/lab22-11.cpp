/*
//muhammad talha
//p15-6087
//Q#1
#include<iostream>
using namespace std;
class abcd
{
	int alpha, beta, gema;
public:
	abcd()
	{
		alpha = beta = gema = 0;
	}
	void least(int alpha, int beta, int gema)
	{
		this->alpha = alpha;
		this->beta = beta;
		this->gema = gema;
	}
	void find_least()
	{
		(alpha < beta&&alpha < gema) ? cout << "smallest is a" << alpha : cout << "";
		(beta < alpha&&beta < gema) ? cout << "smallest is b"<<beta : cout << "smallest is c"<<gema;
	}
};
int main()
{
	abcd obj;
	obj.least(5, 8, 3);
	obj.find_least();
}

/*

//muhammad talha
//p15-6087
//Q#4
#include<iostream>
#include<string>
using namespace std;
class student
{
protected:
	string name;
public:
	student()
	{
		name = "";
	}
	virtual void show() = 0;
};
class engineering:public student
{
public:
	void show()
	{
		cout << "this is engineering student:" << name;
	}
};
class medicine :public student
{
public:
	void show()
	{
		cout << "this is medicine student:" << name;
	}
};
class science :public student
{
public:
	void show()
	{
		cout << "this is science student:" << name;
	}
};
int main()
{
	student *ptr[3];
	ptr[0] = new engineering;
	ptr[1] = new medicine;
	ptr[2] = new science;
	for (int i = 0; i < 3; i++)
	{
		ptr[i]->show();
		cout << endl;
	}

}
*/
/*
#include<iostream>
using namespace std;
struct name
{
	int a;
	int b;
	int c;
	name()
	{
		a = 9;
		b = 7;
		c = 8;
	}
	void get()
	{
		cin >> a >> b >> c;
	}
	void show()
	{
		cout << a << b << c;
	}
};
int main()
{
	name a, b;
	a.get();
	b= a;
	b.show();
}
*/

/*
//nested structure
#include<iostream>
using namespace std;
struct point
{
	double x, y;
	point()
	{
		x = y = 0;
	}
};
point p;
struct line
{
	point l1, l2;
	line()
	{
		l1.x = 0;
		l2.y = 0;
	}
};
line l;
struct triangle
{
	point p1, p2, p3;
};
triangle T;
int main()
{
	p.x = 4;
	p.y = 11;
	l.l1.x = 2;
	l.l1.y = 7;
	l.l2.x = 10;
	l.l2.y = 9;

}
*/

/*
#include<iostream>
using namespace std;
void swap(int *ptr, int *ptr2)
{
	int temp;
	temp = *ptr;
	*ptr = *ptr2;
	*ptr2 = temp;
}
int main()
{
	int x = 8, y = 9;
	swap(&x, &y);
	cout << x << " " << y << endl;

}
*/
/*
#include<iostream>
using namespace std;
class a
{
	int temp;
public:
	void swap(int *ptr, int*ptr1)
	{
		temp = *ptr;
		*ptr = *ptr1;
		*ptr1 = temp;
		cout << *ptr << " " << *ptr1 << endl;
	}
	void swap1(int& x,int& y)
	{
		temp = x;
		x = y;
		y = temp;
		cout << x << " " << y << endl;
	}
};
a t;
int main()
{
	int x = 9, y = 10;
	t.swap(&x, &y);
	int *ptr;
	ptr = &x;
	cout << &x << endl;
	*ptr = 80;
	cout << ptr << endl;
	cout << x << endl;
}
*/
/*
#include<iostream>
using namespace std;

static int count = 0;
static void show()
{
	static int count ;
	count++;
	cout << count << endl;

}
int main()
{
	int a;
	show();
	show();
	show();
}
*/


/*
#include<iostream>
using namespace std;
void check(int a[], int x)
{
	for (int i = 0; i < x; i++)
	{
		a[i] = 5;
	}
}
void checkk(int a[][2], int x)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			a[i][j] = 5;
			cout << a[i][j];
		}
	}
}
void primee(int a)
{
	int count = 0;
	for (int i = 2; i <= a; i++)
	{
		if (a%i==0)
		{
			count++;
		}
	}
	if (count == 1)
	{
		cout << "number is prime" << endl;
	}
	else
		cout << "number is not prime" << endl;
}
int main()
{
	int a[5] = { 0 };
	int b[2][2] = { { 1, 2 },
					{ 1, 2 }, 
				  };
	check(a, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << endl;
	}
	checkk(b, 2);
	primee(5);
	primee(7);
	primee(8);
	primee(9);
	primee(11);
}

*/