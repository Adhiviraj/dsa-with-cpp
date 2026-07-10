#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
// constructor 
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
    void InsertAtHead(Node* &head,int d){
        // create new node --
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp; 
    }

    void InsertAtTail(Node* &tail, int d){
        //  new node creation
        Node* temp = new Node(d);
        tail -> next = temp;
        tail = tail ->next;
    }

    void InsertAtPosition(Node* &tail, Node* &Head, int position, int d){
        Node* temp = Head;
        int cnt = 1;
        // Inserting at starting of linkedlist--
        if(position == 1){
            InsertAtHead(Head,d);
            return;
        }

        while(cnt < position - 1){
            temp = temp->next;
            cnt++;
        }

        // inserting at last ---
        if(temp -> next == NULL){
            InsertAtTail(tail,d);
            return;
        }


        // Creating a node for d
        Node* nodeToInsert = new Node(d);
        nodeToInsert -> next = temp -> next;

        temp -> next = nodeToInsert;
    }

    void print(Node* &head){
        Node* temp = head;

        while(temp != NULL){
            cout << temp -> data<< " ";
            temp = temp -> next;
        }
        cout << endl;
    }



int main(){
    // New node creation
    Node* node1 = new Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    // head pointed to Node1
    Node* head = node1;
    Node* Tail = node1;

    InsertAtHead(head, 11);
    InsertAtTail(Tail, 12);

    InsertAtPosition(Tail,head,3,22);

    cout<< "Head - " << head -> data << endl;
    cout<< "Tail - " << Tail     -> data << endl;

    print(head);
}