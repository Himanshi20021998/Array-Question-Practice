#include<iostream>
using namespace std;

void rightShiftArray(int arr[], int n){
    int temp=arr[0];
    for(int i=0; i<n; i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int n=7;
    rightShiftArray(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}