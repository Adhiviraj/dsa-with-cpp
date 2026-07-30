#include<iostream>
#include<vector>
using namespace std;

struct Node {
    public:
    int data;
    Node* next;

    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* insertAthead(Node * head,int val){
    return new Node(val,head);

}

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}



int main(){
    vector<int> arr = {3,5,8,12};
    Node * y = new Node(arr[0]);
    Node* head = convertArr2LL(arr);
    head = insertAthead(head,100);
    print(head);
}