/*
#include<iostream>
using namespace std;
int main()
{
	int arr[10] = { 5, 99, 887, 4, 5, 63, 2, 45, 55, 81 };
	int max1 = 0, max2 = 0, max3 = 0;
	for (int i = 0; i < 10; i++)
	{

		if (max1 < arr[i])
		{
			max3 = max2; max2 = max1; max1 = arr[i];
		}
		else if (max2 < arr[i])
		{
			max3 = max2; max2 = arr[i];
		}
		else if (max3 < arr[i])
		{
			max3 = arr[i];
		}
	}
	cout << max3;
}
*/
/*
//muhammad talha
//task
//q#1
#include<iostream>
using namespace std;
void function1(float*ptr, int a)
{
	int max1 = 0, max2 = 0, max3 = 0;
	for (int i = 0; i < a; i++)
	{
		if (max1 < ptr[i])
		{
			max3 = max2; max2 = max1; max1 = ptr[i];
		}
		else if (max2 < ptr[i])
		{
			max3 = max2; max2 = ptr[i];
		}
		else if (max3 < ptr[i])
		{
			max3 = ptr[i];
		}
	}
	cout << endl << "3rd maximum is:";
	cout << max3;
}

void function(float*ptr,int a)
{
	double average=0;
	for (int i = 0; i < a; i++)
		average += ptr[i];
	cout <<"average is:"<< average/a;
	function1(ptr, a);
}
int main()
{
	float *ptr;
	int a;
	cin >> a;
	ptr = new float[a];
	for (int i = 0; i < a; i++)
	{
		cin >> ptr[i];
		cout << endl;
		cout << ptr[i];
	}
	function(ptr, a);
}


*/


/*
//muhammad talha
//15-11-2016
//q#4
#include<iostream>
using namespace std;
int main()
{
	int max1 = 0, max2 = 0, max3 = 0;
	int *ptr;
	int a;
	cin >> a;
	ptr = new int[a];
	for (int i = 0; i < a; i++)
	{
		cin >> ptr[i];
		if (max1 < ptr[i])
		{
			max3 = max2; max2 = max1; max1 = ptr[i];
		}
		else if (max2 < ptr[i])
		{
			max3 = max2; max2 = ptr[i];
		}
		else if (max3 < ptr[i])
		{
			max3 = ptr[i];
		}
	}
	cout << endl << "3rd maximum is:";
	cout << max3;
}
*/

/*
//muhammad talha
//15-11-2016
//q#4
#include<iostream>
using namespace std;
void mularray(float* ptr1, float* ptr2, int a)
{
	float *ptr3;
	ptr3 = new float[a];
	for (int i = 0; i < a; i++)
	{
		ptr3[i] = ptr1[i] * ptr2[i];
		cout << ptr3[i] << "," ;
	}
}
int main()
{
	float *ptr1;
	float *ptr2;
	int a;
	cin >> a;
	ptr1 = new float[a];
	ptr2 = new float[a];
	for (int i = 0; i < a; i++)
	{
		cin >> ptr1[i];
	}
	cout << "enter 2nd array" << endl;
	for (int i = 0; i < a; i++)
	{
		cin >> ptr2[i];
	}
	mularray(ptr1, ptr2, a);

}
*/
/*
//muhammad talha
//15-11-2016
//muhammad talha
//15-11-2016
//Q#2
#include<iostream>
using namespace std;
void splies(int* ptr1, int* ptr2, int a, int b)
{
	int *ptr3;
	int c = a + b;
	int number;
	ptr3 = new int[c];
	cout << "enter any number" << endl;
	cin >> number;
	int temp;
	int i;
	//search
	for (i = 0; i < a; i++)
	{
		if (ptr1[i] == number)
		{
			temp = i;
			break;
		}
	}
	cout << temp << endl;
	for (int i = 0; i < temp; i++)
	{
		ptr3[i] = ptr1[i];
	}
	int var1 = 0;
	var1 = temp;
	for (int i = 0; i < b; i++)
	{
		ptr3[temp++] = ptr2[i];
	}
	for (int i = var1; i < a; i++)
	{
		ptr3[temp++] = ptr1[i];

	}

	for (int i = 0; i < c; i++)
	{
		cout << ptr3[i] << ",";
	}


}
int main()
{
	int *ptr1;
	int *ptr2;
	int a, b;
	cin >> a;
	ptr1 = new int[a];
	for (int i = 0; i < a; i++)
	{
		cin >> ptr1[i];
	}
	cin >> b;
	ptr2 = new int[b];
	for (int i = 0; i < b; i++)
	{
		cin >> ptr2[i];
	}
	splies(ptr1, ptr2, a, b);

}
*/
/*
#include<iostream>
#include<graphics.h>
void main()
{
	int gd1 = DETECT, mode
}
*/
