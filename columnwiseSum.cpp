#include<iostream>
using namespace std;

void columnwiseSum(int arr[][3], int row, int col){
    int sum=0;
    for(int i=0; i<col; i++){
        sum=sum+arr[i][i];
    }
    cout<<sum<<endl;
}

int main(){
    int arr[][3]={{10,20,30},{10,20,20},{10,40,20}};
    int row=3;
    int col=3;
    columnwiseSum(arr, row, col);
    return 0;
}