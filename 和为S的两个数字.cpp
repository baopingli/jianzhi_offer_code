/*
*题意：输入一个递增排序的数组和一个数字S，
在数组中查找两个数，使得他们的和正好是S，
如果有多对数字的和等于S，输出两个数的乘积最小的。
*/

/**
思路：双指针两边走
*/

#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        //输出乘积最小的两个数，那么应该是在两边的
        //两个指针
        vector<int> res;
        if(array.size()<=0)
            return res;
        int p1=0;
        int p2=array.size()-1;
        while(p1!=p2)
        {
            if(array[p1]+array[p2]==sum)
            {
                return {array[p1],array[p2]};
            }
            else if(array[p1]+array[p2]<sum)
                p1++;
            else
                p2--;
        }
        return {};
    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
