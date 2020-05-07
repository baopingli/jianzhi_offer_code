/*
*题意：地上有一个m行和n列的方格。一个机器人从坐标0,0的格子开始移动，
每一次只能向左，右，上，下四个方向移动一格，
但是不能进入行坐标和列坐标的数位之和大于k的格子。
例如，当k为18时，机器人能够进入方格（35,37），
因为3+5+3+7 = 18。但是，它不能进入方格（35,38），
因为3+5+3+8 = 19。请问该机器人能够达到多少个格子？
*/

/**
思路：遍历矩阵中的所有的点。
*/

#include<iostream>
using namespace std;

class Solution {
public:
    int movingCount(int threshold, int rows, int cols)
    {
        if(threshold<0||rows<0||cols<0)
            return false;
        bool* visited=new bool[rows*cols];
        memset(visited,0,rows*cols);
        int len=0;
        maxpath(0,0,rows,cols,visited,len,threshold);
        return len;
    }
    void maxpath(int row,int col,int rows, int cols,bool*& visited,int &len,int threshold)
    {
        if(row>=0&&row<rows&&col>=0&&col<cols&&(getdigit(row)+getdigit(col)<=threshold)&&visited[row*cols+col]==false)
        {
            len++;
            visited[row*cols+col]=true;
            maxpath(row+1,col,rows,cols,visited,len,threshold);
            maxpath(row-1,col,rows,cols,visited,len,threshold);
            maxpath(row,col+1,rows,cols,visited,len,threshold);
            maxpath(row,col-1,rows,cols,visited,len,threshold);
        }
    }
    int getdigit(int x)
    {
        int r=0;
        while(x>0)
        {
            r+=x%10;
            x/=10;
        }
        return r;
    }
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
