/*
//muhammad talha
//p156087
#include<iostream>
using namespace std;
struct  node
{
	int info;
	node *next, *previous;
};
class list
{
private:
	node *head, *temp, *current,*tail;
public:
	list()
	{
		head = temp = current = NULL;
	}
	~list()
	{
		//delete head;
	}
	void insert()
	{
		if (head == NULL)
		{
			head = new node;
			cout << "enter number" << endl;
			cin >> head->info;
			head->next = head->previous = NULL;
			tail = head;
		}
		else
		{
			cout << "enter number2" << endl;
			temp = new node;
			cin >> temp->info;
			temp->next = NULL;
			temp->previous = tail;
			tail->next = temp;
			tail = tail->next;
		}
	}
	void insert_add()
	{
		if (head == NULL)
		{
			head = new node;
			cin >> head->info;
			head->next = head->previous = NULL;
			return;
		}
		else
		{
			int key;
			cout << "enter key" << endl;
			cin >> key;
			temp = head;
			while (temp != NULL)
			{
				if (temp->info == key&&temp->next == NULL)
				{
					temp->next = new node;
					cin >> temp->next->info;
					temp->next->previous = temp;
					tail = temp->next;
					tail->next = NULL;
					return;
				}
				else if (temp->info == key&&temp->next != NULL)
				{
					temp->next->previous = new node;
					temp->next->previous->next = temp->next;
					temp->next = temp->next->previous;
					temp->next->previous = temp;
					cin >> temp->next->info;
					return;
				}
				temp = temp->next;
			}
		}
	}
	void del()
	{
		if (head == NULL)
		{
			return;
		}
		int key;
		int i=0;
		cout << "enter deletion key" << endl;
		cin >> key;
		current=temp = head;
		while (temp!=NULL)
		{
			if (temp->info == key)
			{
				if (temp == head)
				{
					head = head->next;
					head->previous = NULL;
					delete temp;
					temp = head;
				}
				else
				{
					temp->previous->next = temp->next;
					if (temp->next!=NULL)
						temp->next->previous = temp->previous;
					else
					{
						temp->previous->next = NULL;
					}
					delete temp;
					temp = current;
				}
			}
			else
			{
				i++;
			}
			current = temp;

			if (i != 0)
				temp = temp->next;
		}
	}
	void deletelist()
	{
		if (head == NULL)
		{
			return;
		}
		temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		current = temp;
		while (temp ->previous!= NULL)
		{
			
			temp = temp->previous;
			delete current;
			current = temp;
		}
		delete temp;

	}
	void print()
	{
		if (head == NULL)
		{
			return;
		}
		temp = head;
		while (temp != NULL)
		{
			cout << temp->info << endl;
			temp = temp->next;
		}
	}
};
int main()
{
	list l;
	l.insert();
	l.insert();
	l.insert();
	l.insert_add();
	l.print();
	l.del();
	l.print();
	l.deletelist();
}
*/

/*
//recursion method
//muhammad talha
//p156087
#include<iostream>
using namespace std;
struct node
{
	int info;
	node *next, *previous;
};
class list
{
public:
	node *head, *current;
	list()
	{
		head = current = NULL;
	}
	~list()
	{

	}
	void insert(node *temp)
	{
		if (temp == NULL)
		{
			temp = new node;
			temp->next = temp->previous = NULL;
			cout << "first" << endl;
			cin >> temp->info;
			head = temp;
			return;
		}
		else if (temp->next == NULL)
		{
			temp->next = new node;
			temp->next->next = NULL;
			temp->next->previous = temp;
			cin >> temp->next->info;
			return;
		}
		else
			insert(temp->next);
	}
	void complete_del(node *temp)
	{
		if (temp == NULL)
		{
			return;
		}
		complete_del(temp->next);
		delete temp;
	}
	void print(node *temp)
	{
		if (temp == NULL)
		{
			return;
		}
		cout << temp->info << endl;
		print(temp->next);
	}
	void add(node *temp, int num)
	{
		if (temp == NULL)
		{
			temp = new node;
			temp->next = temp->previous = NULL;
			cin >> temp->info;
			head = temp;
			return;
		}
		else if (temp->info == num)
		{
			if (temp->next != NULL)
			{
				temp->next->previous = new node;
				temp->next->previous->next = temp->next;
				temp->next->previous->previous = temp;
				temp->next = temp->next->previous;
				cin >> temp->next->info;
				return;
			}
			temp->next = new node;
			temp->next->next = NULL;
			temp->next->previous = temp;
			cin >> temp->next->info;
			return;
		}
		else
			add(temp->next,num);
	}
	void del(node *temp, int num)
	{
		if (temp == NULL)
		{
			return;
		}
		else if (temp->info == num)
		{
			if (temp == head)
			{
				head = head->next;
				delete temp;
				head->previous = NULL;
				temp = head;
				del(temp, num);
				return;
			}
			else if (temp->next == NULL)
			{
				temp->previous->next = NULL;
				delete temp;
				temp = NULL;
				return;
			}
			else
			{
				node *t;
				t = temp;
				t = t->next;
				temp->next->previous = temp->previous;
				temp->previous->next = temp->next;
				delete temp;
				temp = t;
			}
		}
		else
			del(temp->next, num);
	}
};
int main()
{
	list l;
	l.insert(l.head);
	l.insert(l.head);
	//cout << l.head->info << endl;
	l.insert(l.head);
	l.insert(l.head);
	l.insert(l.head);
	l.insert(l.head);
	l.insert(l.head);
	l.del(l.head, 1);
	l.print(l.head);
	l.complete_del(l.head);
	
}
*/
