#include<bits/stdc++.h>
using namespace std;

void subsequences(vector<int>v,int k,int i,int n,vector<int>&res,int sum){
    if(i>=n || sum ==k){
            if(sum == k){
                for(auto it:res) cout<<it<<" ";
                cout<<endl;
            }

        return;
    }

    res.push_back(v[i]);
    sum +=v[i];
    subsequences(v,k,i+1,n,res,sum);
    sum -=v[i];
    res.pop_back();
    subsequences(v,k,i+1,n,res,sum);
}
int main(){
    vector<int> v ={1,2,3,4,5,6,7};
    int k =8;
    vector<int>res;
    subsequences(v,k,0,7,res,0);
}
