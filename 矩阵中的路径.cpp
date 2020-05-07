/*
*题意：请设计一个函数，用来判断在一个矩阵中是否存在一条
包含某字符串所有字符的路径。路径可以从矩阵中的任意一个格子
开始，每一步可以在矩阵中向左，向右，向上，向下移动一个格子。
如果一条路径经过了矩阵中的某一个格子，则该路径不能再进入该格子
*/

/**
思路：这道题应该是dfs
*/

#include<iostream>
using namespace std;

class Solution {
public:
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
        if(matrix==nullptr)
            return false;
            int visited=new int[rows][cols];
            memset(visited,0,rows*cols);
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(ishaspath(matrix,rows,cols,str,i,j,visited,index))
                    return true;
            }
        }
        return false;
    }
};
bool ishaspath(char* matrix, int rows, int cols, char* str,int row,int col,bool* visited,int &index)
{
    if(str[index]=='\0')
        return true;
    bool haspath=false;
    if(row>=0&&row<row&&col>=0&&col<=cols&&str[index]==matrix[row*cols+col]&&visited[row*cols+col]==fasle)
    {
        index++;
        visited[row*cols+col]=true;
        haspath=ishaspath(matrix,rows,cols,str,row+1,col,visited,index)||
                ishaspath(matrix,rows,cols,str,row-1,col,visited,index)||
                ishaspath(matrix,rows,cols,str,row,col+1,visited,index)||
                ishaspath(matrix,rows,cols,str,row,col-1,visited,index);
        if(!haspath)
        {
            index--;
            visited[row*cols+col]=false;
        }
    }
    return haspath;
}
int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
