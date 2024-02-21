#include<bits/stdc++.h>
using namespace std;

bool isValidBoard(vector<vector<char>>&board, int row, int col,char c)
{
    for(int i=0; i<9; i++)
    {
        if(board[i][col] == c)
            return false;
        if(board[row][i] == c)
            return false;
    }

    int x0 = (row/3)*3;
    int y0 = (col/3)*3;

    for(int x=0; x<3; x++)
        for(int y=0; y<3; y++)
            if(board[x0+x][y0+y] == c) return false;
    return true;
}
bool solveSudoku(vector<vector<char>>&board)
{
    for(int i=0; i<board.size(); i++)
    {
        for(int j=0; j<board[0].size(); j++)
        {
            if(board[i][j]=='.')
            {
                for(char c='1'; c<='9'; c++)
                {
                    if(isValidBoard(board,i,j,c))
                    {
                        board[i][j] = c;
                        if(solveSudoku(board))
                            return true;
                        board[i][j]='.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}
int main()
{
    vector<vector<char>>board =
    {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    solveSudoku(board);

    for(int i=0; i<board.size(); i++)
    {
        for(int j=0; j<board[0].size(); j++)
            cout<<board[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
