#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void levelOrderTravesal(Node* root){
    if(root==NULL) return;
    vector<Node*> currentLevel, nxtLevel;
    currentLevel.push_back(root);
    while(currentLevel.size()){
        for(auto itr : currentLevel){
            cout<<itr->val<<" ";
            if(itr->left!=NULL){
                nxtLevel.push_back(itr->left);
            }
            if(itr->right!=NULL){
                nxtLevel.push_back(itr->right);
            }
        }
        swap(currentLevel, nxtLevel);
        nxtLevel.clear();
    }
}

int main(){
    freopen("input.txt", "r" ,stdin);
    freopen("output.txt", "w" ,stdout);


    Node* nd1 = new Node(1);
    Node* nd2 = new Node(2);
    Node* nd3 = new Node(3);
    Node* nd4 = new Node(4);
    nd1->left = nd2;
    nd1->right = nd4;
    nd4->left = nd3;


    levelOrderTravesal(nd1);
    
}