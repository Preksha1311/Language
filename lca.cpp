#include<bits/stdc++.h>
using namespace std;
#define ll long long int

class Node {
public:
	int val;
	Node *left;
	Node* right;
	Node(int value) {
		val = value;
		left = NULL;
		right = NULL;
	}
};
//find lca
Node* l = NULL;
// pair<bool, bool> lca(Node* cur, Node* a, Node* b) {
// 	if (cur == NULL) return make_pair(0, 0);
// 	pair<bool, bool> lt = lca(cur->left, a, b);
// 	pair<bool, bool> rt = lca(cur->right, a, b);
// 	pair<bool, bool> mystate;
// 	mystate = make_pair(
// 	              lt.first | rt.first | cur == a,
// 	              lt.second | rt.second | cur == b
// 	          );
// 	if (mystate == make_pair(true, true) and l == NULL) {
// 		l = cur;
// 		cout << "hi" << l->val;
// 	}
// 	return mystate;
// }
pair<bool, bool> lca(Node* root, Node* a, Node* b) {
	if (root == NULL) return {false, false};
	pair<bool, bool> ltKaAns = lca(root->left, a, b);
	pair<bool, bool> rtKaAns = lca(root->right, a, b);
	pair<bool, bool> meriState = make_pair(
	                                 ltKaAns.first | rtKaAns.first | root == a,
	                                 ltKaAns.second | rtKaAns.second | root == b
	                             );
	if (meriState == make_pair(true, true) and l == NULL) {
		l = root;
		cout << "hello";
	}
	return meriState;
}

//inorder
void printnodes(Node * root) {
	if (root == NULL) return ;

	vector<Node* > currentLvl, nxtLvl;
	currentLvl.push_back(root);

	while (currentLvl.size()) {
		for (auto it : currentLvl) {
			cout << it->val << " ";
			if (it->left != NULL) {
				nxtLvl.push_back(it->left);
			}
			if (it->right != NULL) {
				nxtLvl.push_back(it->right);
			}

		}
		swap(currentLvl, nxtLvl);
		nxtLvl.clear();
	}
}

int main() {
	freopen("input.txt", "r" , stdin);
	freopen("error.txt", "w" , stderr);
	freopen("output.txt", "w" , stdout);

	Node * n1 = new Node(1);
	Node * n2 = new Node(2);
	Node * n3 = new Node(3);
	Node * n4 = new Node(4);
	Node * n5 = new Node(5);
	n1->left = n2;
	n1->right = n3;
	n2->left = n4;
	n2->right = n5;

	//printnodes(n1);

	int x, y;
	cin >> x >> y;
	Node* a = new Node(1);
	Node* b = new Node(2);

	lca(n1, a, b);
	//for (auto itr : l) cout << itr->val;
	int i = l->val;
	cout << i;
}