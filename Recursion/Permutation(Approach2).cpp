#include<bits/stdc++.h>
using namespace std;

void printPermutations(int index, int n, vector<int>&v)
{
    if(index == n){
        for(auto it:v) cout<<it<<" ";
        cout<<endl;
        return;
    }

    for(int i = index;i<n;i++){
        swap(v[i],v[index]);
        printPermutations(index+1,n,v);
        swap(v[i],v[index]);
    }
}
int main()
{
    vector<int>  v= {1,2,3};
    int n = v.size();
    printPermutations(0,n,v);
    return 0;
}
