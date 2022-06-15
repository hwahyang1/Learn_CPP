#include <iostream>
using namespace std;

typedef int BTData_0615_1;

struct BTreeNode_0615_1
{
	BTData_0615_1 data;
	struct BTreeNode_0615_1* left;
	struct BTreeNode_0615_1* right;
};

BTreeNode_0615_1* MakeBTreeNode_0615_1()
{
	BTreeNode_0615_1* nd = new BTreeNode_0615_1;
	nd->left = NULL;
	nd->right = NULL;
	return nd;
}
void DeleteBTreeNode_0615_1(BTreeNode_0615_1* bt) {
	delete bt;
}

BTData_0615_1 GetData_0615_1(BTreeNode_0615_1* bt) {
	return bt->data;
}

void SetData_0615_1(BTreeNode_0615_1* bt, BTData_0615_1 data) {
	bt->data = data;
}

BTreeNode_0615_1* GetLeftSubTree_0615_1(BTreeNode_0615_1* bt) {
	return bt->left;
}
BTreeNode_0615_1* GetRightSubTree_0615_1(BTreeNode_0615_1* bt) {
	return bt->right;
}

void MakeLeftSubTree_0615_1(BTreeNode_0615_1* main, BTreeNode_0615_1* sub)
{
	if (main->left != NULL)
		delete main->left;
	main->left = sub;
}
void MakeRightSubTree_0615_1(BTreeNode_0615_1* main, BTreeNode_0615_1* sub)
{
	if (main->right != NULL)
		delete main->right;
	main->right = sub;
}

int main_0615_1() {

	/*
				1
			2		3
		4
	*/

	BTreeNode_0615_1* bt1 = MakeBTreeNode_0615_1();
	BTreeNode_0615_1* bt2 = MakeBTreeNode_0615_1();
	BTreeNode_0615_1* bt3 = MakeBTreeNode_0615_1();
	BTreeNode_0615_1* bt4 = MakeBTreeNode_0615_1();

	SetData_0615_1(bt1, 1);
	SetData_0615_1(bt2, 2);
	SetData_0615_1(bt3, 3);
	SetData_0615_1(bt4, 4);

	MakeLeftSubTree_0615_1(bt1, bt2);
	MakeRightSubTree_0615_1(bt1, bt3);
	MakeLeftSubTree_0615_1(bt2, bt4);

	cout << "\t\t\t" << GetData_0615_1(bt1) << endl << endl;
	cout << "\t\t" << GetData_0615_1(GetLeftSubTree_0615_1(bt1)) << "\t\t" << GetData_0615_1(GetRightSubTree_0615_1(bt1)) << endl << endl;
	cout << "\t" << GetData_0615_1(GetLeftSubTree_0615_1(GetLeftSubTree_0615_1(bt1))) << endl;

	DeleteBTreeNode_0615_1(bt1);
	DeleteBTreeNode_0615_1(bt2);
	DeleteBTreeNode_0615_1(bt3);
	DeleteBTreeNode_0615_1(bt4);

	return 0;
}