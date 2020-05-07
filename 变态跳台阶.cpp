



/*
*题意：一只青蛙一次可以跳上1级台阶，
也可以跳上2级……它也可以跳上n级。
求该青蛙跳上一个n级的台阶总共有多少种跳法。
*/

/**
思路：找到方程
*/

#include<iostream>
using namespace std;
class Solution {
public:
    int jumpFloorII(int number) {
        //如果可以跳上n级
        //动态规划
        /*
        return pow(2,number-1);
        */
        //贪心算法？需要了解一下贪心算法的思路
        vector<int> tmp={0,1,2};
        //如果没有声明空间的话不能直接使用tmp[x]这样是没有办法赋值的，数组也一样，得先声明空间才行
        for(int i=3;i<=number;i++)
        {
            int x=0;
            for(int j=i-1;j>=1;j--)
            {
                x+=tmp[j];
            }
            x++;//上n个台阶方法
            tmp.push_back(x);
        }
        return tmp[number];



    }
};




int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
