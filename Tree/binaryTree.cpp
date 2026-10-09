#include<iostream>
#include<vector>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* createTree(vector<int>& preorder, int& index){
    if(preorder[index] == -1){
        index++;
        return NULL;
    }
    node * root = new node(preorder[index]);
    index++;
    root->left = createTree(preorder,index);
    root->right = createTree(preorder,index);

    return root;
}

void print(node* root){
    if(root == NULL){
        return ;
    }

    cout<< "the node is - " << root->data << endl;

    print(root->left);
    print(root->right);
}



int main(){

    vector<int> preorder = {10, -1, 20, 30, -1, 40, -1, -1, -1};

    node* root = NULL;
    int index = 0;

    root = createTree(preorder,index);

    print(root);

    return 0;
}