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

node* buildfromlevelOrder(node * root){
    queue<node*> q;
    cout << "Enter data for root" << endl;
    int data;
    cin>> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node * temp = q.front();
        q.pop();

        cout<< "Enter left node for: " << temp->data << endl;
        int leftdata;
        cin >> leftdata;

        if(leftdata != -1){
            temp-> left = new node(leftdata);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1){
            temp -> right = new node(rightData);
            q.push(temp->right); 
        } 
    }
}

void levelOrder(node* root){
    queue<node*> q;
    

    q.push(root);
    q.push(NULL);

    while(q.size() > 0){
        node * curr = q.front();
        q.pop();
        if(curr == NULL){
            if(!q.empty()){
                cout << endl;
                q.push(NULL);
                continue;
            }else{
                break;
            }
        }
        
        cout<< curr->data << " ";
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }

    cout << endl;
}

int main(){
    node * root = NULL;
    buildfromlevelOrder(root);
    levelOrder(root);
}