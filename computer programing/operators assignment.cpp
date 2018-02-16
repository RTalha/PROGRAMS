/*
//muhammad talha
//4-11-2016
//Q#4
#include<iostream>
using namespace std;
class distanc
{
	int feets;
	int inches;
public:
	distanc()
	{
		feets = 0;
		inches = 0;
	}
	distanc(int f, int i)
	{
		feets = f;
		inches = i;
	}
	void get()
	{
		cout << "enter feets" << endl;
		cin >> feets;
		cout << "enter inches" << endl;
		cin >> inches;
	}
	void show()
	{
		cout << "length is " << feets << "." << inches;
	}
	distanc operator +=(distanc d)
	{
		distanc d1;
		d1.feets = feets += d.feets;
		d1.inches = inches += d.inches;
		if (inches >= 12)
		{
			d1.feets = feets += 1;
			d1.inches = inches -= 12;
		}
		return d1;
	}
	int operator <(distanc d)
	{
		int a, b;
		a = (feets * 12) + inches;
		b = (d.feets * 12) + d.inches;
		return (a < b);
	}
	distanc operator ++()   // for according to question 5 part A
	{
		distanc d;
		inches++;
		if (inches >= 12)
		{
			inches -= 12;
			feets++;
		}
		d.feets = feets;
		d.inches = inches;
		return d;
	}
	distanc operator ++(int)    //for according to question 5 part A
	{
		distanc d;
		d.feets = feets;
		d.inches = inches;
		inches++;
		if (inches >= 12)
		{
			inches -= 12;
			feets++;
		}
		return d;
	}
};
int main()
{
	distanc d;
	d.get();
	distanc d2(5, 11);
	d2+=d;
	d2.show();
	d.show();
}

*/
/*
//muhammad talha
//5-11-2016
//Q#7
#include<iostream>
using namespace std;
template<class T>
class max
{
	T arr[3];
public:
	max()
	{
		arr[0] = arr[1] = arr[2] = 0;
	}
	max(T a ,T b, T c)
	{
		arr[0] = a;
		arr[1] = b;
		arr[2] = c;
	}
	void get()
	{
		cout << "enter three numbers" << endl;
		cin >> arr[0];
		cin >> arr[1];
		cin >> arr[2];
	}
	void checkmax()
	{
		(arr[0] > arr[1]) && (arr[0] > arr[2]) ? cout << "maximum number is" << arr[0] : cout<<"";
		(arr[1]>arr[0]) && (arr[1]>arr[2]) ? cout << "maximum number is" << arr[1] : cout << "";
		(arr[2]>arr[0]) && (arr[2]>arr[1]) ? cout << "maximum number is" << arr[2] : cout << "";

	}
};
int main()
{
	max <int> a(12,13,1);
	a.get();
	a.checkmax();
}


/*
//muhammad talha
//5-11-2016
//Q#5
#include<iostream>
#include<string>
using namespace std;
class strng
{
	string a;
public:
	strng()
	{
		a= "";
	}
	strng(string str, string str1)
	{
		a = str;
	}
	void get()
	{
		cout << "enter first string " << endl;
		cin >> a;
		
	}
	int operator ==(strng str)
	{
		return (a == str.a);
	}
	strng operator +(strng str)
	{
		strng str1;
		str1.a = a += str.a;
		return str1;
	}
	void show()
	{
		cout << a;
	}
};
int main()
{
	strng a1, b1;
	a1.get();
	b1.get();
	a1 = a1+b1;
	a1.show();
}
*/

/*
//muhammad talha
//5-11-2016
//implementing stack using array and templates
//q#8
#include<iostream>
using namespace std;
const int index = 5;
template<class T>
class Stack
{
	T arr[index];
	int stk;                      
public:
	Stack()
	{
		stk = -1;
	}
	void push(T var)
	{
		arr[++stk] = var;
	}
	T pop()
	{
		return arr[stk--];
	}
	
};
int main()
{
	Stack <int> a;
	a.push(33);
	a.push(32);
	a.push(31);

	cout << a.pop() << endl;
	cout << a.pop() << endl;
	cout << a.pop() << endl;
}
*/



/*
//muhammad talha
//5-11-2016
//Q#1
#include<iostream>
using namespace std;
class check
{
int number;
public:
check()
{
number = 0;
}
check(int n)
{
number = n;
}
check operator %(int c)
{
check c1;
c1.number = number %= c;
return c1;
}
int operator ==(int c)
{
return (number == c);
}
int operator !=(int c)
{
return (number != c);
}
};
int main()
{
check a(3);
if (a % 2 == 0)
{
cout << "evven" << endl;
}
else
{
cout << "odd" << endl;
}
}
*/
/*
//muhammad talha
//5-11-2016
//Q#2
#include<iostream>
using namespace std;
class check
{
public:
int number;

check()
{
number = 0;
}
check(int n)
{
number = n;
}
check operator %(int c)
{
check c1;
c1.number = number %= c;
return c1;
}
int operator ==(int c)
{
return (number == c);
}
int operator !=(int c)
{
return (number != c);
}
void get()
{
cout << "entr number" << endl;
cin >> number;
}
};
int main()
{
int flag=0;
check num;
num.get();
for (int i = 2; i <= num.number/2; i++)
{
if (num%i == 0)
{
flag++;
break;
}
}
if (flag == 0)
{
cout << "prime" << endl;
}
else
cout << "not prime" << endl;
}
*/


/*
//muhammad talha
//5-11-2016
//Q#3
#include<iostream>
using namespace std;
class complex
{
int real;
int imag;
public:
complex()
{
real = 0; imag = 0;
}
complex(int r, int i)
{
real = r;
imag = i;
}
void set()
{
cout << "enter real then imaginary number" << endl;
cin >> real;
cin >> imag;
}
void display()
{
cout << real << "+" << imag << "i" << endl;
}
complex operator +(complex c)
{
complex c1;
c1.real = real += c.real;
c1.imag = imag += c.imag;
return c1;
}
friend complex sum(complex, complex);
};
complex sum(complex a, complex b)
{
complex t1;
t1.real = a.real + b.real;
t1.imag = a.imag + b.imag;
return t1;
}
int main()
{
complex a(2, 3), b(3, 2), t;
a + b;
a.display();

}

*/

/*
//muhammad talha
//5-6-2016
//q#6
#include<iostream>
using namespace std;
class length
{
	int feets;
	int inches;
public:
	length()
	{
		feets = 0;
		inches = 0;
	}
	length(int f, int i)
	{
		feets = f;
		inches = i;
	}
	operator float()
	{
		float meter;
		meter = (feets * 12) + (inches);
		meter *= 0.0254;
		return meter;
	}
};
int main()
{
	double meter;
	length a(5,6);
	meter = a;
	cout << "meter is :" << meter << endl;
}
*/