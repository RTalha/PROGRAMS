/*
//muhammad talha
//15p-6087
#include<iostream>
using namespace std;
void febinoci(int number1,int number2,int length)
{
	if (length == 0)
	{
		return;
	}
	else
	{
		int sum = number1 + number2;
		number1 = number2;
		number2 = sum;
		cout << sum << ",";
		febinoci(number1, number2, length-1);
	}
	
}
void febinocci(int number1, int number2, int length)
{
	if (length == 0)
	{
		return;
	}
	else
	{
		int sum = number1 * number2;
		number1 = number2;
		number2 = sum;
		cout << sum << ",";
		febinocci(number1, number2, length - 1);
	}

}
int fibonacci(int n)  
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2)+fibonacci(n-3);
}
int fibonacci_multi(int n)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return 2;
	else
		return fibonacci(n - 1) * fibonacci(n - 2);
}
int main()
{
	int num = 1;
	int num1 = 2;
	int num2 = 3;
	int n = 6;
	cout << fibonacci_multi(n) << endl;
	febinocci(num, num1, n);
}
*/

/*
//muhammad talha
//15p-6087
#include<iostream>
using namespace std;
int power(int number, int p)
{
	if (p == 0)
	{
		return 1;
	}
	else
	{
		return number*power(number, p - 1);
	}
}
int main()
{
	cout << power(2, 6);
}
*/

/*
//muhammad talha
//p15-6087
#include<iostream>
using namespace std;
int factorial(int number)
{
	if (number == 0)
	{
		return 1;
	}
	else
	{
		return number*factorial(number - 1);
	}
}
int main()
{
	int a;
	cin >> a;
	cout << factorial(a);
}
*/


/*
//muhammad talha
//-156087
#include<iostream>
using namespace std;
void fun1(int n)
{
	int i = 0;
	if (n > 0)
		fun1(n - 1);
	else
		return;
	for (i = 0; i < n; i++)
		cout<<" * ";
	cout << endl;
}
int main()
{
	fun1(5);
}
*/

/*
#include<iostream>
using namespace std;
int number(int a)
{
	int b = 0;
	if (a == 0)
	{
		return 0;
	}
	else
	{
		b = 1 + number(a - 1);
		if (b <= 5)
		{
			cout << b;
			return b;
		}
		else
			return 0;
	
	}
}
int main()
{
	cout << number(10);
}
*/

/*
//muhamad talha
//p156087
//check default argument value
#include<iostream>
using namespace std;
void f(int a = 0)
{
	if ( a == 10)
	{
		cout << "hogya" << endl;
		return;
	}
	f(++a);

}
int main()
{
	f(2);
}
*/