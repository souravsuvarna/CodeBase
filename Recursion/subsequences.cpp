#include<bits/stdc++.h>
using namespace std;

void subsequence(int i, int n, vector<int>v,vector<int>&ans){
    if(i>=n){
        for(auto it:ans)
            cout<<it<<" ";
        cout<<endl;
        return;
    }
    ans.push_back(v[i]);
    subsequence(i+1,n,v,ans);
    ans.pop_back();
    subsequence(i+1,n,v,ans);
}

int main(){
    vector<int> v = {1,2,3};
    vector<int>ans;
    subsequence(0,3,v,ans);
    return 0;
}
