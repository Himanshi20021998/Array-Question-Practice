#include<iostream>
using namespace std;

void printSum(int arr[], int n){
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            sum=arr[i]+arr[j];
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<"="<<sum<<endl;
        }
    }
}

int main(){
    int arr[]={10,20,30,40};
    int n=3;
    printSum(arr, n);
    return 0;
}