#include<iostream>
#include<vector>
using namespace std;

void rowAndMaximumOnes(vector<vector<int>>& mat, int n){
    vector<int>ans;
    int oneCount=INT16_MIN;
    int rowNo=-1;
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<mat[i].size(); j++){
            if(mat[i][j]==1){
                count++;
            }
        }
        if(count>oneCount){
            oneCount=count;
            rowNo=i;
        }
    }
    ans.push_back(rowNo);
    ans.push_back(oneCount);
    // return ans;
    for(auto it:ans){
        cout<<it<<" ";
    }
}

int main(){
    vector<vector<int>>mat={
        {1,0,0,0},{0,1,1,0},{0,1,1,0},{1,1,1,0},{0,0,1,0}
    };
    int n=mat.size();
    rowAndMaximumOnes(mat, n);
    return 0;
}