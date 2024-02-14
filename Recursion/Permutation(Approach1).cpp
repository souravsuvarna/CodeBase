#include<bits/stdc++.h>
using namespace std;
void printPermutations(vector<int>&res, vector<int>v,vector<int>&flag)
{
    if(res.size() == v.size())
    {
        for(auto it:res) cout<<it<<" ";
        cout<<endl;
        return;
    }

    for(int i=0; i<v.size(); i++)
    {
        if(flag[i]==0)
        {
            flag[i]=1;
            res.push_back(v[i]);
            printPermutations(res,v,flag);
            flag[i]=0;
            res.pop_back();
        }
    }
}
int main()
{
    vector<int> v= {1,2,3};
    vector<int>flag(v.size(),0);
    vector<int>res= {};
    printPermutations(res,v,flag);
    return 0;
}
