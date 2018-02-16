//
////muhammad talha
////p156087
//#include<iostream>
//using namespace std;
//struct node
//{
//	node *left, *right;
//	char info;
//};
//class tree
//{
//	int count;
//public:
//	node *rooot, *temp, *temp1;
//	tree()
//	{
//		count = 0;
//		rooot = temp = temp1 = NULL;
//	}
//	~tree()
//	{
//		delete rooot;
//	}
//	void insert(node *root,char number )
//	{
//		if (root == NULL)
//		{
//			root = new node;
//			root->info = number;
//			root->right = root->left = NULL;
//			rooot = root;
//			return;
//		}
//		else if (root->info > number)
//		{
//			if (root->left == NULL)
//			{
//				root->left = new node;
//				root->left->left = root->left->right = NULL;
//				root->left->info = number;
//				return;
//			}
//			insert(root->left, number);
//		}
//		else if (root->info < number)
//		{
//			if (root->right == NULL)
//			{
//				root->right = new node;
//				root->right->left = root->right->right = NULL;
//				root->right->info = number;
//				return;
//			}
//			insert(root->right, number);
//		}
//		else
//		{
//			cout << "number already exist" << endl;
//			return;
//		}
//	}
//	void search(node *root,char number)
//	{
//		if (root == NULL)
//		{
//			cout << "number is not here" << endl;
//			return;
//		}
//		else if (root->info == number)
//		{
//			cout << "number is here" << endl;
//			return;
//		}
//		else if (root->info > number)
//		{
//			cout << "left" << endl;
//			search(root->left, number);
//		}
//		else if (root->info < number)
//		{
//			cout << "right" << endl;
//			search(root->right, number);
//		}
//	}
//	void trevarsal(node *temp,int depth=0)
//	{
//		if (temp == NULL)
//		{
//			return;
//		}
//		//cout << temp->info; //FOR PRE ORDER
//		/*if (temp->left != NULL)*/
//		cout << depth << endl;
//		cout << temp->info << endl;
//			trevarsal(temp->left,++depth);
//		//count++;  that counts tree childs
//		//cout << temp->info; //for in order
//		/*if (temp->right != NULL)*/
//			trevarsal(temp->right,++depth);
//	//cout<<temp->info;  //post order	
//	}
//	 int getLeafCount(node* node)
//	{
//		if (node == NULL)
//			return 0;
//		if (node->left == NULL && node->right == NULL)
//			return 1;
//		else
//			return getLeafCount(node->left) +
//			getLeafCount(node->right);
//	}
//	void ziczac_print(node *temp, int i = 0)  //it will print root to left then left to right 
//	{
//		if (temp == NULL)
//		{
//			return;
//		}
//		i++;
//		if (i % 2 != 0)
//		{
//			cout << temp->info << endl;
//			ziczac_print(temp->left, i);
//		}
//		else if (i % 2 == 0)
//		{
//			cout << temp->info << endl;
//			ziczac_print(temp->right, i);
//		}
//	}
//	void insert_ziczac(node *temp, int i = 0)
//	{
//		if (temp == NULL)
//		{
//			temp = new node;
//			temp->left = temp->right = NULL;
//			cin >> temp->info;
//			rooot = temp;
//			return;
//		}
//		i++;
//		if (i % 2 != 0)
//		{
//			if (temp->left == NULL)
//			{
//				temp->left = new node;
//				temp->left->left = temp->left->right = NULL;
//				cin >> temp->left->info;
//				return;
//			}
//			insert_ziczac(temp->left, i);
//			return;
//		}
//		else if (i % 2 == 0)
//		{
//			if (temp->right == NULL)
//			{
//				temp->right = new node;
//				temp->right->left = temp->right->right = NULL;
//				cin >> temp->right->info;
//				return;
//			}
//			insert_ziczac(temp->right, i);
//			return;
//		}
//	}
//	void delete_ziczac(node *temp, int i = 0)
//	{
//		if (temp == NULL)
//		{
//			return;
//		}
//		i++;
//		if (i % 2 != 0)
//		{
//			delete_ziczac(temp->left,i);
//			delete temp;
//			return;
//		}
//		else if (i % 2 == 0)
//		{
//			delete_ziczac(temp->right,i);
//			delete temp;
//			return;
//		}
//	}
//	void del(node *temp, char number)
//	{
//		if (temp == NULL)
//		{
//			return;
//		}
//		 if (temp->info == number)
//		{
//			if (temp->left == NULL &&temp->right == NULL)
//			{
//				delete temp;
//				return;
//			}
//			else if (temp->left != NULL&&temp->right == NULL)
//			{
//				rooot = temp->left;
//				delete temp;
//				return;
//			}
//			else if (temp->right != NULL&&temp->left == NULL)
//			{
//				rooot = temp->right;
//				delete temp;
//				return;
//			}
//			else if (temp->left != NULL&&temp->right != NULL)
//			{
//				node *temp1 = temp, *temp2 = temp;
//				//this is for itrative solution
//				/*temp1 = temp1->right;
//				while (temp1->left != NULL)
//				{
//					temp2 = temp1;
//					temp1 = temp1->left;
//				}
//				temp->info = temp1->info;
//				temp2->left = temp1->right;
//				delete temp1;
//				return;*/
//				third_type_del(temp1->right, temp);
//				return;
//			}
//		}
//		if (temp->info > number)
//		{
//			if (temp->left->info != number)
//			{
//				cout << "left1" << endl;
//				del(temp->left, number);
//				return;
//			}
//			if (temp->left->left == NULL && temp->left->right == NULL)
//			{
//				delete temp->left;
//				temp->left = NULL;
//				return;
//			}
//			else if (temp->left->left != NULL&&temp->left->right == NULL)
//			{
//				node *temp1 = temp->left;
//				temp->left = temp1->left;
//				delete temp1;
//				return;
//			}
//			else if (temp->left->right != NULL&&temp->left->left == NULL)
//			{
//				node *temp1 = temp->left;
//				temp->left = temp1->right;
//				delete temp1;
//				return;
//			}
//			else if (temp->left->left != NULL&&temp->left->right != NULL)
//			{
//				node *temp1 = temp->left, *temp2 = temp->left;
//				//THIS IS ITRATIVE SOLUTION
//				/*temp1 = temp1->right;
//				while (temp1->left != NULL)
//				{
//					temp2 = temp1;
//					temp1 = temp1->left;
//				}
//				temp->left->info = temp1->info;
//				temp2->left = temp1->right;
//				delete temp1;
//				return;*/
//				third_type_del(temp1->right, temp->left);
//				return;
//			}
//
//		}
//		if (temp->info < number)
//		{
//			if (temp->right->info != number)
//			{
//				cout << "right1" << endl;
//				del(temp->right, number);
//				return;
//			}
//			if (temp->right->left == NULL && temp->right->right == NULL)
//			{
//				delete temp->right;
//				temp->right = NULL;
//				return;
//			}
//			else if (temp->right->left != NULL&&temp->right->right == NULL)
//			{
//				node *temp1 = temp->right;
//				temp->right = temp1->left;
//				delete temp1;
//				return;
//			}
//			else if (temp->right->right != NULL&&temp->right->left == NULL)
//			{
//				node *temp1 = temp->right;
//				temp->right = temp1->right;
//				delete temp1;
//				return;
//			}
//			else if (temp->right->left != NULL&&temp->right->right != NULL)
//			{
//				node *temp1 = temp->right, *temp2 = temp->right;
//				//THIS IS ITRATIVE SOLUTION
//				/*temp1 = temp1->right;       
//				while (temp1->left != NULL)
//				{
//					temp2 = temp1;
//					temp1 = temp1->left;
//				}
//				temp->right->info = temp1->info;
//				temp2->left = temp1->right;
//				delete temp1;
//				return;*/
//				third_type_del(temp1->right, temp->right);
//					return;
//			}
//
//		}
//	}
//	void third_type_del(node *temp1, node *temp, node *temp2 = NULL)
//	{
//		if (temp1->left == NULL)
//		{
//			if (temp->right = temp1)
//			{
//				temp->info = temp1->info;
//				temp->right = temp1->right;
//				delete temp1;
//				return;
//			}
//			temp->info = temp1->info;
//			temp2->left = temp1->right;
//			delete temp1;
//			return;
//		}
//		temp2 = temp1;
//		third_type_del(temp1->left, temp, temp2);
//	}
//	int get_hight(node *temp)
//	{
//		if (temp == NULL)
//			return 0;
//		int left = get_hight(temp->left);
//		int right = get_hight(temp->right);
//		return left > right ? left + 1 : right + 1;
//	}
//	void delete_all(node *temp)
//	{
//		if (temp == NULL)
//		{
//			cout << "tree is empty" << endl;
//		}
//
//		if (temp->left != NULL)
//			delete_all(temp->left);
//
//		if (temp->right != NULL)
//			delete_all(temp->right);
//
//		if (temp == rooot) 
//		{
//			rooot = NULL;
//		}
//		delete temp;
//	}
//	int leaf_count(node *temp)
//	{
//		static int count = 0;
//		if (temp == NULL)
//		{
//			return 0;
//		}
//
//		leaf_count(temp->left);
//		leaf_count(temp->right);
//
//		if (temp->left == NULL&&temp->right == NULL)
//		{
//			return ++count;
//		}
//		return count;
//	}
//	void cup_shape_insertion(node *temp, int count = 0)
//	{
//		if (temp == NULL)
//		{
//			temp = new node;
//			temp->right = temp->left = NULL;
//			cin >> temp->info;
//			rooot = temp;
//			return;
//		}
//		if (temp->left == NULL&&temp->right == NULL)
//		{
//			cout << "right" << endl;
//			temp->right = new node;
//			temp->right->left = temp->right->right = NULL;
//			cin >> temp->right->info;
//			return;
//		}
//		if (count == 0)
//		{
//			cout << "right" << endl;
//			cup_shape_insertion(temp->right, ++count);
//			return;
//		}
//		if (temp->left == NULL&&temp->right != NULL)
//		{
//			cout << "left" << endl;
//			temp->left = new node;
//			temp->left->left = temp->left->right = NULL;
//			cin >> temp->left->info;
//			return;
//		}
//		if (temp->left != NULL&&temp->right!=NULL)
//		{
//			cout << "left" << endl;
//			cup_shape_insertion(temp->left, ++count);
//		}
//	}
//
//};
//int main()
//{
//	tree t;	
//	for (int i = 1; i < 17; i++)
//	{
//		t.cup_shape_insertion(t.rooot);
//	}
//	int M;
//	cout << "gf" << endl;
//	////t.trevarsal(t.rooot);
//	//M = t.leaf_count(t.rooot);
//	//cout << M << endl;
//	//M = t.get_hight(t.rooot);
//	//cout << M << endl;
//	//t.delete_all(t.rooot);
//
//	//M=t.getLeafCoun(t.rooot);
//	//cout << M << endl;
//	//t.print2();
//}
