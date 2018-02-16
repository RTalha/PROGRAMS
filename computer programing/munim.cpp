/*
#include<iostream>
#include<fstream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string str;
	ifstream in;
	ofstream out;
	in.open("munim.txt");
	out.open("Grade Report.txt");

	string name;
	int id, marks;
	char grade;
	while (!in.eof()){
		in >> name >> id >> marks;
		out << name << ' ' << id << ' ' << marks << ' ';

		if (marks >= 90)
			grade = 'A';
		else if (marks >= 80)
			grade = 'B';
		else if (marks >= 70)
			grade = 'C';
		else if (marks >= 60)
			grade = 'D';
		else if (marks >= 50)
			grade = 'F';

		out << grade << endl;
	}
}*/
