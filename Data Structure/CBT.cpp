////muhammad talha
////p156087
//#include<iostream>
//#include<cmath>
//using namespace std;
//struct node
//{
//	int info;
//	node *left, *right;
//};
//class CBT
//{
//private:
//	int flag;
//	int count, h;
//public:
//	node *root;
//	CBT()
//	{
//		root = NULL;
//		count = 0;
//		h = 0;
//	}
//	void insert(node *temp)
//	{
//		flag = true;
//		if (temp == NULL)
//		{
//			temp = new node;
//			temp->left = temp->right = NULL;
//			cin >> temp->info;
//			root = temp;
//			count++;
//			return;
//		}
//		if (count == (pow(2, h+1) - 1))
//		{
//			insert_new_level(temp);
//			count++;
//			h++;
//			
//			return;
//		}
//		if (temp->left != NULL && temp->right == NULL)
//		{
//			temp->right = new node;
//			temp->right->left = temp->right->right = NULL;
//			cin >> temp->right->info;
//
//			count++;
//
//			if (temp->info > temp->right->info)
//			{
//				minheap(temp, temp->right);
//			}
//			return;
//		}
//			height(root, h-1);
//	}
//	void height(node *temp, int hh, int lh = 0)
//	{
//		
//		if (hh == lh)
//		{
//			if (temp->left == NULL&&temp->right == NULL)
//			{
//
//				temp->left = new node;
//				//temp = temp->left;
//				temp->left->left = temp->left->right = NULL;
//				cin >> temp->left->info;
//				flag = false;
//				count++;
//				if (temp->info > temp->left->info)
//				{
//					minheap(temp, temp->left);
//				}
//			}
//			else if (temp->left != NULL && temp->right == NULL)
//			{
//				temp->right = new node;
//				//temp = temp->right;
//				temp->right->left = temp->right->right = NULL;
//				cin >> temp->right->info;
//				flag = false;
//				count++;
//				if (temp->info > temp->right->info)
//				{
//					minheap(temp, temp->right);
//				}
//			}
//			return;
//
//		}
//
//		if (temp->left != NULL && flag == true)
//		{
//			height(temp->left, hh, lh + 1);
//			
//		}
//		if (temp->right != NULL && flag == true)
//		{
//
//			height(temp->right, hh, lh + 1);
//			
//		}
//		if (temp->info > temp->left->info)
//		{
//			minheap(temp, temp->left);
//		}
//		if (temp->info > temp->right->info)
//		{
//			minheap(temp, temp->right);
//		}
//
//			
//	}
//	void minheap(node *temp, node*temp1)
//	{
//		int temp3;
//		temp3 = temp->info;
//		temp->info = temp1->info;
//		temp1->info = temp3;
//
//	}
//
//	void insert_new_level(node *temp)
//	{
//		if (temp->left == NULL&&count == 1)
//		{
//			temp->left = new node;
//			temp->left->left = temp->left->right = NULL;
//			cin >> temp->left->info;
//
//			if (temp->info > temp->left->info)
//			{
//				minheap(temp, temp->left);
//			}
//			return;
//		}
//		if (temp->left == NULL&&count > 1)
//		{
//			temp->left = new node;
//			temp->left->left = temp->left->right = NULL;
//			cin >> temp->left->info;
//
//			if (temp->info > temp->left->info)
//			{
//				minheap(temp, temp->left);
//			}
//			return;
//		}
//		 if (temp->left != NULL)
//		{
//			insert_new_level(temp->left);
//
//			if (temp->info > temp->left->info)
//			{
//				minheap(temp, temp->left);
//			}
//			return;
//		}
//	}
//		void trevarsal(node *temp)
//		{
//			if (temp == NULL)
//			{
//				return;
//			}
//			cout << temp->info << endl;
//			trevarsal(temp->left);
//			trevarsal(temp->right);
//		}
//};
//int main()
//{
//	CBT C;
//	C.insert(C.root);
//	C.insert(C.root);
//	C.insert(C.root);
//	C.insert(C.root);
//	C.insert(C.root);
//	C.insert(C.root);
//	C.insert(C.root);
//	C.insert(C.root);
//	C.insert(C.root);
//	C.insert(C.root);
//	C.insert(C.root);
//	C.insert(C.root);
//	/*C.insert(C.root);
//	C.insert(C.root);
//	C.insert(C.root);*/
//	
//	/*C.insert(C.root);
//	C.insert(C.root);
//	C.insert(C.root);*/
//	C.trevarsal(C.root);
//}
