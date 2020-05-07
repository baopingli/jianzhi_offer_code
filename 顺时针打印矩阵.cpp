/*
*题意：输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字，
例如，如果输入如下4 X 4矩阵： 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
 则依次打印出数字1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10.
*/

/**
思路：定义四个变量分别代表着要打印矩阵的上下左右边界。
*/

#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        //定义四个变量
        vector<int> res;
        if(matrix.size()<=0||matrix[0].size()<=0)
            return res;
        int up=0;
        int down=matrix.size()-1;
        int left=0;
        int right=matrix[0].size()-1;
        while(true)
        {
            for(int col=left;col<=right;col++)
                res.push_back(matrix[up][col]);
            up++;
            if(up>down)
                break;
            for(int row=up;row<=down;row++)
                res.push_back(matrix[row][right]);
            right--;
            if(left>right)
                break;
            for(int col=right;col>=left;col--)
                res.push_back(matrix[down][col]);
            down--;
            if(up>down)
                break;
            for(int row=down;row>=up;row--)
                res.push_back(matrix[row][left]);
            left++;
            if(left>right)
                break;
        }
        return res;
    }
};



int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
