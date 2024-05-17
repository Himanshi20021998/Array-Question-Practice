#include<iostream>
using namespace std;

void arrayShift(int arr[], int n){
    int temp[]={50,60};
    int m=2;
    for(int i=n-1; i>1; i++){
        arr[i]=arr[i-2];
    }
    for(int i=0; i<m; i++){
        arr[n-i-1]=temp[i];
    }
}

int main(){
    int arr[]={10,20,30,4,50,60};
    int n=6;
    arrayShift(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}