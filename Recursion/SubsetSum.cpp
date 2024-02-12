#include<bits/stdc++.h>
using namespace std;
void printSubsetSum(int start, int n, vector<int>v, vector<int>&res){
    if(start == n){
        int sum = 0;
        for(auto it:res)
            sum+=it;
        cout<<sum<<" ";
        return;
    }
    res.push_back(v[start]);
    printSubsetSum(start+1,n,v,res);
    res.pop_back();
    printSubsetSum(start+1,n,v,res);
}
int main()
{

    vector<int>v = {2,3};
    int n = v.size();
    vector<int>res= {};
    printSubsetSum(0,n,v,res);
    return 0;
}
