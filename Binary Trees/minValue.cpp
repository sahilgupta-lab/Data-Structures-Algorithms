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

int minValue(Node* root){
    if(root==NULL)  return INT_MAX;
    return min(root->val, min(minValue(root->left), minValue(root->right)));
}

int main(){
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(-3);
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

    cout<<minValue(a);
}