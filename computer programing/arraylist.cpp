#include <string>
#include <iostream>
using namespace std;
const int MAX_LIST = 10;
typedef int ListItemType;
class List
{
public:
	List();
	bool isEmpty() const;
	int getLength() const;
	void insert(int index, const ListItemType& newItem, bool& success);
	void retrieve(int index, ListItemType dataItem, bool & success) const;
	void remove(int index, bool& success);
private:
	ListItemType items[10];
	int size;
};
List::List() : size(0)
{
}
bool List::isEmpty() const
//Prepared By : Kaleem Nawaz Khan FAST - NUCES Peshawar
//1 | P a g e
//Computer Programming Lab
{
	return size == 0;
}
int List::getLength() const
{
	return size;
}
void List::insert(int index, const ListItemType& newItem, bool& success)
{
	success = (index >= 1) && (index <= size + 1) && (size < MAX_LIST);
	if (success)
	{
		for (int pos = size; pos >= index; --pos)
			items[pos] = items[pos - 1];
		items[index - 1] = newItem;
		++size; // increase the size of the list by one
	}
}
void List::remove(int index, bool& success)
{
	success = (index >= 1) && (index <= size);
	if (success)
	{
		for (int i = index; i < size - 1; ++i)
			items[i] = items[i + 1];
		--size; // decrease the size of the list by one
	} // end if
	//Prepared By : Kaleem Nawaz Khan FAST - NUCES Peshawar
		//2 | P a g e
	//	Computer Programming Lab
}
int main()
{
	List myArrayList;
	bool mainsucc;
	cout << myArrayList.getLength() << endl;
	if (myArrayList.isEmpty()) // tests before
		cout << "This list is empty \n" << endl;
	else
		cout << "List is not empty! \n" << endl;
	myArrayList.insert(1, 2, mainsucc);
	myArrayList.retrieve(1, mainsucc);
}