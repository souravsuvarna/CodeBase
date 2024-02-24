#include<bits/stdc++.h>
using namespace std;
bool isPalindromeSubstring(string str, int start, int end)
{
   while(start<end){
    if(str[start++] !=str[end--])
        return false;
   }
    return true;
}
void printPartition(int index,string str, vector<string>&res)
{
    if(index == str.size())
    {
        for(auto it:res)
            cout<<it<<" ";
        cout<<endl;
        return;
    }

    for(int i = index; i<str.size(); i++)
    {
        if(isPalindromeSubstring(str,index,i))
        {
            res.push_back(str.substr(index,i-index+1));
            printPartition(i+1,str,res);
            res.pop_back();
        }
    }
}
int main()
{
    string str = "aabb";

    vector<string>res;

    printPartition(0,str,res);

    return 0;
}
