#include<iostream>
using namespace std;

void trippletSum(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int sum=0;
            for(int k=0; k<n; k++){
                sum=arr[i]+arr[j]+arr[k];
                cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")="<<sum<<endl;
            }
        }
    }
}

int main(){
    int arr[]={10,20,30,40};
    int n=4;
    trippletSum(arr, n);
    return 0;
}