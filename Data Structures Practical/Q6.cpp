#include<iostream>
#include<climits>
using namespace std;

class Node{
    public:
    Node *left;
    Node *right;
    int val;

    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

class BST{
    public:
    Node* insertElement(Node *root, int val){
        Node *newElement = new Node(val);

        if(!root){
            root = newElement;
            return root;
        }

        if(newElement->val < root->val){
            root->left = insertElement(root->left, val);
        }
        else{
            root->right = insertElement(root->right, val);
        }

        return root;
    }

    int minValue(Node* root){
    if(root==NULL)  return INT_MAX;
    return min(root->val, minValue(root->left));
    }

    bool searchElement(Node *root, int element){
        if(!root)   return false;
        if(root->val == element)    return true;
        if(root->val < element)     return searchElement(root->right, element);
        if(root->val > element)     return searchElement(root->left, element);
    }

    Node* deleteNode(Node *root, int element){
        if(!searchElement(root, element)){
            cout<<"Element not found"<<endl;
            return NULL;
        }
        if(element == root->val){

            if(!root ->left && !root -> right){
                delete root;
                return NULL;
            }

            if(!root -> left && root -> right){
                Node *temp = root -> right;
                delete root;
                return temp;
            }

            if(root -> left && !root -> right){
                Node *temp = root -> left;
                delete root;
                return temp;
            }

            if(root -> left && root -> right){
                int minRight = minValue(root->right);
                root->val = minRight;
                root->right = deleteNode(root->right, minRight);
                return root;
            }
        }
        else if(element > root->val){
            root->right = deleteNode(root->right, element);
            return root;
        }
        else{
            root->left = deleteNode(root->left, element);
            return root;  
        }   
    }

    void displayPreorder(Node *root){
        if(!root)   return;
        cout << root->val <<" ";
        displayPreorder(root->left);
        displayPreorder(root->right);
    }

    void displayPostorder(Node *root){
        if(!root)   return;
        displayPostorder(root->left);
        displayPostorder(root->right);
        cout << root->val <<" ";
    }

    void displayInorder(Node *root){
        if(!root)   return;
        displayInorder(root->left);
        cout << root->val << " ";
        displayPostorder(root->right);
    }

    int levels(Node *root){
    if(!root)   return 0;
    return 1 + max(levels(root->left), levels(root->right));
    }

    void nthLevelNode(Node *root, int cLevel, int nLevel){
        if(!root)   return;
        if(cLevel == nLevel){
            cout<<root->val<<" ";
            return;
        }    
        nthLevelNode(root->left, cLevel + 1, nLevel);
        nthLevelNode(root->right, cLevel + 1, nLevel);
    }

    void levelOrderTraversal(Node *root){
        int n = levels(root);
        for(int i=1; i<=n; i++){
            nthLevelNode(root, 1, i);
            cout<<endl;
        }
    }

};

int main(){
    Node *root = NULL;
    BST b;
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;

    for(int i=0; i<n; i++){
        int val;
        cout<<"Enter the value of the node: ";
        cin>>val;
        root = b.insertElement(root, val);
    }

    b.levelOrderTraversal(root);

    b.deleteNode(root, 12);
    b.levelOrderTraversal(root);

    
}