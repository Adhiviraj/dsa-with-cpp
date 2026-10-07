#include<iostream>
#include<queue>
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

node* buildTree(node* root){
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data); 

    if(data == -1){
        return NULL;
    }

    cout << "Enter data for inserting in left" << endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right" << endl;
    root->right = buildTree(root->right);

    return root;
     
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        while(!q.empty()    ){
            node* temp = q.front();
            q.pop();

            if(temp -> left){
                
            }
        }
    }
}

int main(){
    node* root = NULL;

    root = buildTree(root);

    cout<< "Printing the level order traversal output" << endl;
    levelOrderTraversal(root);

    return 0;
}