/*
#include<iostream>
using namespace std;
void selectionsort(int arr[], int length)
{
	int temp, position;
	for (int i = 0; i < length-1; i++)
	{
		position = i;
		for (int j = i + 1; j < length; j++)
		{
			
			if (arr[j] < arr[position])
			{
				position = j;
			}
		}
			if (position != i)
			{
				temp = arr[i];
				arr[i] = arr[position];
				arr[position] = temp;
			}
	}
}
void insertionsort(int arr[], int length)
{
int temp, j;
for (int i = 0; i < length - 1; i++)
{
	j = i;
	while (j>0 && arr[j]<arr[j-1])
	{
		temp = arr[j];
		arr[j] = arr[j - 1];
		arr[j - 1] = temp;
		j--;
	}
}
}
bool bsearch(int AR[], int N, int VAL) {
	int Mid, Lbound = 0, Ubound = N - 1;
	while (Lbound <= Ubound) {
		Mid = (Lbound + Ubound) / 2; 
		if (VAL>AR[Mid])
			Lbound = Mid + 1;
		else if (VAL<AR[Mid])
			Ubound = Mid - 1;
		else
			return true;
	} return false;
}
int main()
{
	int arrr[10] = { 5, 8, 9, 6, 5, 4, 7, 8, 1, 2 };
	insertionsort(arrr, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arrr[i] << " ";
	}
	cout<<bsearch(arr, 10, 6);
}
*/
/*
#include<iostream>
#include<cassert>
using namespace std;
//template < class T > 
//void check(T* number)
//{
//	assert((number != NULL));
//	cout << *number << endl;
//}
//
//int main()
//{
//	int *ptr=NULL;
//	check(ptr);
//	int a = 10;
//	int *ptr2 = &a;
//	check(ptr2);
//}

void XHandler(int test)
{
	cout << "Inside XHandler, test is:" << test << endl;
	if (test)
		throw test;
}
int main(void)
{
	cout << "Start: " << endl;
	try {
		cout << "Inside try block." << endl; X
			Handler(1);
		XHandler(2);
		XHandler(0);
	}
	catch (int i)
	{
		cout << "Caught an exception. Value is: "; cout << i << endl;
	}
	cout << "End ";
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
struct node
{
	int value;
	node* next;
};
int main()
{
	node* start, *temp;
	int len = 0;
	cout << "Enter the length of Linked List : ";
	cin >> len;
	start = new node;
	start->value = 1;
	start->next = NULL;
	temp = start;
	for (int i = 0; i < len; i++)
	{
		temp->next = new node;
		temp = temp->next;
		temp->value = i + 2;
		temp->next = NULL;
	}
	temp = start;
	while (temp != NULL)
	{
		cout << temp->value << " ";
		temp = temp->next;
	}
	return 0;
}

*/