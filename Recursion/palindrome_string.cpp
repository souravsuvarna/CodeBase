#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s,int n,int i){
    if(i>=n/2) return true;

    if(s[i]!=s[n-i-1]) return false;

    return isPalindrome(s,n,i+1);
}
int main(){
    cout<<isPalindrome("MADAM",5,0);
    return 0;
}
