#include<iostream>
#include<vector>
using namespace std;

int missingRangeNumber(vector<int>& nums, int n){
    int sum=0;
    for(int index=0; index<n; index++){
        sum=sum+nums[index];
    }

    int totalSum=((n)*(n+1))/2;
    int ans=totalSum-sum;
    return ans;
}

int main(){
    vector<int>nums={3,0,1};
    int n=nums.size();
    int ans=missingRangeNumber(nums, n);
    cout<<ans;
    return 0;
}