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

Node* deleteTail(Node* head){
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
    if(head == NULL){
        return NULL;
    }

    if(k == 1){
        return deleleHead(head);
    }

    int cnt = 0;

    Node* kthNode = head;

    while(kthNode != NULL){
        cnt++;
        if(cnt == k) break;
        kthNode = kthNode->next;
    }
    Node* prev = kthNode->back;
    Node* front = kthNode->next;

    if(prev == NULL && front == NULL){
        return NULL;
    }else if(prev == NULL){
        return deleleHead(head);
    }else if(front == NULL){
        return deleteTail(head);
    }

    prev->next = front;
    front->back = prev;

    kthNode->next = nullptr;
    kthNode->back = nullptr;
    delete kthNode;
    return head;
}

int main(){

    vector<int> arr = {12,13,4,6};
    Node* head = convertArr2DLL(arr);

    head = KthElementdel(head,4);
    print(head);

    return 0;
}