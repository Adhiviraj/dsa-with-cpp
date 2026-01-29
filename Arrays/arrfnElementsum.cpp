    #include<iostream>
    using namespace std;

    int arrsum(int arr[],int size){
        int sum = 0;
        for(int i=0; i<size; i++){
            sum=sum+arr[i];
        }
        return sum;
        
    }
    int main(){
        cout<<"Enter the size of array - ";
        int size;
        cin>>size;
        int arr[100];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        
        arrsum(arr,size);

        cout<<"the sum of all element of array is - "<<arrsum(arr,size);
    }