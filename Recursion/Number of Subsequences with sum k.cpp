#include<bits/stdc++.h>
using namespace std;

int subsequences(vector<int>v,int k,int i,int n,vector<int>&res,int sum){
    if(i>=n || sum ==k){
            if(sum == k){
                return 1;
            }

        return 0;
    }

    res.push_back(v[i]);
    sum +=v[i];
    int l = subsequences(v,k,i+1,n,res,sum);
    sum -=v[i];
    res.pop_back();
    int r = subsequences(v,k,i+1,n,res,sum);
    return l+r;
}
int main(){
    vector<int> v ={1,2,3,4,5,6,7};
    int k =8;
    vector<int>res;
    int val = subsequences(v,k,0,7,res,0);
    cout<<val;
}
