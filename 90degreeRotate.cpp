#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

void reverseVector(vector<int>& arr){
    int n=arr.size();
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotate(vector<vector<int>>& matrix){
    int n=matrix.size();
    for(int i=0; i<n; i++){
        for(int j=i; j<matrix[i].size(); j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i=0; i<n; i++){
        reverseVector(matrix[i]);
    }
}

int main(){
    vector<vector<int>>matrix={
        {1,2,3},{4,5,6},{7,8,9}
    };
    rotate(matrix);
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}