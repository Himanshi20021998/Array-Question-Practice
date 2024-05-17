#include<iostream>
using namespace std;

int minNumber(int arr[][4], int row, int col){
    int minAns=arr[0][0];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]<minAns){
                minAns=arr[i][j];
            }
        }
    }
    return minAns;
}

int maxNumber(int arr[][4], int row, int col){
    int maxAns=arr[0][0];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]>maxAns){
                maxAns=arr[i][j];
            }
        }
    }
    return maxAns;
}

int main(){
    int arr[][4]={{1,2,3,4},{0,4,6,7},{4,7,22,89},{5,7,12,56}};
    int row=4;
    int col=4;
    int res1=minNumber(arr, row, col);
    cout<<"Minimum number is "<<res1<<endl;
    int res2=maxNumber(arr, row, col);
    cout<<"Maximum number is "<<res2<<endl;
    return 0;
}