/*
//muhammad talha
//p156087
#include<iostream>
using namespace std;
struct node
{
	int info;
	node* next;
};
class linklist
{
private:
	node *head,*tail, *temp, *current;
public:
	linklist()
	{
		head = temp = current = NULL;

	}
	~linklist()
	{
		delete head;
	}
	void insert()
	{
		if (head == NULL)
		{
			head = new node;
			cout << "enter number that you want to insert" << endl;
			cin >> head->info;
			head->next = 0;
			tail = head;
		}
		else
		{
			temp = NULL;
			temp = new node;
			cout << "enter number that you want to insert 2" << endl;
			cin >> temp->info;
			temp->next = 0;
			tail->next = temp;
			tail = temp;
		}
	}
	void add()
	{
		if (head == NULL)
		{
			head = new node;
			cout << "enter number that you want to insert" << endl;
			cin >> head->info;
			head->next = 0;
		}
		else
		{
			temp = head;
			int key;
			cout << "enter key" << endl;
			cin >> key;
			while (temp->info != key)
			{
				temp = temp->next;
				if (temp->next == NULL)
				{
					break;
				}
			}
			if (temp->info !=key )
			{
				cout << "your key is incorrect" << endl;

			}
			else
			{
				current = new node;
				cout << "enter number" << endl;
				cin >> current->info;
				current->next = temp->next;
				temp->next = current;
				current = NULL;
			}
		}
	}
	void remove()
	{
		if (head == NULL)
		{
			cout << "invalid operation" << endl;
		}
		else
		{
			temp = head;
			current = head;
			int key;
			cout << "enter key" << endl;
			cin >> key;
			if (temp->info == key)
			{
				head = temp->next;
				delete temp;
				temp = head;
				return;
			}
			else if (temp->info != key)
			{
				temp = temp->next;
			}
			while (temp->info != key)
			{
				if (temp->next == NULL)
				{
					break;
				}
				current = current->next;
				temp = temp->next;
			}
			if (temp->next == NULL&&temp->info==key)
			{
				delete temp;
				current->next = NULL;
			}
			else if (temp->next!=NULL&&temp->info==key)
			{
				current->next = temp->next;
				delete temp;
			}
			else
			{
				cout << "invalid operation" << endl;
			}

		}
	}
	void print()
	{
		if (head == NULL)
		{
			cout << "nothing have to print there" << endl;
		}
		else
		{
			current = NULL;
			current = head;
			while (current->next!= NULL)
			{
				cout << current->info << endl;
				current = current->next;
			}
			cout << current->info << endl;
		}
		
	
	}
	void deletelist()
	{
		if (head == NULL)
		{
			cout << "INCORRECT" << endl;
		}
		else
		{
			temp = head;
			while (head->next != NULL)
			{
				head = head->next;
				delete temp;
				temp = head;
			}
			delete temp;
			head = NULL;
		}
	}
	
	void add_start()
	{
		if (head == NULL)
		{
			head = new node;
			cin >> head->info;
			head->next = NULL;
			head = tail;
		}
		else
		{
			current = NULL;
			current = new node;
			cin >> current->info;
			current->next = head;
			head = current;
			current = NULL;
		}
	}
	void check_sorting()
	{
		if (head == NULL)
		{
			return;
		}
		else
		{
			int counter1 = 0, counter2 = 0;
			temp = current = head;
			if (temp->next != NULL)
			{
				temp = temp->next;
			}
			while (temp != NULL)
			{
				if (current->info < temp->info)
				{
					counter1++;
				}
				else if (current->info > temp->info)
				{
					counter2++;
				}
				temp = temp->next;
				current = current->next;
			}
			if (counter1 != 0 && counter2 != 0)
			{
				cout << "not in assending order" << endl;
			}
			else if (counter1 != 0 && counter2 == 0)
			{
				cout << "in assending ordr" << endl;
			}
			else if (counter1 == 0 && counter2 != 0)
			{
				cout << "in desending order" << endl;
			}
			else
				cout << "List has only one value" << endl;
		}
	}
	void insert_add()
	{
		if (head == NULL)
		{
			head = new node;
			cin >> head->info;
			head->next = NULL;
			return;
		}
		else
		{
			int key;
			cin >> key;
			temp = head;
			while (temp != NULL)
			{
				if (temp->info == key&&temp->next != 0)
				{
					current = new node;
					cin >> current->info;
					current->next = temp->next;
					temp->next = current;
					return;

				}
				else if (temp->info == key&&temp->next == 0)
				{
					temp->next = new node;
					cin >> temp->next->info;
					temp->next->next = 0;
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
		else
		{
			int i = 0;
			int j = 0;
			int key;
			cin >> key;
			temp = current = head;
			while (temp!=0)
			{
			
				if (temp->info == key)
				{
					if (i == 0)
					{
						current = temp->next;
						delete temp;
						head = current;
						return;
					}
					else
					{
						
						current->next = temp->next;
						delete temp;
						temp = current;
						return;
					}	
				}
				current = temp;
				temp = temp->next;
				i++;
				j++;
			}
		}
	}
	void del1()
	{
		if (head == NULL)
		{
			return;
		}
		else
		{
			int i = 0;
			int key;
			cin >> key;
			temp = current = head;
			while (temp != 0)
			{

				if (temp->info == key)
				{
					if (temp == head)
					{
						current = temp->next;
						delete temp;
						temp = current;
						head = current;
					}
					else
					{

						current->next = temp->next;
						delete temp;
						temp = current;
					}
				}
				else
					i++;
				current = temp;
				if (i!=0)
					temp = temp->next;
			}
		}
	}
	void change_order()
	{
		if (head == NULL)
		{
			return;
		}
		temp = head;
		node *temp1 = NULL,*temp2=NULL;
		current = temp;
		head = NULL;
		while (temp->next != NULL)
		{
			current = temp;
			while (current->next!=NULL)
			{
				temp1 = current;
				current = current->next;
			}
			temp1->next = NULL;


			if (head == NULL)
			{
				head = tail = current;
			}
			else
			{
				tail->next = current;
				tail = tail->next;
			}
		}
		tail->next = temp;
		tail = tail->next;
	}
	void deletelist_backwordd()
	{
		if (head == NULL)
		{
			return;
		}
		temp = head;
		node *temp1 = NULL;
		while (temp->next != NULL)
		{
			current = temp;
			temp1 = current;
			while (current->next != NULL)
			{
				temp1 = current;
				current = current->next;
			}
			delete current;
			temp1->next = NULL;

		}
		head = temp;

	}
	void find()
	{
		temp = head;
		current = head;
		int i = 0;
		if (head == NULL)
		{
			return;
		}
		while (temp != NULL)
		{
			if (i == 5 && temp != NULL)
			{
				break;
			}
			i++;
			temp = temp->next;
		}
		if (temp == NULL)
		{
			return;
		}
		while (temp != NULL)
		{
			current = current->next;
			temp = temp->next;
		}
		cout << current->info;
	}
	void fifth(node *head)
	{
		if (head == NULL)
		{
			return ;
		}
		else
		{
			fifth(head->next);
			delete head;
		}
	}
	void help()
	{
		cout<<last_fifth(head);
	}
	int last_fifth(node *head)
	{
		int a = 0;
		if (head == NULL)
		{
			return 0;
		}
		else if (head != NULL)
			a = last_fifth(head->next);
		if (a < 5)
		{
			return a+1;
		}
		else if (a == 5)
		{
			a = head->info;
			return a;
		}
		else
			return a;
	}
};

int main()
{
	linklist l;
	l.insert();
	l.insert();
	l.insert();
	l.insert();
	l.insert();
	l.insert();
	l.insert();
	l.insert();
	l.help();
	//l.print();
	l.deletelist_backwordd();
}
*/







/*
//muhammad talha
//p156087
//list using recursion
#include<iostream>
using namespace std;
struct node
{
	node *next;
	int info;
};
class list
{
public:
	node *head;
	list()
	{
		head = NULL;
	}
	~list()
	{
		fifth(head);
	}
	void fifth(node *head)
	{
		if (head == NULL)
		{
			return;
		}
		else
		{

			fifth(head->next);
			delete head;
		}
	}

	void insert(node *temp1)
	{
		if (temp1 == NULL)
		{
			temp1 = new node;
			cin >> temp1->info;
			temp1->next = NULL;
			head = temp1;
			return;
		}
		else if (temp1->next == NULL)
		{
			temp1->next = new node;
			temp1->next->next = NULL;
			cin >> temp1->next->info;
			return;
		}
		else
			insert(temp1->next);
	}
	void print(node *temp1)
	{
		if (temp1 == NULL)
		{
			return;
		}
		cout << temp1->info << endl;
		print(temp1->next);
	}
	void add(node *temp, int number)
	{
		if (temp == NULL)
		{
			temp = new node;
			cin >> temp->info;
			temp->next = NULL;
			head = temp;
			return;
		}
		else if (temp->info == number && temp->next!=NULL)
		{
			node *t = new node;
			cin >> t->info;
			t->next = temp->next;
			temp->next = t;
			return;
		}
		else if (temp->next == NULL)
		{
			if (temp->info != number)
			{
				cout << "you enter wrong number" << endl;
				return;
			}
			temp->next = new node;
			cin >> temp->next->info;
			temp->next->next = NULL;
			return;
		}
		else
			add(temp->next, number);
	}
	void del(node *temp, int number, node *current)
	{
		
		if (temp == NULL)
		{
			cout << "empty list" << endl;
			return;
		}
		else if (temp->info == number)
		{
			if (current == NULL)
			{
				head = head->next;
				delete temp;
				return;
			}
			current->next = temp->next;
			delete temp;
			return;
		}
		else if (temp->next == NULL)
		{
			if (temp->info == number)
			{
				delete temp;
				current->next = NULL;
				return;
			}
			cout << "you enter incorrect number" << endl;
			return;
		}
		else
		{
			current = temp;
			del(temp->next, number,current);
		}
	}
	void complete_del(node *temp, int number, node *current)
	{

		if (temp == NULL)
		{
			return;
		}
		else if (temp->info == number)
		{
			if (current == NULL)
			{
				head = head->next;
				delete temp;
				temp = head;
				complete_del(temp, number, current);
				return;
			
			}
			else
			{
				current->next = temp->next;
				delete temp;
				temp = current;
			}
		}
		else if (temp->next == NULL)
		{
			if (temp->info == number)
			{
				delete temp;
				temp = current;
				current->next = NULL;
			}
			else
			{
				return;
			}
		}
			current = temp;
			complete_del(temp->next, number, current);
	}
};
int main()
{
	list l;
	l.insert(l.head);
	l.insert(l.head);
	l.insert(l.head);
	l.insert(l.head);
	node *t = NULL;
	l.complete_del(l.head, 2, t);
	l.print(l.head);
}
*/