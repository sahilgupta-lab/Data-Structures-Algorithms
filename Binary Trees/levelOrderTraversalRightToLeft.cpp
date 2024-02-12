#include<iostream>
#include<climits>
using namespace std;

class Node{
    public:
    int val;
    Node *left;
    Node *right;

    Node(int val){
        this->val = val;
        left = nullptr;
        right = nullptr;
    }
};

int levels(Node *root){
    if(!root)   return 0;
    return 1 + max(levels(root->left), levels(root->right));
}

void nthLevelNode(Node *root, int cLevel, int nLevel){
    if(!root)   return;
    if(cLevel == nLevel){
        cout<<root->val;
        return;
    }    
    nthLevelNode(root->right, cLevel + 1, nLevel);
    nthLevelNode(root->left, cLevel + 1, nLevel);
}

void levelOrderTraversal(Node *root){
    int n = levels(root);
    for(int i=1; i<=n; i++){
        nthLevelNode(root, 1, i);
        cout<<endl;
    }
}

int main(){
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    levelOrderTraversal(a);
}