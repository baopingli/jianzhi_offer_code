/*
*���⣺�����һ�������������ж���һ���������Ƿ����һ��
����ĳ�ַ��������ַ���·����·�����ԴӾ����е�����һ������
��ʼ��ÿһ�������ھ������������ң����ϣ������ƶ�һ�����ӡ�
���һ��·�������˾����е�ĳһ�����ӣ����·�������ٽ���ø���
*/

/**
˼·�������Ӧ����dfs
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
