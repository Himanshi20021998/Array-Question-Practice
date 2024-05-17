#include<iostream>
#include<vector>
using namespace std;

void colorSorting(vector<int>& nums, int n){
    // int n=nums.size();
    int index=0;
    int left=0;
    int right=n-1;
    while(index<=right){
        if(nums[index]==0){
            swap(nums[index], nums[left]);
            left++;
            index++;
        }
        else if(nums[index]==2){
            swap(nums[index], nums[right]);
            right--;
            // No need of index++
            // index++ --> important point, there is high chance of mistake here
        }
        else{
            index++;
        }
    }
}

int main(){
    vector<int>nums={1,0,2,2,1,0,1,2};
    int n=nums.size();
    colorSorting(nums, n);

    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}