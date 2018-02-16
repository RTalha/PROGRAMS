
/*
//muhammad talha
//p156087
//first code
#include<iostream>
using namespace std;
class list
{
private:
	int *start, *tail, *arry,*temp;
	int current;
	int size, temp_Size;
	int total_size;
public:
	list()
	{
		current = size =temp_Size=0;
		total_size = 10;
		arry = new int[10];
		tail = arry;
		start = temp = arry;
		tail = tail + 9;

	}
	~list()
	{
		delete  arry;

	}
	int get_size()
	{
		return size;
	}
	int get()
	{ // location
		int number;
		start = arry;
		start =start + current;
		number = *start;
		return number;
	}
	void update()
	{
		if (size == total_size)
		{
			cout << "array is already full" << endl;
		}
		else
		{
			start = arry;
			int number;
			cin >> number;
			start = start + size;
			*start = number;
			start++;
			size++;
			temp_Size = size - 1;
		}

	}
	int length()
	{
		return size;
	}
	void strt()
	{
		current = 0;
	}
	void end()
	{
		current =size-1;
	}
	void back()
	{
		if (current == 0)
		{
			cout << "you are already in start position" << endl;
		}
		else
		{
			current--;
		}
	}
	void next()
	{
		if (current == size)
		{
			cout << "you are already in end psition" << endl;
		}
		else
		{
			current++;
		}
	}
	void add()
	{
		int number, position;
		cout << "enter position " << endl;
		cin >> position;
		if (size == total_size)
		{
			cout << "array is already full" << endl;
		}
		else if (position<1||position>size)
		{
			cout << "you enter wrong position" << endl;
		}
		else
		{
			size++;
			for (int i = size-1; i >= position-1; i--)
			{
				start = temp = arry;
				int temp1;
				temp1 = i - 1;  
				start = start+temp1;
				temp = temp + i;
				*temp = *start;

			}
			cout << "enter value that you want to isert" << endl;
			cin >> number;
			start = arry;
			start += position - 1;
			*start = number;
		}
	}
	void remove()
	{
		int position;
		cin >> position;
		if (position<1 || position>size - 1)
		{
			cout << "you enter wrong input" << endl;
		}
		else
		{
			for (int i = position - 1; i < size - 1; i++)
			{
				int temp1;
				start = temp = arry;
				start = start + i;
				temp1 = i + 1;
				temp = temp + temp1;
				*start = *temp;
				
			}
			size--;
		}
	}
	
};
int main()
{
	list obj;
	int num=0;
	int a;
	while (num < 11)
	{
		
		cout << "select work" << endl;
		cin >> num;
		
		
		if (num==1)
			obj.update();
		else if (num == 2)
		{
			a = obj.get();
			cout << a << endl;
		}
			
		else if (num==3)
			obj.add();
			
		else if (num==4)
			obj.remove();
			
		else if (num == 5)
			obj.next();
			
		else if (num == 6)
			obj.back();
			
		else if (num == 7)
			obj.strt();
			
		else if (num == 8)
			obj.end();
			
		else if (num == 9)
		{
			a = obj.get_size();
			cout << endl << a << endl;
		}
			
		else if (num == 10)
		{
			a = obj.length();
			cout << endl << a << endl;
		}
			
			
		
	}


	
	
}

*/


/*
//muhammad talha
//15p-66087
#include<iostream>
using namespace std;
class A_B_L
{
private:
	int *start, *end, *current, *temp;
	int size;
public:
	A_B_L()
	{
		size = -1;
		start = new int[5];
		end = start;
		temp = start;
		end = end + 9;
	}
	~A_B_L()
	{
		delete start;
	}
	void insert()
	{
		temp = start;
		if (size == 4)
		{
			cout << "array is outof bound" << endl;
			return;
		}
		size++;
		temp = temp + size;
		cout << "Enter value: ";
		cin >> *temp;
	}
	void insert_loction()
	{
		int xtemp = 0;
		if (size == 5)
		{
			cout << "Array filled." << endl;
			return;
		}
		int number = 0, location = 0;
		cout << "ENter number: ";
		cin >> number;
		cout << "Please enter position: ";
		cin >> location;
		temp = start;
		size++;
		for (int i =size-1; i >=location; i--)
		{
			
			temp = start;
			temp += i;
			xtemp = *temp;
			temp = start;
			temp += (i + 1);
			*temp = xtemp;
		}
		temp = start;
		temp += location;
		*temp = number;
		system("pause");
	}
	void remove()
	{
		if (size < 0)
		{
			cout << "empty.." << endl;
			return;
		}
		int location = 0;
		cout << "Enter location: ";
		cin >> location;
		if (location >size || location < 0)
		{	
			cout << "Out of range.." << endl;
			return;
		}
		for (int i = location + 1; i <= size; i++)
		{
			temp = start;
			temp += i;
			int xtemp = *temp;
			temp = start;
			temp += (i - 1);
			*temp = xtemp;
		}
		size--;
		temp = start;

		
	}
	int get()
	{
		return *current;
	}
	void back()
	{
		temp = start;
		if (*temp == *current)
		{
			cout << "out of memory" << endl;
			return;
		}
		current--;
	}
	void next()
	{
		temp = start;
		temp = temp + size;
		if (*temp==*current)
		{
			cout << "out bounded.." << endl;
			return;
		}
		current++;
	}
	void start_point()
	{
		current = start;
	}
	void end_point()
	{
		current = start;
		current = current + size;
	}
	void print()
	{
		temp = start;
		int i = -1;
		while (i != size)
		{
			//temp = start;
			cout << *temp << endl;
			temp++;
			i++;
		}
	}
	//palindrome using recursion
	void palindrom(int *a, int size, int *b = NULL , int i = 0)
	{
		if (i == size / 2)
		{
			cout << "palinddrom" << endl;
			return;
		}
		if (i == 0)
		{
			b = a;
			cout << *b << endl;
			b = b + (size-1);
			cout << *b << endl;

		}
		if (*a == *b)
		{

			palindrom(++a, size, --b, ++i);
		}
		else
		{
			cout << "not palindrom" << endl;
			return;
		}
	}
	void help()
	{
		sort2(start,5);
	}
	void sort(int *temp, int size)
	{
		if (size == 0)
		{
			return;
		}
		for (int i = 0; i < size-1; i++)
		{
			if (*(temp + i) > *(temp + (i + 1)))
			{
				int temp1;
				temp1 = *(temp + i);
				*(temp + i) = *(temp + (i + 1));
				*(temp + (i + 1)) = temp1;
			}
		}
		sort(temp, --size);
	}
	//sorting withiut any loop
	void sort1(int *temp, int size, int i = 0,int count=0)
	{
		if (i == size)
		{
			if (count != 0)
			{
				sort1(temp, size);
				return;
			}
			return;
		}
		if (*(temp + i) > *(temp + (i + 1)))
		{
			count++;
			int temp1;
			temp1 = *(temp + i);
			*(temp + i) = *(temp + (i + 1));
			*(temp + (i + 1)) = temp1;
		}
		sort1(temp, size, ++i, count);
	}
	// 3rd minimum find 
	void sort2(int *temp, int size,int j=0)
	{
		if (j==3)
		{
			cout << *(temp + (size - 3)) << endl;
			return;
		}
		for (int i = 0; i < size - 1; i++)
		{
			if (*(temp + i) < *(temp + (i + 1)))
			{
				int temp1;
				temp1 = *(temp + i);
				*(temp + i) = *(temp + (i + 1));
				*(temp + (i + 1)) = temp1;
			}
		}
		sort2(temp, size,++j);
	}

};
void main()
{
	A_B_L a;
	int choice = 0;
	a.insert();
	a.insert();
	a.insert();
	a.insert();
	a.insert();
	a.insert();
	a.print();
	a.help();
	cout << endl;
	a.print();
	
}
*/