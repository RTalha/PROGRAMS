//#include<iostream>
//#include<math.h>
//using namespace std;
//int *arr;
//int index = 0;
//int length(int X)
//{
//	int counter = 0;
//	while (X != 0)
//	{
//		X /= 10;
//		counter++;
//	}
//	return counter;
//
//}
//void convertintostring(int X,int size)
//{
//	arr = new int[size];
//	for (int i = size-1; i >= 0; i--)
//	{
//		int a;
//		a = X % 10;
//		arr[i] = a;
//		X /= 10;
//	}
//
//}
//void first_10(int X)
//{
//	switch (X)
//	{
//	case 1:
//		cout << "ONE";
//		break;
//	case 2:
//		cout << "TWO";
//		break;
//	case 3:
//		cout << "THREE";
//		break;
//	case 4:
//		cout << "FOUR";
//		break;
//	case 5:
//		cout << "FIVE";
//		break;
//	case 6:
//		cout << "SIX";
//		break;
//	case 7:
//		cout << "SEVEN";
//		break;
//	case 8:
//		cout << "EIGHT";
//		break;
//	case 9:
//		cout << "NINE";
//		break; 
//	}
//}
//void first_20(int X)
//{
//	switch (X)
//	{
//	case 10:
//		cout << "TEN";
//		break;
//	case 11:
//		cout << "ELEVEN";
//		break;
//	case 12:
//		cout << "TWELVE";
//		break;
//	case 13:
//		cout << "THIRTEEN";
//		break;
//	case 14:
//		cout << "FOURTEEN";
//		break;
//	case 15:
//		cout << "FIFTEEN";
//		break;
//	case 16:
//		cout << "SIXTEEN";
//		break;
//	case 17:
//		cout << "SEVENTEEN";
//		break;
//	case 18:
//		cout << "EIGHTEEN";
//		break;
//	case 19:
//		cout << "NINETEEN";
//		break;
//	}
//}
//void first_99(int indexx)
//{
//	switch (arr[indexx])
//	{
//	case 0:
//		first_10(arr[indexx + 1]);
//		break;
//	case 1:
//		first_20((arr[indexx]*pow(10,1))+(pow(10,0)*arr[indexx+1]));
//		break;
//	case 2:
//		cout << "TWENTEE ";
//		first_10(arr[indexx + 1]);
//		break;
//	case 3:
//		cout << "THIRTE ";
//		first_10(arr[indexx + 1]);
//		break;
//	case 4:
//		cout << "FOURTE ";
//		first_10(arr[indexx + 1]);
//		break;
//	case 5:
//		cout << "FIFTE ";
//		first_10(arr[indexx + 1]);
//		break;
//	case 6:
//		cout << "SIXTEE ";
//		first_10(arr[indexx + 1]);
//		break;
//	case 7:
//		cout << "SEVENTE ";
//		first_10(arr[indexx + 1]);
//		break;
//	case 8:
//		cout << "EIGHTE ";
//		first_10(arr[indexx + 1]);
//		break;
//	case 9:
//		cout << "NINETE ";
//		first_10(arr[indexx + 1]);
//		break;
//	}
//	
//}
//void first_999(int indexx)
//{
//	switch (arr[indexx])
//	{
//	case 1:
//		cout << "ONE HUNDRED ";
//		break;
//	case 2:
//		cout << "TWO HUNDRED ";
//		break;
//	case 3:
//		cout << "THREE HUNDRED ";
//		break;
//	case 4:
//		cout << "FOUR HUNDRED ";
//		break;
//	case 5:
//		cout << "FIFE HUNDRED ";
//		break;
//	case 6:
//		cout << "SIX HUNDRED ";
//		break;
//	case 7:
//		cout << "SEVEN HUNDRED ";
//		break;
//	case 8:
//		cout << "EIGHTE HUNDRED ";
//		break;
//	case 9:
//		cout << "NINE HUNDRED ";
//		break;
//	}
//	indexx++;
//	
//	first_99(indexx);
//}
//void first_9999(int indexx)
//{
//	switch (arr[indexx])
//	{
//	case 1:
//		cout << "One Thousand ";
//		first_999(++indexx);
//		break;
//	case 2:
//		cout << "Two Thousand ";
//		first_999(++indexx);
//		break;
//	case 3:
//		cout << "Three Thousand ";
//		first_999(++indexx);
//		break;
//	case 4:
//		cout << "Four Thousand ";
//		first_999(++indexx);
//		break;
//	case 5:
//		cout << "Five Thousand ";
//		first_999(++indexx);
//		break;
//	case 6:
//		cout << "Six Thousand ";
//		first_999(++indexx);
//		break;
//	case 7:
//		cout << "Seven Thousand ";
//		first_999(++indexx);
//		break;
//	case 8:
//		cout << "Eight Thousand ";
//		break;
//	case 9:
//		cout << "Nine Thousand ";
//		first_999(++indexx);
//		break;
//	}
//}
//void first_99999(int indexx)
//{
//	switch (arr[indexx])
//	{
//	case 0:
//		first_10(arr[indexx + 1]);
//		first_999(indexx + 2);
//		break;
//	case 1:
//		first_20((arr[indexx] * pow(10, 1)) + (pow(10, 0)*arr[indexx + 1]));
//		cout << "Thousand ";
//		first_999(indexx + 2);
//		break;
//	case 2:
//		cout << "Twenty ";
//		first_10(arr[indexx + 1]);
//		cout << "Thousand ";
//		first_999(indexx + 2);
//		break;
//	case 3:
//		cout << "Thirty ";
//		first_10(arr[indexx + 1]);
//		cout << "Thousand ";
//		first_999(indexx + 2);
//		break;
//	case 4:
//		cout << "Fourty ";
//		first_10(arr[indexx + 1]);
//		cout << "Thousand ";
//		first_999(indexx + 2);
//		break;
//	case 5:
//		cout << "Fifty ";
//		first_10(arr[indexx + 1]);
//		cout << "Thousand ";
//		first_999(indexx + 2);
//		break;
//	case 6:
//		cout << "Sixty ";
//		first_10(arr[indexx + 1]);
//		cout << "Thousand ";
//		first_999(indexx + 2);
//		break;
//	case 7:
//		cout << "Seventy ";
//		first_10(arr[indexx + 1]);
//		cout << "Thousand ";
//		first_999(indexx + 2);
//		break;
//	case 8:
//		cout << "Eighty ";
//		first_10(arr[indexx + 1]);
//		cout << "Thousand ";
//		first_999(indexx + 2);
//		break;
//	case 9:
//		cout << "Ninty ";
//		first_10(arr[indexx + 1]);
//		cout << "Thousand ";
//		first_999(indexx + 2);
//		break;
//	}
//}
//int main()
//{
//	int Number;
//	int count_number_length;
//	cout << "Enter Number" << endl;
//	cin >> Number;
//	count_number_length= length(Number);
//	//cout << count_number_length;
//
//	convertintostring(Number, count_number_length);
//
//	switch (count_number_length)
//	{
//	case 1:
//		first_10(Number);
//		break;
//	case 2:
//		if (arr[0] < 2)
//			first_20(Number);
//		else if (arr[0] >= 2)
//			first_99(index);
//		break;
//	case 3:
//		first_999(index);
//		break;
//	case 4:
//		first_9999(index);
//		break;
//	case 5:
//		first_99999(index);
//		break;
//	default:
//		break;
//	}
//
//	/*for (int i =0 ;i< count_number_length; i++)
//	{
//		cout << arr[i];
//	}*/
//
//	delete arr;
//}