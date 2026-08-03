#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int data1,Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i < arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node* deleleHead(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* prev = head;
    head = head->next;

    head->back = nullptr;
    prev->next = nullptr;

    delete prev;
    return head;
}

Node* deletetail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* tail = head;

    while(tail->next != NULL){
        tail = tail->next;
    }
    Node* newtail = tail->back;
    newtail->next = nullptr;
    tail->back = nullptr;
    delete tail;

    return head;
}

void print(Node* head){
    while(head != NULL){
        cout<< head->data << " ";
        head = head->next; 
    }
}

// delete the kth elements in the linkedlist-->

Node* KthElementdel(Node* head,int k){
    if(k = 1 || head == NULL){
        return NULL;
    }

    int cnt = 0;

    Node* temp = head;

    while(cnt != k){
        temp = temp->next;
        cnt++;
    }
    
    temp->next = temp->back;
    
}

int main(){

    vector<int> arr = {12,13,4,6};
    Node* head = convertArr2DLL(arr);

    head = deletetail(head);
    print(head);

    return 0;
}