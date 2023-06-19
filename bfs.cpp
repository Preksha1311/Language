#include<bits/stdc++.h>
using namespace std;
#define ll long long int

class Node {
public:
	int val;
	Node *left;
	Node *right;
	Node (int val) {
		this ->val  = val;
		left = NULL;
		right = NULL;
	}
};



void traversal(Node *root) {
	if (root == NULL) return;
	vector<Node*> curLvl, nctLvl;
	curLvl.push_back(root);
	while (curLvl.size()) {
		for (auto itr : curLvl) {
			cout << itr->val;
			if (itr->left != NULL)
				nctLvl.push_back(itr->left);
			if (itr->right != NULL)
				nctLvl.push_back(itr->right);
		}
		swap(curLvl, nctLvl);
		nctLvl.clear();
	}
}

int main() {
	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);

	Node* nd1 = new Node(1);
	Node* nd2 = new Node(2);
	Node* nd3 = new Node(4);
	Node* nd4 = new Node(5);


	nd1->left = nd2;
	nd1->right = nd4;
	nd4->left = nd3;

	traversal(nd1);

}
