#include<bits/stdc++.h>
using namespace std;

void perform_reverse(vector<int>&v,int i){
    if(i>=v.size()/2)
        return;
    swap(v[i],v[v.size()-i-1]);
    perform_reverse(v,i+1);
}
int main(){
    vector<int> v = {2,4 ,1,6,9};
    int i = 0, j =4;
    perform_reverse(v,i);
    cout<<v.size()<<endl;
    for(auto it:v)
        cout<<it<<" ";
    return 0;
}
