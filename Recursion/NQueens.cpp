#include<bits/stdc++.h>
using namespace std;
unordered_set<int>colSet;
unordered_set<int>posSet;
unordered_set<int>negSet;

void backTrack(int row, int n, vector<string>&board)
{
    if(row == n)
    {
        for(auto it:board) cout<<it<<" "<<endl;
        cout<<endl;
        return;
    }

    for(int col = 0; col<n; col++)
    {
        if(colSet.find(col)!=colSet.end() or
                posSet.find(row+col)!=posSet.end() or
                negSet.find(row-col)!=negSet.end()) continue;
        colSet.insert(col);
        posSet.insert(row+col);
        negSet.insert(row-col);
        board[row][col] ='Q';
        backTrack(row+1,n,board);
        colSet.erase(col);
        posSet.erase(row+col);
        negSet.erase(row-col);
        board[row][col]='.';
    }
}
int main()
{
    int n;
    cin>>n;
    vector<string>board(n,string(n,'.'));
    backTrack(0,n,board);

    return 0;
}
