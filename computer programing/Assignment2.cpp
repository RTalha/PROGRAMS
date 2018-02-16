/*
//muhammad talha
//2-10-16
//Q1
#include<iostream>
#include<string>
using namespace std;
class student
{
protected:
	int roll_number;
	string name;
	string course;
public:
	student()
	{
		roll_number = 0;
		name = "";
		course = "";
	}
	void input()
	{
		cout << "enter name of student:" << endl;
		cin >> name;
		cout << "enter roll number of student:" << endl;
		cin >> roll_number;
		cout << "enter course:" << endl;
		cin >> course;
	}
	void print1()
	{
		cout << name << endl;
		cout << roll_number << endl;
		cout << course << endl;
	}
};
class exam :public student
{
protected:
	int marks1;
	int marks2;
	int marks3;
public:
	exam()
	{
		marks1 = 0;
		marks2 = 0;
		marks3 = 0;
	}
	void input_marks()
	{
		cout << "enter english marks" << endl;
		cin >> marks1;
		cout << "enter maths marks" << endl;
		cin >> marks2;
		cout << "enter physics marks" << endl;
		cin >> marks3;
	}
	void print()
	{
		print1();
		cout << "english marks is:" << marks1 << endl;
		cout << "maths marks is:" << marks2 << endl;
		cout << "physics marks is:" << marks3 << endl;
	}
};
int main()
{
	exam student[5];
	for (int i = 0; i < 5; i++)
	{
		student[i].input();
		student[i].input_marks();
		
	}
	for (int i = 0; i < 5; i++)
	{
		student[i].print();

	}
}

*/

/*
//muhammad talha
//2-10-16
//Q#2
#include<iostream>
#include<string>
using namespace std;
class student
{
private:
	int roll_number;
	string name;
	string course;
public:
	student()
	{
		roll_number = 0;
		name = "";
		course = "";
	}
	void input()
	{
		cout << "enter name of student:" << endl;
		cin >> name;
		cout << "enter roll number of student:" << endl;
		cin >> roll_number;
		cout << "enter course:" << endl;
		cin >> course;
	}
	void print1()
	{
		cout << name << endl;
		cout << roll_number << endl;
		cout << course << endl;
	}
};
class exam :private student
{
private:
	int marks1;
	int marks2;
	int marks3;
public:
	exam()
	{
		marks1 = 0;
		marks2 = 0;
		marks3 = 0;
	}
	void input_marks()
	{
		input();
		cout << "enter english marks" << endl;
		cin >> marks1;
		cout << "enter maths marks" << endl;
		cin >> marks2;
		cout << "enter physics marks" << endl;
		cin >> marks3;
	}
	void print()
	{
		print1();
		cout << "english marks is:" << marks1 << endl;
		cout << "maths marks is:" << marks2 << endl;
		cout << "physics marks is:" << marks3 << endl;
	}
};
int main()
{
	
	exam student[5];
	for (int i = 0; i < 5; i++)
	{
		
		student[i].input_marks();

	}
	for (int i = 0; i < 5; i++)
	{
		student[i].print();

	}
	
	
}
*/
/*
//muhammad talha
//2-10-16
//Q#3 ....... Write a program where derived class is a friend of base class.
#include<iostream>
#include<string>
using namespace std;
class student
{
	friend class exam;
private:
	int roll_number;
	string name;
	string course;
public:
	student()
	{
		roll_number = 0;
		name = "";
		course = "";
	}
};
class exam 
{
private:
	int marks1;
	int marks2;
	int marks3;
public:
	exam()
	{
		marks1 = 0;
		marks2 = 0;
		marks3 = 0;
	}
	void input_marks(student& stdnt)
	{
		
		cout << "enter student name" << endl;
		cin >> stdnt.name;
		cout << "enter student roll number" << endl;
		cin >> stdnt.roll_number;
		cout << "enter student course:" << endl;
		cin >> stdnt.course;
		cout << "enter english marks" << endl;
		cin >> marks1;
		cout << "enter maths marks" << endl;
		cin >> marks2;
		cout << "enter physics marks" << endl;
		cin >> marks3;
	}
	void print(student print)
	{
		cout << "student name is:" << print.name << endl;
		cout << "student roll number is:" << print.roll_number << endl;
		cout << "student course:" << print.course << endl;
		cout << "english marks is:" << marks1 << endl;
		cout << "maths marks is:" << marks2 << endl;
		cout << "physics marks is:" << marks3 << endl;
	}
};
int main()
{
	student data_student;
	
	exam data_of_student[5];
	for (int i = 0; i < 5; i++)
	{
		data_of_student[i].input_marks(data_student);
	}
	for (int i = 0; i < 5; i++)
	{
		data_of_student[i].print(data_student);
	}
	
}
*/
/*
//muhammad talha
//2-10-16
//Q#5
#include<iostream>
#include<string>
using namespace std;
class user
{
protected:
	string name;
	int age;
public:
	void get()
	{
		cout << "enter name" << endl;
		cin >> name;
		cout << "enter age:" << endl;
		cin >> age;
	}
	void display1()
	{
		cout << "name is:" << name << endl;
		cout << "age is :" << age << endl;
	}
};
class student :public user
{
private:
	string course;
	int roll_number;
	int marks;

public:
	void get_student_data()
	{
		get();
		cout << "enter course name" << endl;
		cin >> course;
		cout << "enter roll number" << endl;
		cin >> roll_number;
		cout << "enter marks" << endl;
		cin >> marks;
	}
	void display()
	{
		display1();
		cout << "roll number is:" << roll_number << endl;
		cout << "course is:" << course << endl;
		cout << "marks is:" << marks << endl;
	}
};
class teacher :public user
{
	string subject;
	string contact_hour;
public:
	teacher(string nam, int ag)
	{
		name = nam;
		age = ag;
	}
	void get_teacher_data()
	{
		get();
		cout << "enter subject of this teacher:" << endl;
		cin >> subject;
		cout << "enter contact hours:" << endl;
		cin >> contact_hour;
	}
	void display()
	{
		cout << "showing teacher information:" << endl;
		display1();
		cout << "subject is:" << subject << endl;
		cout << "contacts hours:" << contact_hour << endl;
	}
};
int main()
{
	teacher t1("taha", 55);
	cout << "teacher data:" << endl;
	t1.get_teacher_data();
	t1.display();
	student t2;
	cout << "student data:" << endl;
	t2.get_student_data();
	t2.display();
}
*/

/*
//muhammad talha
//2-10-16
//Q#6
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class student
{
protected:
	string name;
	int age;
public:
	void get()
	{
		cout << "enter name" << endl;
		cin >> name;
		cout << "enter age" << endl;
		cin >> age;
	}
	void display1()
	{
		cout << setw(8) << name;
		cout << setw(8) << age;
	}
};
class marks :public student
{
protected:
	int marks1;
	int marks2;
public:
	void get_marks()
	{
		get();
		cout << "enter marks1" << endl;
		cin >> marks1;
		cout << "enter marks2" << endl;
		cin >> marks2;
	}
	void display2()
	{
		display1();
		cout << setw(10) << marks1;
		cout << setw(8) << marks2;
	}
};
class result :public marks
{
private:
	int total;
public:
	result()
	{
		total = 0;
	}
	void reslt()
	{
		get_marks();
		total = marks1 + marks2;

	}
	void display3()
	{
		display2();
		if (total >= 50)
		{
			cout << setw(13) << "passed";
		}
		else
		{
			cout << setw(13) << "Failed";
		}
		cout << endl;
	}
};
int main()
{
	result t1[2];
	for (int i = 0; i < 2; i++)
		t1[i].reslt();
	cout << "name       roll no   english   maths   result" << endl;
	for (int i = 0; i < 2; i++)
		t1[i].display3();
	cout << endl;
}
*/
/*
//muhammad talha
//2-10-16
//Q#7
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class student
{
protected:
	string name;
	int age;
public:
	void get()
	{
		cout << "enter name" << endl;
		cin >> name;
		cout << "enter age" << endl;
		cin >> age;
	}
	void display()
	{
		cout << setw(8) << name;
		cout << setw(8) << age;
	}
};
class marks :public student
{
protected:
	int marks1;
	int marks2;
public:
	void get()
	{
		student::get();
		cout << "enter marks1" << endl;
		cin >> marks1;
		cout << "enter marks2" << endl;
		cin >> marks2;
	}
	void display()
	{
		student::display();
		cout << setw(10) << marks1;
		cout << setw(8) << marks2;
	}
};
class result :public marks
{
private:
	int total;
public:
	result()
	{
		total = 0;
	}
	void reslt()
	{
		get();
		total = marks1 + marks2;

	}
	void display()
	{
		marks::display();
		if (total >= 50)
		{
			cout << setw(13) << "passed";
		}
		else
		{
			cout << setw(13) << "Failed";
		}
		cout << endl;
	}
};
int main()
{
	result t1[2];
	for (int i = 0; i < 2; i++)
		t1[i].reslt();
	cout << "name       roll no   english   maths   result" << endl;
	for (int i = 0; i < 2; i++)
		t1[i].display();
	cout << endl;
}
*/

/*
//muhammad talha
//2-4-2016
//Q#8
#include<iostream>
#include<string>
using namespace std;
class university
{
private:
	string name_person;
	string name_university;
	string department;
public:
	university()
	{
		name_person = "";
		name_university = "";
		department = "";
	}
	void get_data()
	{
		cout << "enter name the person to whom the project is assigned." << endl;
		cin >> name_person;
		cout << "department to which the project is assigned" << endl;
		cin >> department;
		cout << "university name" << endl;
		cin >> name_university;
	}
	void display()
	{
		cout << "university information" << endl << endl;
		cout << name_university << endl;
		cout << name_person << endl;
		cout << department << endl;
	}
};
class company
{
private:
	string name_company;
	int number;
	string name_engineer;
	int amount_project;
public:
	company()
	{
		name_company = "";
		name_engineer = "";
		number = 0;
		amount_project = 0;
	}
	void get_data()
	{
		cout << "enter company name" << endl;
		cin >> name_company;
		cout << "enter engineer name" << endl;
		cin >> name_engineer;
		cout << "enter number" << endl;
		cin >> number;
		cout << "enter amount of project" << endl;
		cin >> amount_project;

	}
	void display()
	{
		cout << "company information" << endl << endl;
		cout << name_company << endl;
		cout << name_engineer << endl;
		cout << number << endl;
		cout << amount_project << endl;

	}
};
class project :public university, public company
{
private:
	string type_project;
	string duration;
	int amount;
public:
	project()
	{
		type_project = "";
		duration = "";
		amount = 0;
	}
	void get_data()
	{
		cout << "enter type of project" << endl;
		cin >> type_project;
		cout << "enter duration of project" << endl;
		cin >> duration;
		cout << "enter amount" << endl;
		cin >> amount;
		company::get_data();
		university::get_data();
	}
	void display()
	{
		cout << "project details" << endl << endl;
		cout << type_project << endl;
		cout << duration << endl;
		cout << amount << endl;
		company::display();
		university::display();

	}
};
int main()
{
	project p1;
	p1.get_data();
	p1.display();
}
*/

/*
//muhammad talha
//2-4-2016
//Q#10
#include<iostream>
#include<string>
using namespace std;
class A
{
private:
	int address;
public:
	void get_address()
	{
		cin >> address;
	}
};
class university_B :public A
{
private:
	string name_person;
	string name_university;
	string department;
public:
	university_B()
	{
		name_person = "";
		name_university = "";
		department = "";
	}
	void get_data()
	{
		get_address();
		cout << "enter name the person to whom the project is assigned." << endl;
		cin >> name_person;
		cout << "department to which the project is assigned" << endl;
		cin >> department;
		cout << "university name" << endl;
		cin >> name_university;
	}
	void display()
	{
		cout << "university information" << endl << endl;
		cout << name_university << endl;
		cout << name_person << endl;
		cout << department << endl;
	}
};
class company_C :public A
{
private:
	string name_company;
	int number;
	string name_engineer;
	int amount_project;
public:
	company_C()
	{
		name_company = "";
		name_engineer = "";
		number = 0;
		amount_project = 0;
	}
	void get_data()
	{
		cout << "enter company name" << endl;
		cin >> name_company;
		cout << "enter engineer name" << endl;
		cin >> name_engineer;
		cout << "enter number" << endl;
		cin >> number;
		cout << "enter amount of project" << endl;
		cin >> amount_project;

	}
	void display()
	{
		cout << "company information" << endl << endl;
		cout << name_company << endl;
		cout << name_engineer << endl;
		cout << number << endl;
		cout << amount_project << endl;

	}
};
class project :public university_B, public company_C
{
private:
	string type_project;
	string duration;
	int amount;
public:
	project()
	{
		type_project = "";
		duration = "";
		amount = 0;
	}
	void get_data()
	{
		cout << "enter type of project" << endl;
		cin >> type_project;
		cout << "enter duration of project" << endl;
		cin >> duration;
		cout << "enter amount" << endl;
		cin >> amount;
		company_C::get_data();
		university_B::get_data();
	}
	void display()
	{
		cout << "project details" << endl << endl;
		cout << type_project << endl;
		cout << duration << endl;
		cout << amount << endl;
		company_C::display();
		university_B::display();

	}
};
int main()
{
	project p1;
	p1.get_data();
	p1.display();
}
*/