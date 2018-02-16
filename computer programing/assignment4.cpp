/*
//muhammad talha
//25-11-2016
//Q#1
#include<iostream>
#include<string>
using namespace std;
 
class base
{
public:
	int variable1;
	float variable2;
	int a;
	char m;
	double ab;
	//double variable3;

	base()
	{
		variable1= 0;
		variable2 = 0.0;
		//variable3 = 0.0;
	
	}

};
class drieved :public base
{
	double variable5;
	char ch;
	string c;
	int a;
	int b;
public:
	drieved()
	{
		//variable4 = 0;
		
	}
};
template < class T >
void sizeof_function(T object_of_class)
{
	cout << "size of class is" << sizeof object_of_class << endl;
}
int main()
{
	base object;
	sizeof_function(object);			//it will give us output 16 
	drieved object2;
	sizeof_function(object2);			//it is giving us output 24
	

}
	//in this when we take double clss variable in any of class then it gives us answer with addition of 4bytes with drieved class
	//and it considerd character as 4 bytes and string as 28 bytes
	//
	
*/
/*
//muhammad talha
//25-11-2016
//Q#2
#include<iostream>
using namespace std;
class shape
{
protected:
	int area;
public:
	shape()
	{
		area = 0;
	}
	virtual void calculate_area() = 0;
	void display()
	{
		cout << "area is :" << area << endl;
	}
};
class circle :public shape
{
	int radius;
public:
	circle()
	{
		radius = 0;
	}
	circle(int r)
	{
		radius = r;
	}
	void calculate_area()
	{
		float PI = 3.14;
		area = PI*radius;
	}
	void display()
	{
		shape::display();
	}

};
class rectangle :public shape
{
	int length;
	int width;
public:
	rectangle(int l, int w)
	{
		length = l;
		width = w;
	}
	void calculate_area()
	{
		area = length*width;
	}
	void display()
	{
		shape::display();
	}
};
*/

/*
//muhammad talha
//25-11-2016
//Q#3
#include<iostream>
using namespace std;
class shape
{
protected:
	int area;
public:
	shape()
	{
		area = 0;
	}
	virtual void calculate_area() = 0;
	void display()
	{
		cout << "area is :" << area << endl;
	}
};
class circle :public shape
{
	int radius;
public:
	circle()
	{
		radius = 0;
	}
	circle(int r)
	{
		radius = r;
	}
	void calculate_area()
	{
		float PI = 3.14;
		area = PI*radius;
	}
	void display()
	{
		shape::display();
	}

};
class rectangle:public shape
{
	int length;
	int width;
public:
	rectangle(int l, int w)
	{
		length = l;
		width = w;
	}
	void calculate_area()
	{
		area = length*width;
	}
	void display()
	{
		shape::display();
	}
};
int main()
{
	shape *p;
	circle C1(5);
	rectangle R1(4, 6);
	p = &C1;
	p->calculate_area();
	p->display();
	p = &R1;
	p->calculate_area();
	p->display();
}
*/
/*
//muhammad talha
//25-11-2016
//Q#4
#include<iostream>
using namespace std;
class room
{
protected:
	int num_walls;
	int num_windows;
	int num_doors;
public:
	room()
	{
		num_walls = 0;
		num_windows = 0;
		num_doors = 0;
	}
	room(int n_w,int n_wi, int n_d)
	{
		num_doors = n_d;
		num_walls = n_w;
		num_windows = n_wi;
	}
	virtual void get() = 0;
	virtual char room_type() = 0;
	virtual void set_wardrobe(){};
	virtual int retrieve_wardrobe()
	{
		return 0;
	}
	virtual int retrieve_sofas()
	{
		return 0;
	}
	virtual void print()
	{
	}
};
class bedroom :public room
{
protected:
	int bed_size;
	int num_wardrobe;
public:
	bedroom()
	{
		bed_size = 0;
		num_wardrobe = 0;
	}
	bedroom(int b_s, int n_w)
	{
		bed_size = b_s;
		num_wardrobe = n_w;
	}
	char room_type()
	{
		return 'B';
	}
	void set_wardrobe(int wd)
	{
		num_wardrobe = wd;
	}
	int retrieve_wardrobe()
	{
		return num_wardrobe;
	}
	void get()
	{
		cout << "enter number of walls:" << endl;
		cin >> num_walls;
		cout << "enter number of windows:" << endl;
		cin >> num_windows;
		cout << "enter number of doors:" << endl;
		cin >> num_doors;
		cout << "enter size of bed:" << endl;
		cin >> bed_size;
		cout << "enter number of wardrobe:" << endl;
		cin >> num_wardrobe;
	}
	void print()
	{

		cout <<"number of walls:"<< num_walls << endl;
		cout << "number of windows:" << num_windows << endl;
		cout << "number of doors:" << num_doors << endl;
		cout << "bed size is:" << bed_size << endl;
		cout << "number of wardrobs:" << endl;

	
	}
};
class livingroom : public room
{
protected:
	int num_sofas;
	bool fireplace_present;
public:
	livingroom(){};
	char room_type()
	{
		return 'L';
	}
	int retrieve_sofas()
	{
		return num_sofas;
	}
	void get()
	{
		cout << "enter number of walls:" << endl;
		cin >> num_walls;
		cout << "enter number of windows:" << endl;
		cin >> num_windows;
		cout << "enter number of doors:" << endl;
		cin >> num_doors;
		cout << "enter number of sofas:" << endl;
		cin >> num_sofas;
	}

	void print()
	{
		cout << "number of walls:" << num_walls << endl;
		cout << "number of windows:" << num_windows << endl;
		cout << "number of doors:" << num_doors << endl;
		cout << "number of sofas" << endl;
	}
};

int main()
{
	char a;
	room *obj;
	obj = new bedroom;
	obj->get();
	obj->print();
	a=obj->room_type();
	obj->print();
	cout << a << endl;
	if (a == 'B'|| a=='b')
	{
		cout << "This is bedroom!" << endl;;
	}
	else if (a == 'L'|| a=='l')
	{
		cout << "This room is Living room" << endl;
	}
	else
	{
		cout << "This is some other room" << endl;
	}
}
*/
/*
#include<iostream>
using namespace std;
void welcome()
{
	//clrscr();
	int z;
	cout << "\t%%      %%      ";
	cout << "\n\t%%      %% %%%%%%% %%      %%%%%%  %%%%%% %%%%  %%%% %%%%%%%";
	cout << "\n\t%%      %% %%      %%      %%      %%  %% %%  %%% %% %%       ";
	cout << "\n\t%%  %%  %% %%%%%   %%      %%      %%  %% %%  %%% %% %%%%%      ";
	cout << "\n\t%%  %%  %% %%      %%      %%      %%  %% %%      %% %%           ";
	cout << "\n\t%%%%%%%%%% %%%%%%% %%%%%%% %%%%%%% %%%%%% %%      %% %%%%%%%     ";
	cout << "\n\n\t\t\t        $$$$$$$$  $$$$$        ";
	cout << "\n\t\t\t           $$     $   $      ";
	cout << "\n\t\t\t           $$     $$$$$    ";

	cout << "\n\n\n\tCOMPUTER   PROJECT  (********  ATM-MACHINE  *******)";

	cout << " \n\n\n\t\t     press any number and 'ENTER' to continue: ";
	cin >> z;

	// getch();
}
int main()
{
	welcome();
}
*/