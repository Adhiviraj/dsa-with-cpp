#include<iostream>
#include <vector>
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

Node* removeHead(Node* head){
    if(head == NULL) return head;

    Node * temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* removeTail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    while(head->next->next != NULL){
        head = head->next;
    }
    Node * temp = head->next;
    head->next = NULL;
    delete temp;
    return head;
}

Node* DelkthElement(Node* head,int k){
    if(head == NULL) return head;

    if(k == 1){
        Node* temp = head;
        head = head -> next;
        delete temp;
        return head;
    }

    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;

    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
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

    // Node y = Node(arr[0], nullptr); this will work as class--
    // use y.data too access the elements--
    Node* y = new Node(arr[0], nullptr);
    Node* head = convertArr2LL(arr);
    // cout << y -> data;
    print(head);
    cout << endl;
    // head = removeHead(head);
    // Node * tail = removeTail(head);
    DelkthElement(head,3);
    print(head);
    
}