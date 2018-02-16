/*
//muhammad talha
//18-10-16
//templates<typename t>
#include<iostream>
using namespace std;
template<class t>
t fun(t a, t b)
{
return a + b;
}
template<class T>
class A
{
private:
T a, b;
public:
void fun(T c, T d)
{
a = c;
b = d;
cout << a << b << endl;
}
};
int main()
{
A<int> object;
object.fun(30, 40);
cout << fun(50,60) << endl;
cout << fun(20.4, 20.4) << endl;
}
*/