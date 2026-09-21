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

void InsertAtTail(Node* tail,int n){
    Node* temp = new Node(n);

    tail->next = temp;

    tail = temp;
}


void ListSorting(Node* head){
    
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

    ListSorting(n1);
    
}