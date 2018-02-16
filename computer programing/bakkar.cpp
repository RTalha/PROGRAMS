/*
//abubakkar ikhlaq
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream out;
	ofstream in;
	in.open("output.txt");
	out.open("input.txt");
	int num = 0;
	char op = ' ';
	int sum = 0;
	while (!out.eof())
	{
		out >> num;
		out >> op;
		if (!sum)//beacause we intialized the sum from 0 and in mutipllication we multiply number with sum and sum is 0 so we made it 1
			sum = 1;

		if (op == '+')
		{
			sum = sum + num;
		}
		if (op == '*')
		{
			sum = sum * num;

		}
		if (op == '-')
		{
			sum = sum - num;
		}
		if (op == '/')
		{
			sum = sum / num;
		}
		if (out.peek() == '\n')
		{
			in << "Sum is=" << sum << endl;

		}
	}
}
*/