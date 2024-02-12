#include<iostream>
#include<climits>
using namespace std;

class Node{
    public:
    Node *left, *right;
    int val;

    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

int level(Node* root){
    if(root==NULL)  return 0;
    return 1 + max(level(root->left), level(root->right));
}

void helper(int spread, Node *root){
    if(level(root)==spread){
        cout<<root->val<<" ";
        return;
    }
    helper(spread, root->left);
    helper(spread, root->right);
}

void nthNodes(int n, Node *root){
    int size = level(root);
    int spread = size - n + 1;
    helper(spread, root);
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

    nthNodes(3, a);
}