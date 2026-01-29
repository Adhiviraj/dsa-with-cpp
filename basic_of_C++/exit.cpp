#include <iostream>
#include <cstdlib> // for exit()
using namespace std;

int main(){
    int choice;

        cout<<"inter the choice - ";
        cin>>choice;
        
    while(1) // infinite loop
    {
        

    switch(choice){
        case 1:
                cout<<"don't break\n";
                break;
        case 2: 
                cout<<"End the program ";
                exit(0); // exit the whole program immediately

        default :
                cout<<"this is the default case";
    }
    }
    cout<<"print after the loop";
}

