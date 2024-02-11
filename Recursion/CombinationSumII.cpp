#include<bits/stdc++.h>
using namespace std;
void combinationSum(int start,vector<int>v, int target, vector<int>&res){
    if(target == 0){
        for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
        cout<<endl;
        return;
    }
    if(target<=0) return;

    for(int i=start;i<v.size();i++){
       if(i>start && v[i]==v[i-1] ) continue;
       res.push_back(v[i]);
       combinationSum(i+1,v,target-v[i],res);
       res.pop_back();
    }

}
int main()
{
    vector<int>v= {10,1,2,7,6,1,5};
    int target = 8;
    sort(v.begin(),v.end());
    vector<int>res;
    combinationSum(0,v,target,res);
    return 0;
}
