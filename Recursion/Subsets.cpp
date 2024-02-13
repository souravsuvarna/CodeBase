#include<bits/stdc++.h>
using namespace std;

void subsets(int start, int n,vector<int>v,vector<int>&res)
{
    for(auto it:res) cout<<it<<" ";
    cout<<endl;

    for(int i=start; i<n; i++)
    {
        if(i >start && v[i] == v[i-1]) continue;
        res.push_back(v[i]);
        subsets(i+1,n,v,res);
        res.pop_back();
    }

}
int main()
{
    vector<int> v = {1,2,2};
    int size = v.size();
    vector<int>res = {};
    sort(v.begin(),v.end());
    subsets(0,size,v,res);
    return 0;
}
