/*


//muhammad talha
//fraction class
//2-10-2016
#include<iostream>
using namespace std;
class fraction
{
private:
	int nenomirator;
	int denomirator;
public:
	//----------------------------------------------------------------------------------------------
	//public area
	fraction()
	{
		nenomirator = 0;
		denomirator = 0;
	}
	fraction operator ++();
	fraction operator--();
	fraction operator ++(int);
	fraction operator --(int);
	fraction operator +(fraction f);
	fraction operator -(fraction f);
	fraction operator *(fraction f);
	fraction operator /(fraction f);
	fraction operator %(fraction f);
	int operator >=(fraction f);
	int operator <=(fraction f);
	int operator ==(fraction f);
	int operator !=(fraction f);
	int operator >(fraction f);
	int operator <(fraction f);
	fraction operator +=(int a);
	fraction operator -=(int a);
	fraction operator *=(int a);
	fraction operator /=(int a);
	fraction operator +=(fraction f);
	fraction operator -=(fraction f);
	fraction operator *=(fraction f);
	fraction operator /=(fraction f);
	void operator =(const fraction f1);
	friend istream& operator >>(istream& i, fraction& f);
	friend ostream& operator <<(ostream& o, fraction& f);
	void get_c_data();
	void getdata();
	void arrange_with_methmatics();
	void showdata();
};


//----------------------------------------------------------------------------------------------
	                                                                           //increment decrement
	
fraction fraction :: operator ++()
	{
		fraction f1;
		f1.nenomirator =nenomirator= nenomirator + denomirator;
		f1.denomirator =denomirator= denomirator;
		return f1;
	}

fraction fraction:: operator--()
	{
		fraction f1;
		f1.nenomirator = nenomirator = nenomirator - denomirator;
		f1.denomirator = denomirator = denomirator;
		return f1;
	}
fraction fraction:: operator ++(int)
	{
		fraction f;
		f.nenomirator = nenomirator;
		f.denomirator = denomirator;
		nenomirator = nenomirator + denomirator;
		return f;
	}
fraction fraction:: operator --(int)
	{
		fraction f;
		f.nenomirator = nenomirator;
		f.denomirator = denomirator;
		nenomirator=nenomirator-denomirator;
		return f;
	}
//----------------------------------------------------------------------------------------------
	                                                                            //binary operators
fraction fraction:: operator +(fraction f)
	{
		fraction f1;
		if (denomirator == f.denomirator)
		{
			nenomirator = nenomirator + f.nenomirator;
			arrange_with_methmatics();
		}
		else
		{
			nenomirator = nenomirator*f.denomirator + denomirator*f.nenomirator;
			denomirator = denomirator*f.denomirator;
			arrange_with_methmatics();
		}
		f1.nenomirator = nenomirator;
		f1.denomirator = denomirator;
		return f1;
	}
fraction fraction:: operator -(fraction f)
	{
		fraction f1;
		if (denomirator == f.denomirator)
		{
			nenomirator = nenomirator - f.nenomirator;
			arrange_with_methmatics();
		}
		else
		{
			nenomirator = nenomirator*f.denomirator - denomirator*f.nenomirator;
			denomirator = denomirator*f.denomirator;
			arrange_with_methmatics();
		}
		f1.nenomirator = nenomirator;
		f1.denomirator = denomirator;
		return f1;
	}
fraction fraction:: operator /(fraction f)
	{
		fraction f1;
		nenomirator = nenomirator*f.denomirator;
		denomirator = denomirator*f.nenomirator;
		arrange_with_methmatics();
		f1.nenomirator = nenomirator;
		f1.denomirator = denomirator;
		return f1;
	}
fraction fraction:: operator *(fraction f)
	{
		fraction f1;
		nenomirator *= f.nenomirator;
		denomirator *= f.denomirator;
		arrange_with_methmatics();
		f1.nenomirator = nenomirator;
		f1.denomirator = denomirator;
		return f1;
	}
fraction fraction:: operator %(fraction f)
	{
	int a, b;
		a = nenomirator / denomirator;
		b = f.nenomirator / f.denomirator;
		nenomirator = a%b;
		denomirator = 1;
		fraction f1;
		f1.nenomirator = nenomirator;
		f1.denomirator = denomirator ;
		return f1;
	}
//----------------------------------------------------------------------------------------------	
	                                                                     //relationational operator
int fraction:: operator >=(fraction f)
	{
		float a, b;
		a = nenomirator / denomirator;
		b = f.nenomirator / f.denomirator;
		return (a >= b);
	}
int fraction:: operator <=(fraction f)
	{
		float a, b;
		a = nenomirator / denomirator;
		b = f.nenomirator / f.denomirator;
		return (a <= b);
	}
int fraction:: operator !=(fraction f)
	{
		float a, b;
		a = nenomirator / denomirator;
		b = f.nenomirator / f.denomirator;
		return (a != b);
	}
int fraction:: operator ==(fraction f)
	{
		float a, b;
		a = nenomirator / denomirator;
		b = f.nenomirator / f.denomirator;
		return (a == b);
	}
int fraction:: operator <(fraction f)
	{
		float a, b;
		a = nenomirator / denomirator;
		b = f.nenomirator / f.denomirator;
		return (a < b);
	}
int fraction:: operator >(fraction f)
	{
		float a, b;
		a = nenomirator / denomirator;
		b = f.nenomirator / f.denomirator;
		return (a > b);
	}
//----------------------------------------------------------------------------------------------
	                                                                  //others operator Accumulation
fraction fraction:: operator +=(int a)
	{
		fraction f1;
		 nenomirator += (denomirator*a);
		arrange_with_methmatics();
		f1.nenomirator = nenomirator;
		f1.denomirator = denomirator;
		return f1;
	}
fraction fraction:: operator +=(fraction f)
	{
		fraction f1;
		if (denomirator == f.denomirator)
		{
			nenomirator = nenomirator + f.nenomirator;
			arrange_with_methmatics();
		}
		else
		{
			nenomirator = nenomirator*f.denomirator + denomirator*f.nenomirator;
			denomirator = denomirator*f.denomirator;
			arrange_with_methmatics();
		}
		f1.nenomirator = nenomirator;
		f1.denomirator = denomirator;
		return f1;
	}
fraction fraction:: operator -=(int a)
	{
		fraction f1;
		nenomirator -= (denomirator*a);
		arrange_with_methmatics();
		f1.nenomirator = nenomirator;
		f1.denomirator = denomirator;
		return f1;
	}
fraction fraction:: operator -=(fraction f)
	{
		fraction f1;
		if (denomirator == f.denomirator)
		{
			nenomirator = nenomirator - f.nenomirator;
			arrange_with_methmatics();
		}
		else
		{
			nenomirator = nenomirator*f.denomirator - denomirator*f.nenomirator;
			denomirator = denomirator*f.denomirator;
			arrange_with_methmatics();
		}
		f1.nenomirator = nenomirator;
		f1.denomirator = denomirator;
		return f1;
	}

fraction fraction:: operator *=(int a)
	{
		fraction f1;
	    nenomirator *= a;
		arrange_with_methmatics();
		f1.nenomirator = nenomirator;
		f1.denomirator = denomirator;
		return f1;
	}
fraction fraction:: operator *=(fraction f)
	{

		fraction f1;
		nenomirator *= f.nenomirator;
		denomirator *= f.denomirator;
		arrange_with_methmatics();
		f1.nenomirator = nenomirator;
		f1.denomirator = denomirator;
		return f1;
	}
fraction fraction:: operator /=(int a)
	{
		fraction f1;
		denomirator *= a;
		arrange_with_methmatics();
		f1.nenomirator = nenomirator;
		f1.denomirator = denomirator;
		return f1;
	}
fraction fraction:: operator /=(fraction f)
	{

		fraction f1;
		nenomirator = nenomirator*f.denomirator;
		denomirator = denomirator*f.nenomirator;
		arrange_with_methmatics();
		f1.nenomirator = nenomirator;
		f1.denomirator = denomirator;
		return f1;
	}
	//----------------------------------------------------------------------------------------------
	//insertion and exertion friend function
	//----------------------------------------------------------------------------------------------
	// data function
void fraction:: get_c_data()                  // complete data a/b form
	{
		char ch;
		cout << "enter fraction (a/b)" << endl;
		cin >> nenomirator >> ch >> denomirator;

	}
void fraction:: getdata()
	{
		cout << "enter nenomirator" << endl;
		cin >> nenomirator;
		cout << "enter denomirator" << endl;
		cin >> denomirator;
	}
void fraction:: arrange_with_methmatics()
	{
		int count = 1;
		while (count <= nenomirator || count <= denomirator)
		{
			if (nenomirator%count == 0 && denomirator%count == 0)
			{
				nenomirator /= count;
				denomirator /= count;
			}
			count++;
		}
		if (nenomirator % 2 == 0 && denomirator % 2 == 0)
		{
			arrange_with_methmatics();
		}
	}
void fraction:: showdata()
	{
		if (nenomirator == 0)
		{
			cout << "fraction is:=0" << endl;
		}
		else
		{
			cout << "fraction is" << endl;
			cout << nenomirator << "/" << denomirator << endl;

		}
	}
void fraction:: operator =(const fraction f1)
{
	nenomirator = f1.nenomirator;
	denomirator = f1.denomirator;
}
	
//-----------------------------------------------------------------------------------------
//friend function
istream& operator >>(istream& i, fraction& f)
{
	char ch;
	cout << "enter fraction (a/b)" << endl;
	i >> f.nenomirator >> ch >> f.denomirator;
	return i;
}
ostream& operator <<(ostream& o, fraction& f)
{

	if (f.nenomirator == 0)
	{
		o << "fraction is:=0" << endl;
	}
	else
	{
		o << "fraction is" << endl;
		o << f.nenomirator << "/" << f.denomirator << endl;

	}
	return o;
}

*/


