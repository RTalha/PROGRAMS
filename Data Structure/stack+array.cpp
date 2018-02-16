/*
//muhammad talha
#include<iostream>
using namespace std;
class stack
{
private:
	int *arr;
	int *help;
	int count;
public:
	stack()
	{
		arr = new int[10];
		help = arr;
		count = 0;
	}
	~stack()
	{
		arr = help;
		delete arr;
	}
	void push()
	{
		if (count == 10)
		{
			cout << "overflow" << endl;
			return;
		}
		cin >> *arr;
		arr = arr + 1;
		count++;

	}
	void pop()
	{
		if (count == 0)
		{
			cout << "underflow" << endl;
			return;
		}
		arr = arr - 1;
		cout << *arr;
		
		count--;
	}
};
int main()
{
	stack s;
	s.push();
	s.push();
	s.push();
	s.push();
	s.push();
	s.push();
	s.push();
	s.push();
	s.push();
	s.push();
	s.push();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
}
*/