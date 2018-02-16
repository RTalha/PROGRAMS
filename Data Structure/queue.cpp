/*
//muhammad talha
//159-6087
#include<iostream>
using namespace std;
class queue
{
	int *arr, *temp, *temp1;
	int size;
public:
	queue()
	{
		size = -1;
		arr = new int[5];
	}
	~queue()
	{
		delete arr;
	}
	void requeu()
	{
		temp = arr;
		if (size == 4)
		{
			cout << "full" << endl;
			return;
		}
		size++;
		temp = temp + size;
		cout << "enter number" << endl;
		cin >> *temp;
	}
	void dequee()
	{
		if (size == -1)
		{
			cout << "epmty" << endl;
			return;
		}
		temp = arr;
		cout << "number is" << endl;
		cout << *temp;
		for (int i = 1; i <= size; i++)
		{
			temp = arr;
			for (int j = 1; j <= i; j++)
			{
				temp1 = temp;
				temp++;
			}
			*temp1 = *temp;
			//temp = arr;
			//temp = temp + i;
			//int xtemp = *temp;
			//temp = arr;
			//temp = temp + (i - 1);
			//*temp = xtemp;
		}
		size--;
	}
};
int main()
{
	queue q;
	q.requeu();
	q.requeu();
	q.requeu();
	q.requeu();
	q.requeu();
	q.dequee();
	q.dequee();
	q.dequee();
	q.dequee();
	q.requeu();
	q.requeu();
	q.requeu();
	q.requeu();
	q.requeu();
	q.dequee();
	q.dequee();
	q.dequee();
	q.dequee();
}
*/

/*
//muhammad talha
//p156087
#include<iostream>
using namespace std;
class queue
{
	int *arr, *front, *rear;
	int size;
	int count;
public:
	queue()
	{
		size = 6;
		arr = new int[size];
		count = 0;
		front = rear = NULL;
	}
	~queue()
	{
		delete arr;
	}
	void enqueu()
	{
		if (rear == NULL)
		{
			rear = front = arr;
			cin >> *rear;
			return;
		}
		else if (rear == (arr + (size - 1)))
		{
			if (front == arr)
			{
				cout << "overflow" << endl;
				return;
			}
			rear = arr;
			cin >> *rear;
			return;
		}
		else if (rear+1 == front)
		{
			cout << "overfloww" << endl;
			return;
		}
		rear++;
		cin >> *rear;
		

	}
	void deque()
	{
		if (front == NULL)
		{
			cout << "underflow" << endl;
			return;
		}
		else if (front == rear)
		{
			cout << *front << endl;
			front = rear = NULL;
			return;
		}
		else if (front == (arr + (size - 1)))
		{
			cout << *front << endl;
			front = arr;
			return;
			 //   if (front == rear)
				//{
				//	front = rear = NULL;
				//	return;
				//}
		}
		
		cout << *front << endl;
		front++;
	}
	void print()
	{
		rear = arr;
		for (int i = 0; i < size - 1; i++)
		{
			cout << *rear << endl;
			rear++;
		}
	}
};
int main()
{
	queue q;
	int c = 0;
b:
	system("cls");;
	cin >> c;
	if (c == 1)
	{
		q.enqueu();
		system("pause");
		goto b;
	}
	else if (c == 2)
	{
		q.deque();
		system("pause");
		goto b;

	}
	else if (c == 3)
	{
		q.print();
		system("pause");
		goto b;
	}
}


*/