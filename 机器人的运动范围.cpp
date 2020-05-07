/*
*���⣺������һ��m�к�n�еķ���һ�������˴�����0,0�ĸ��ӿ�ʼ�ƶ���
ÿһ��ֻ�������ң��ϣ����ĸ������ƶ�һ��
���ǲ��ܽ�������������������λ֮�ʹ���k�ĸ��ӡ�
���磬��kΪ18ʱ���������ܹ����뷽��35,37����
��Ϊ3+5+3+7 = 18�����ǣ������ܽ��뷽��35,38����
��Ϊ3+5+3+8 = 19�����ʸû������ܹ��ﵽ���ٸ����ӣ�
*/

/**
˼·�����������е����еĵ㡣
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
