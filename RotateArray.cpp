#include<iostream>
#include<vector>
using namespace std;

void rotateArray(vector<int>& nums, int n, int k){
    vector<int> ans(n);
    for(int index=0; index<n; index++){
        int newIndex=(index+k)%n;
        ans[newIndex]=nums[index];
    }
    nums=ans;
}

int main(){
    vector<int>nums={1,2,3,4,5,6,7};
    int n=nums.size();
    rotateArray(nums, n, 3);

    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}