/*
#include<iostream>
using namespace std;
void func()
{
	cout << "hello" << endl;
	func();
}
void fill_array(int a[], int n)
{
	if (n == 0)
	{
		a[n] = n;
		return;
	}
	else
	{

	}
}
int add_array(int a[], int n)
{
	int sum = 0;
	if (n == 0)
	{
		return sum=a[n] + add_array(a, n);
	}
	else
	{
		return sum=a[n]+add_array(a, n-1);
		
	}
	
}
void reverse_array(int a[], int n)
{
	if (n == 0)
	{
		cout << a[n];
	}
	else
	{
		cout << a[n];
		reverse_array(a, n - 1);
	
	}
}
int main()
{
	int a[6] = { 6, 5, 4, 3, 2, 1 };
	int sum = 0;
	for (int i = 0; i < 6; i++)
	{
		sum += a[i];
	}
	cout << sum << endl;
	
	reverse_array(a,5);
}
*/
/*
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += pow(2, i);
		if (sum < n)
		{
			
		}
	}
}

*/

/*
#include<iostream>
using namespace std;
int c = 0;
int sum = 0;
int average_array(int a[], int n)
{
	if (n == 0)
	{
		return a[n];
		cout << a[n]<<endl;
		c++;
	}
	else
	{
		c++;
		sum = a[n] + average_array(a, n - 1);
		cout << sum << endl;
		if (c-n==0)
		{
			sum=sum / n;
		}
		return sum;

	}
}
int max(int a[], int size, int l)
{

}
int main()
{

	int a[5] = { 9, 8, 7, 6, 5 };
	cout << average_array(a, 4) << endl;
	
}
*/