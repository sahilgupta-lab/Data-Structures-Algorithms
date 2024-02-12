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

int maxNode(Node *root){
    if(root==nullptr)   return INT_MIN;
    int leftMax = maxNode(root->left);
    int rightMax = maxNode(root->right);
    return max(root->val, max(leftMax, rightMax));
}

int main(){
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(25);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    cout<<maxNode(a);
}