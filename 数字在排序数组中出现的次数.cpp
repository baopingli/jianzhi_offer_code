/*
*题意：统计一个数字在排序数组中出现的次数。
*/

/**
思路：这个题使用的是二分查找，找到之后往两边进行扩散
然后左右两边返回长度
*/

#include<iostream>
using namespace std;

class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        //二分查找
        int left=0;
        int right=data.size()-1;

        while(left<=right)
        {
            int mid=(left+right)/2;
            //如果中间的值等于k，那么判断这个值是不是第一个出现的
            if(k==data[mid])
            {
                    int i=mid,j=mid;
                    while(data[--i]==k){};
                    while(data[++j]==k){};
                    return j-i-1;
            }
            else if(k>data[mid])
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        return 0;
    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
