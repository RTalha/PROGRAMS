/*
#include<iostream>
#include<string>
using namespace std;
struct node
{
	char info[15];
};
class trial
{
private:
	node obj1, *temp1, *temp2, *temp3;
	int i, length;
	char *p, *q;
public:
	trial();
	~trial();
	void starting();
};
int main()
{
	trial link;
	link.starting();
}
trial::trial()
{
	temp1 = temp2 = temp3 = NULL;
}
trial::~trial()
{
	delete temp1;
	delete temp2, temp3;
	delete[]p;
}
void trial::starting()
{
	temp1 = new node;
	temp2 = new node;
	cout << "enter temp1" << endl;
	cin >> temp1->info;
	cout << "enete information about temp2" << endl;
	cin >> temp2->info;
	temp3 = &obj1;
	cout << "enter temp3" << endl;
	cin >> temp3->info;
	cout << "showing information about temps" << endl; 
	cout << temp1->info;
	cout << endl;
	cout << temp2->info;
	cout << endl;
	cout << temp3->info;
	cout << endl;

}
*/

/*
#include<iostream>
using namespace std;
int main()
{
	int *ptr1;
	ptr1 = new int;
	cin >> *ptr1;
	cout << *ptr1;
	delete ptr1;
	 ptr1 = 0;
	 cout << endl;
	cout << ptr1;
	cout << "next work" << endl;
	char *ptr;
	ptr = new char[6];
	char *ptr2 = 0;
	ptr2 = ptr;
	for (int i = 0; i < 6; i++)
	{
		cin >> *(ptr++);
	}
	ptr = ptr2;
	for (int i = 0; i < 6; i++)
	{
		cout<< (*ptr++);
	}
	delete ptr;
	cout << endl;
}

*/


/*
#include<iostream>
using namespace std;
int main()
{
	int *ptr = 0;
	int a = 8;
	ptr = &a;
	cout << a;
	*ptr = 9;
	cout << a;
	delete ptr;   //it deletes memory of x
}
*/



/*
#include<iostream>
using namespace std;
int main()
{
	int a = 5;
	int b = 9;
	int *ptr;
	cout << &a << endl;
	ptr = &a;
	cout << *ptr+5;
	*ptr = NULL;
	cout << ptr << endl;
	ptr = &b;
	*ptr = NULL;
	cout << ptr;
	cout << endl;
	int *ptr1 = 0;
	cout << &ptr1;

}
*/