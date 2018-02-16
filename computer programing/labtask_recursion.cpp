/*
//muhammad talha
//18-10-16
#include<iostream>
using namespace std;
int Larger(int *arr, int size)
{
	static int i = 0, maxmum =0;
	static int second_maxmum = 0;
	if (i < size)
	{
		if (maxmum < *(arr + i))
		{
			maxmum = *(arr + i);
		}
		i++;
		Larger(arr, size);
	}
	return maxmum;
}
int main()
{
	int arr[10];
	int length = 10;
	cout << "enter 10 numbers" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	cout << Larger(arr, length) << endl;
}
*/



/*
#include<iostream>
using namespace std;
bool check(int *arr, int length)
{
	int i = 0;
	if (length == 0)
	{
		return true;
	}
	else if (*(arr + (length - 1)) < *(arr + length))
	{
		check(arr, length - 1);
	}
	else
		return false;
}
int main()
{
	int arr[10];
	int length = 10;
	cout << "enter 10 numbers" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	cout << check(arr, length) << endl;
}
*/




/*
//muhammadd talha
//18-10-16
#include<iostream>
using namespace std;
int addING(int X, int Y)
{
	if (X == 0)
		return Y;
	else
		return addING(X - 1, X + Y);
}
int main()
{
	cout << addING(5, 2) << endl;
	cout << addING(15, 28) << endl;
}
*/



