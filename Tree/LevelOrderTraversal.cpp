#include<iostream>
#include<vector>
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

node* createTree(vector<int>& preorder, int& index){
    if(index < preorder.size() && preorder[index] == -1){
        index++;
        return NULL;
    }
    node * root = new node(preorder[index]);
    index++;
    root->left = createTree(preorder,index);
    root->right = createTree(preorder,index);

    return root;
}

// void print(node* root){
//     if(root == NULL){
//         return ;
//     }

//     cout<<"the node is - "<< root->data << endl;

//     print(root->left);
//     print(root->right);
// }


void InOrderTraversal(node * root){
    if(root == NULL){
        return;
    }

    InOrderTraversal(root->left);
    cout << root->data << " ";
    InOrderTraversal(root->right);

}

// level order traversal --

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

    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    node* root = NULL;
    int index = 0;

    root = createTree(preorder,index);

    // print(root);

    levelOrder(root);

    return 0;
}