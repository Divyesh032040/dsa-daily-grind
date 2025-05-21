#include<bits/stdc++.h>
using namespace std;

vector<int> max_till_i (vector<int>nums) {
    int n = nums.size();
    int max = INT_MIN;
    vector<int>ans;
    for(int i=0;i<n;i++){
        int elem = nums[i];
        if(elem >= max){
            max = elem;
            ans.push_back(elem);
        }else{
            ans.push_back(max);
        }
    }
    return ans;
}
int main(){

    vector<int>nums = {1,0,5,4,6,8};
    vector<int>ans = max_till_i(nums);
    for( int it : ans){
        cout<<it<<" ";
    }

    return 0;
}