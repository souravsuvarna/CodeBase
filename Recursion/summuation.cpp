#include<bits/stdc++.h>
using namespace std;

int call(int n){
    if(n<=0)
        return 0;
    return n+call(n-1);
}
int main(){

    cout<<call(5);

    return 0;
}
