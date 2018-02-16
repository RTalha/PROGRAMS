/*
//muhammad talha
//p156087
#include<iostream>
#include<string>
using namespace std;
class data
{
	string name, department;
	float cgpa;
public:
	int roll;
	data()
	{
		name =department= "";
		roll = 0;
		cgpa = 0;
	}
	void set()
	{
		cout << "enter data of student" << endl;
		cout << "name" << endl;
		cin >> name;
		cout << "departmen" << endl;
		cin >> department;
		cout << "roll number" << endl;
		cin >> roll;
		cout << "cgpa" << endl;
		cin >> cgpa;
	}
	void print()
	{
		cout << "name:" << name << endl;
		cout << "department:" << department << endl;
		cout << "roll:" << roll << endl;
		cout << "cgpa:" << cgpa << endl;
	}

};
int main()
{
	data arr[3];
	for (int i = 0; i < 3; i++)
	{
		arr[i].set();
	}
	for (int i = 0; i < 3; i++)
	{
		arr[i].print();
	}
	//for searching we do some thing other
	int key = 0;
	cout << "enter roll that you want to search" << endl;
	cin >> key;
	for (int i = 0; i < 3; i++)
	{
		if (arr[i].roll == key)
		{
			arr[i].print();
		}
	}


}
*/

/*
write a programe that count 10 itegers using operator overloading
#include<iostream>
using namespace std;
class countt
{
	int i;
	int count;
public:
	countt()
	{
		i = 0;
		count = 0;
	}
	void operator ++()
	{
		if (count >=3)
		{
			cout << "house full" << endl;
		}
		count++;
		cin >> i;
	}
};
int main()
{
	countt obj;
	for (int i = 0; i <= 4; i++)
		++obj;
}
*/

/*
//prime number
#include<iostream>
using namespace std;
int main()
{
	int count = 0;
	int number;
	cin >> number;
	for (int i = 1; i <= number; i++)
	{
		if (number%i == 0)
		{
			count++;
		}
	}
	if (count > 2)
	{
		cout << "not prime" << endl;
	}
	else
		cout << "prime" << endl;
}
*/

/*
//muhammad talha
//prime using recursion
#include<iostream>
using namespace std;
void prime(int number, int count = 0,int i=1)
{
	if (i > number)
	{
		if (count > 2)
		{
			cout << "not prime" << endl;
			return;
		}
		else
			cout <<  "prime";
		return;
	}
	else if (number%i == 0)
	{
		count++;
		prime(number, count, ++i);
		return;
	}
	prime(number, count, ++i);
}
int main()
{
	prime(11);
}
*/