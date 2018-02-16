#include<iostream>
#include<string>
#include<fstream>
#include<windows.h>

using namespace std;
class atm
{
	string first_name;
	string last_name;
	long int account;
	int pin;
	double cash;
public:
	atm()
	{
		first_name = "";
		last_name = "";
		pin = 0;
		cash = 0.0;
		account = 0;
	}
	~atm()
	{
		cout << "\t\t\tALLAH HAFIZ" << endl << endl;
	}
	void get(string f_n, string l_n, long int a, int p, double c)
	{
		first_name = f_n;
		last_name = l_n;
		account = a;
		pin = p;
		cash = c;
	}
	string getfirstname()
	{
		return first_name;
	}
	string getlastname()
	{
		return last_name;
	}
	int getpin()
	{
		return pin;
	}
	double getcash()
	{
		return cash;
	}
	long int getaccount()
	{
		return account;
	}
	double setwithdraw()                //wd is withdraw amount
	{
		double wd;
		cout << "\t\tenter amount" << endl;
		cin >> wd;
		while (cash < wd)

		{
			cout << "\t\t you have less amount in your account " << endl;
			cout << "\t\t try again with valid amount" << endl << "$";
			cin >> wd;
			system("cls");
		}
		cash -= wd;
		return cash;
	}
	bool login(long int tempid, int temppin)
	{
		if (account == tempid&&pin == temppin)  
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void changepin()                      //p is temp pin
	{
		int p;
		cout << "/t/t enter 4 digit pin code" << endl;
		cin >> p;

		while (p < 999 || p>10000)                 // 4 digit condition
		{
			cout << "/t/t you enter invalid pin" << endl;
			cout << "/t/t enter valid pin again " << endl;
			cin >> p;
			system("cls");
		}
		pin = p;
		cout << "/t/t your pin has changed" << endl;
	}
	double deposit()                  //dp is deposit amount
	{
		double dp;
		cout << "\t\tenter amount" << endl;
		cin >> dp;
		while (dp <= 500)
		{
			cout << "\t\t your deposit amount is very less " << endl;
			cout << "\t\t enter more amount about more then 500" << endl << "$";
			cin >> dp;
			system("cls");
		}
		cash += dp;
		return cash;
	}
	void show()
	{
		system("cls");
		cout << "\t\t\t//////////////////////" << endl;
		cout << "\t\t\t// Id is:" << account << "    //" << endl;
		cout << "\t\t\t// name is:" << first_name << " " << last_name << "//" << endl;
		cout << "\t\t\t// total amount:" << cash << "  //"<<endl;
		cout << "\t\t\t////////////////////////" << endl;
		Sleep( 1000 );
	}
};

int main()
{
	atm object;
	string firstname;
	string lastname;
	long int id,tempid; //id is basically account
	int pin, temppin;
	int count = 0, temp;//counter checker
	double cash;
	long int temp1;
	ifstream in;
	ofstream out;
	cout << "\t\tWelcome to fast bank yo.\t\t" << endl;
	cout << "\t\tlog in to your account here\t\t" << endl;
	cout << "\t\tenter your id" << endl;
	cout << "                       ";
	cin >> tempid;
	system("cls");
	cout << "wait!loading..." ;
	Sleep(1000);
	system("cls");
there:
	in.open("database.txt",ios::in);              //open for read
	while (!in.eof())
	{
		in >> firstname >> lastname >> id >> pin >> cash;
	  
		if (tempid == id)
		{
			count++;
			cout << "\t\tenter pin " << endl;
			cin >> temppin;
			system("cls");
			cout << "wait!loading...";
			Sleep(1000);
			system("cls");
		here:	if (temppin == pin)
			{
			 object.get(firstname, lastname, id, pin, cash);
				cout << "\t\twelcome !" << endl;
				system("cls");
				break;
			}
			else
			{
				cout << "\t you enter wrong pin" << endl;
				cout << "\t enter pin again" << endl;
				cout << "   \texit press 1 " << endl;
				cin >> temp;
				system("cls");
				cout << "wait!loading...";
				Sleep(1000);
				system("cls");
				switch (temp)
				{
				case 1:
					cout << "\t\tthanks" << endl;
					system("cls");
					goto exit;
					break;

				}
				temppin = temp;
				goto here;
				system("cls");
			}
			
		}

	}
	in.close();
	if (count == 0)                  //run if id is not correct
	{
		system("cls");
		
		cout << "\t\tyou enter invalid id" << endl;
		cout << "\t enter pin again" << endl;
		cout << "   \texit press 1 " << endl;
		cin >> temp1;
		system("cls");
		cout << "wait!loading..." << endl;
		Sleep(10000);
		system("cls");
		switch (temp1)
		{
		case 1:
			cout << "\t\tthanks" << endl;
			system("cls");
			goto exit;
			break;
		}
		tempid = temp1;
		system("cls");
		goto there;
	}
quit:
	while (count == 1)
	{
		cout << "\t1) View Account Info" << endl;
		cout << "\t2) Withdraw" << endl;
		cout << "\t3) Deposit" << endl;
		cout << "\t4) Change Pin" << endl;
		cout << "\t5) Quit" << endl << endl;
		cin >> temp;
		cout << "wait!checking...";
		Sleep(1000);
		system("cls");
		switch (temp)
		{
		case 1:
			object.show();
			system("cls");
			break;
		case 2:
			object.setwithdraw();
			system("cls");
			break;
		case 3:
			object.deposit();
			system("cls");
			break;
		case 4:
			object.changepin();
			system("cls");
			break;
		case 5:
			count = 0;
			goto quit;
			break;
		}
	}
exit:
	//get index from file 
	int index=0;
	in.open("database.txt", ios::in);
	while (!in.eof())
	{
		string data;                 
		getline(in, data);
		index++;
	}
	in.close();
	//update data portion
	//taking array size from file using dynamic array
	long long int *idp;
	string *fname;
	string *lname;
	int *p;
	double *cashp;
		//creating dynamic array
	fname = new string[index];
	lname = new string[index];
	p = new int[index];
	cashp = new double[index];
	idp = new long long int[index];
	//get all data from file 
	in.open("database.txt");
	index = 0;
	while (!in.eof())
	{
		in >> fname[index] >> lname[index] >> idp[index] >> p[index] >> cashp[index];
		if (idp[index] == object.getaccount() && fname[index]== object.getfirstname())   //for finding specific data
		{
			cashp[index] = object.getcash();
			p[index] = object.getpin();
		}
		index++;
	}
	in.close();
	//writing updated data
	out.open("database.txt");
	for (int index1 = 0; index1 < index-1; index1++)
	{
		out << fname[index1] << "\t\t\t" << lname[index1] << "\t\t\t" << idp[index1] << "\t\t\t" << p[index1];
		out << "\t\t\t" << cashp[index1] << "\n";
	}
	out.close();

}