#include<iostream>
using namespace std;

void shiftNegative(int arr[], int n){
    int j=0; // Memory block where negative number stores 
    for(int index=0; index<n; index++){
        if(arr[index]<0){
            swap(arr[index], arr[j]);
            j++;
        }
    }
}

int main(){
    int arr[]={-1,-7,12,-10,11,40,-60};
    int n=7;
    shiftNegative(arr, n);

    cout<<"Printing Array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}