#include <iostream>
#include <queue>

using namespace std;

struct Tree {

	int data;
	int treeSize;
	struct Tree** child = nullptr;

	Tree(int size = 0)
	{

		treeSize = size;

		if (size != 0)
		{
			treeSize = size;
			child = (Tree**)malloc(size * sizeof(Tree));

			while (--size >= 0)
			{
				child[size] = (Tree*)malloc(sizeof(Tree));
			}

		}
		else
		{
			child = nullptr;
		}
	}


	~Tree() {

		delete[] child;
	}

};


void printTree(Tree* t)
{

	std::queue<Tree*> q;

	q.push(t);

	int n = q.size();

	while (!q.empty())
	{
		cout << q.front()->data << ":";

		int size = q.front()->treeSize;
		int size1 = sizeof(q.front()->child) / sizeof(q.front()->child[0]);

		if (size != 0)
		{
			int i = 0;
			while (size--)
			{
				if (q.front()->child[i] != nullptr)
				{
					cout << q.front()->child[i]->data << " ";
					q.push(q.front()->child[i]);
					i++;
				}
			}
		}

		q.pop();
		cout << endl;
	}

}



int main()
{
	//1:2,3,4
	//2:5
	//3:
	//4:6
	//5:
	//6:

	Tree t = 1;

	Tree* c6 = new Tree();
	c6->data = 6;

	Tree* c5 = new Tree();
	c5->data = 5;

	Tree* c4 = new Tree(1);
	c4->data = 4;
	c4->child[0] = c6;

	Tree* c3 = new Tree();
	c3->data = 3;

	Tree* c2 = new Tree(1);
	c2->data = 2;
	c2->child[0] = c5;

	Tree* c1 = new Tree(3);
	c1->data = 1;
	c1->child[0] = c2;
	c1->child[1] = c3;
	c1->child[2] = c4;

	//Tree* root = c1;

	printTree(c1);

	delete c1;
	delete c2;
	delete c3;
	delete c4;
	delete c5;
	delete c6;

	return 0;

}