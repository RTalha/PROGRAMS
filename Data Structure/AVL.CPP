///*
////MUHAMMAD TALHA
////P156087
//#include<iostream>
//using namespace std;
//struct node
//{
//	int info;
//	int BF=0;
//	node *right, *left;
//};
//class list
//{
//public:
//	node *root, *current;
//	list()
//	{
//		current=root = NULL;
//	}
//	~list()
//	{
//		complete_delete(root);
//	}
//	void complete_delete(node *temp)
//	{
//		if (temp == NULL)
//		{
//			return;
//		}
//		complete_delete(temp->left);
//		complete_delete(temp->right);
//		if (temp == root)
//		{
//			delete root;
//			root = NULL;
//			return;
//		}
//		delete temp;
//	}
//	int get_hight(node *temp)
//	{
//		if (temp == NULL)
//			return 0;
//		int left = get_hight(temp->left);
//		int right = get_hight(temp->right);
//		return left > right ? left + 1 : right + 1;
//	}
//	int BF_defference(node *temp)
//	{
//		return get_hight(temp->left) - get_hight(temp->right);
//	}
//	void insert(node *temp, int number)
//	{
//		if (temp == NULL)
//		{
//			temp = new node;
//			temp->info = number;
//			temp->right = temp->left = NULL;
//			root = temp;
//			return;
//		}
//		else if (temp->info > number)
//		{
//			if (temp->left == NULL)
//			{
//				temp->left = new node;
//				temp->left->left = temp->left->right = NULL;
//				temp->left->info = number;
//				//return;
//			}
//			insert(temp->left, number);
//		}
//		else if (temp->info < number)
//		{
//			if (temp->right == NULL)
//			{
//				temp->right = new node;
//				temp->right->left = temp->right->right = NULL;
//				temp->right->info = number;
//				//return;
//			}
//			
//			insert(temp->right, number);
//		}
//		cout << temp->info << "temp" << endl;
//		temp->BF = BF_defference(temp);
//		/*if (temp->BF == -2)
//		{
//			if (number > temp->info&&number > temp->right->info)
//
//				if (number<temp->right->info){
//				zac_zic(temp);
//
//				}
//
//				else{
//					zac_zac(temp);
//				}
//
//		}
//		else if (temp->BF==2)
//		{
//			if (number < temp->info&&number < temp->left->info)
//			check if node was added to left subtree of left child or right subtree of left child
//
//			if(number<temp->left->info){
//				zic_zic(temp);
//
//			}
//
//			else
//			{
//				zic_zac(temp);
//			}
//		
//		}
//		*/
//	}
//	void search(node *temp, char number)
//	{
//		if (temp == NULL)
//		{
//			cout << "number is not here" << endl;
//			return;
//		}
//		else if (temp->info == number)
//		{
//			cout << "number is here" << endl;
//			cout << "temp info:" << temp->info << endl;
//		//	temp->BF = BF_defference(temp);
//			cout << "BF:" << temp->BF;
//			return;
//		}
//		else if (temp->info > number)
//		{
//			cout << "left" << endl;
//			search(temp->left, number);
//		}
//		else if (temp->info < number)
//		{
//			cout << "right" << endl;
//			search(temp->right, number);
//		}
//	}
//	void check_get_BF(node *temp)
//	{
//		int number;
//		number = BF_defference(temp);
//		cout <<"BF:"<< number << endl;
//	}
//
//
//
//
//	///////////////////////////////////////
//
//	//zic_zic balance
//	void zic_zic(node* point)
//	{
//		current = point->left;
//		point->left = current->right;
//		current->right = point;
//		point = current;
//
//	}
//
//	// zic_zac balance
//	void zic_zac(node* point)
//	{
//
//
//		current = point->left->right;
//		point->left->right = current->left;
//		current->left = point->left;
//		point->left = current->right;
//		current->right = point;
//		point = current;
//
//	}
//
//
//	//zac-zic balance
//	void zac_zic(node* point)
//	{
//		current = point->right->left;
//		point->right->left =current->right;
//		current->right = point->right;
//		point->right = current->left;
//		current->left = point;
//		point = current;
//
//	}
//
//	//zac-zac balance
//	void zac_zac(node *point)
//	{
//
//		current = point->right;
//		point->right = current->left;
//		current->left = point;
//		point = current;
//
//	}
//
//	void trevarsal(node *temp)
//	{
//		if (temp == NULL)return;
//		trevarsal(temp->left);
//		cout << temp->info;
//		trevarsal(temp->right);
//		
//	}
//
//
//};
//int main()
//{
//	list l; int ch;
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> ch;
//		l.insert(l.root, ch);
//	}
//	cout << "insertion complete" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> ch;
//		l.search(l.root, ch);
//	}
//	l.trevarsal(l.root);
//	
//
//
//}
//*/