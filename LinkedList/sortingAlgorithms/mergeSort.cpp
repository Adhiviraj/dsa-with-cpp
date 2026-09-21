#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node(){
        int value = this->data;

        // free the next node recursively
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }

};

void InsertAtTail(Node*& tail,int n){
    Node* temp = new Node(n);

    tail->next = temp;

    tail = tail->next;
}

Node* Merge2Sort(Node* left, Node* right){
    int val = 0;
    if(left->data <= right->data){
        val = left->data;
        left = left->next;
    }else{
        val = right->data;
        right = right->next;
    }
    Node* temp = new Node(val);
    Node* head = temp;
    while(left != NULL && right != NULL){
        val = 0;
        if(left->data <= right->data){
            val = left->data;
            left = left->next;
        }else{
            val = right->data;
            right = right->next;
        }
        Node* temp1 = new Node(val);
        temp->next = temp1;
        temp = temp->next;
    }

    if(left != NULL){
        temp->next = left;
    }else if(right != NULL){
        temp->next = right;
    }

    return head;
}

Node* middle(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }

    int mid = cnt/2;
    cnt = 0;
    while(head != NULL){
        cnt++;
        if(cnt == mid){
            return head;
        }
        head = head->next;
    }
}

Node* ListSorting(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* MiddleNode = middle(head);

    Node* LeftNode = head;
    Node* RightNode = MiddleNode->next;
    MiddleNode->next = NULL;
    LeftNode = ListSorting(LeftNode);
    RightNode = ListSorting(RightNode);

    return Merge2Sort(LeftNode,RightNode);
}



int main(){

    int firstElement;
    cout<<"Enter the FirstElementVal of List :- "<< endl;
    cin>>firstElement;

    int SizeOfTheList ;
    cout << "Enter the size of List - "<<endl;
    cin >> SizeOfTheList;


    Node* n1 = new Node(firstElement);

    Node* tail = n1;

    for(int i = 1; i < SizeOfTheList; i++){
        int n;
        cout << "Enter the value of next Node - " << endl;
        cin >> n;
        InsertAtTail(tail,n);
    }

    Node* head = ListSorting(n1);

    while(head != NULL){
        cout << "Node value is - " << head->data << endl;
        head = head->next;
    }
}