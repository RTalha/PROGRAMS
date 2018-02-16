/*
//muhammad talha
//15p6087
#include<iostream>
using namespace std;
struct node
{
	int info;
	node* next, *previous;
};
class list
{
private:
	node *head, *temp, *temp1,*tail;
public:
	list()
	{
		head = temp = temp1=tail = NULL;
	}
	~list()
	{
		delete head;
	}
	void insert()
	{
		if (head==NULL)
		{
			head = new node;
			cin >> head->info;
			head->next = head->previous = head;
			tail = head;
			return;
		}
		int key;
		cin >> key;
		temp = head;
		do
		{
			if (temp->info == key)
			{
				temp->next->previous = new node;
				temp->next->previous->next = temp->next;
				temp->next = temp->next->previous;
				temp->next->previous = temp;
				cin >> temp->next->info;
				tail = head->previous;
				return;
			}
			temp = temp->next;
		} while (temp != head);
	}
	void print()
	{
		if (head == NULL)
		{
			return;
		}
		temp = head;
		do
		{
			cout << temp->info << endl;
			temp = temp->next;

		} while (temp!=head);
	}
	void del()
	{
		if (head == NULL)
		{
			return;
		}
		int key,i=0;
		cout << "enter key" << endl;
		cin >> key;
		temp = head;
		do
		{
			if (temp->info == key)
			{
				if (temp == head)
				{
					if (head->next != head)
					{
						head = head->next;
						temp->next->previous = temp->previous;
						temp->previous->next = temp->next;
						delete temp;
						temp = head;
					}
					else if (head->next == head)
					{
						delete temp;
						temp = head = NULL;
					}
				}
				else
				{
					temp->next->previous = temp->previous;
					temp->previous->next = temp->next;
					delete temp;
					temp = temp1;
				}
			}
			else
				i++;
			temp1 = temp;
			if (i != 0)
			{
				temp = temp->next;
			}

		} while (temp->next!=temp);
	}
	void joseph()
	{
		if (head == NULL)
		{
			return;
		}
		int M;
		int i = 0;
		cout << "m" << endl;
		cin >> M;
		temp = head;
		while (temp->next!=temp)
		{
			if (i == M)
			{
				temp1 = temp->next;
				temp->next = temp1->next;
				temp1->next->previous = temp;
				delete temp1;
				i = 0;
			}
			temp = temp->next;
			i++;
		}
		head = temp;
		head->previous = head;
	}
};
int main()
{
	list l;
	l.insert();
	l.insert();
	l.insert();
	l.insert();
	l.insert();
	l.insert();
	l.insert();
	//l.insert();
	l.print();
	l.joseph();
	l.print();
}
*/

/*
//muhammad talha
//p156087
#include<iostream>
using namespace std;
struct node
{
	int info;
	node *next;
};
class list
{
public:
	node *head,*tail;
	list()
	{
		head=tail = NULL;
	}
	~list()
	{
		delete head;
	}
	void insert(node *temp)
	{
		if (temp == NULL)
		{
			temp = new node;
			temp->next = temp;
			cin >> temp->info;
			head =tail= temp;
			return;
		}
		else if (temp->next == head)
		{
			node *t = new node;
			cin >> t->info;
			t->next = temp->next;
			temp->next = t;
			tail = t;
			return;
		}
		else
			insert(temp->next);
	}
	void del(node *temp,int num, node *current = NULL)
	{
		if (temp == NULL)
		{
			return;
		}
		else if (temp->next == head)
		{
			if (temp->info == num)
			{
				if (current == NULL)
				{
					delete temp;
					temp = head = NULL;
				}
				current->next = temp->next;
				delete temp;
				temp = current;
				return;
			}
			return;
		}
		 if (temp->info == num)
		{
			 if (current == NULL)
			{
				head = head->next;
				tail->next = head;
				delete temp;
				temp = head;
				del(temp, num, current);
				return;
			}
			else
			{
				current->next = temp->next;
				delete temp;
				temp = current;
			}
		}
			current = temp;
			del(temp->next, num, current);
	}
	void print(node *temp)
	{
		if (temp == NULL)
		{
			return;
		}
		else if (temp->next == head)
		{
			cout << temp->info << endl;
			return;
		}
		else
		{
			cout << temp->info << endl;
			print(temp->next);
		}
	}
};
int main()
{
	list l;
	l.insert(l.head);
	l.insert(l.head);
	l.insert(l.head);
	l.insert(l.head);
	l.insert(l.head);
	l.del(l.head, 1);
	l.print(l.head);
}
*/