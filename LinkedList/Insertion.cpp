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

Node* insertAttail(Node* head, int val){
    if(head == NULL){
        return new Node(val,head);
    }
    
    Node* element = new Node(val);

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = element;
    temp->next->next = NULL;
    return head;
}

Node * insertbeforeValue(Node* head,int el,int val){
    if(head == NULL){
        return NULL;
    }

    if(head->data == val){
        return new Node(el,head);
    }
    Node* temp = head;
    while(temp != NULL){
        if(temp->next->data == val){
            Node * x = new Node(el,temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}


Node * insertPositoin(Node* head,int el,int k){
    if(head == NULL){
        if(k == 1){
            return new Node(el);
        }
        else{
            return head;
        }
    }
    if(k == 1){
        Node* newHead = new Node(el, head);
    }
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if( cnt == (k-1)){
            Node * x = new Node(el,temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
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
    head = insertAttail(head,15);
    head = insertPositoin(head,15,4);
    head = insertbeforeValue(head,31,100);
    print(head);
}