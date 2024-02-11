#include<bits/stdc++.h>
using namespace std;

void func(int start,vector<int>&nums,int target,vector<int>&v)
{
    if(start>=nums.size() || target<0) return;

    if(target == 0)
    {
        for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
        cout<<endl;
        return;
    }

    v.push_back(nums[start]);
    func(start,nums,target-nums[start],v);
    v.pop_back();
    func(start+1,nums,target,v);
}

int main()
{
    vector<int>nums = {2,3,6,7};
    int target = 7;
    vector<int>v;
    func(0,nums,target,v);
    return 0;
}
