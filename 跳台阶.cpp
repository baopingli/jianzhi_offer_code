



/*
*题意：一只青蛙一次可以跳上1级台阶，
也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法
（先后次序不同算不同的结果）。
*/

/**
思路：搞清楚第一次1，第二次2，
*/

#include<iostream>
using namespace std;

class Solution {
public:
    int jumpFloor(int number) {
        //跳台阶问题应该是递归吧
        //跳台阶问题和斐波那契问题其实是一致的，主要是你的思路怎么将这个问题
        //转换为斐波那契问题。
        //1-1
        //2-2
        //3的话 如果第一次体跳一个 那么剩下 n-1 那么这里面有多少跳法 ，就是f(n-1)种
        //如果第一次跳两个，那么剩下n-2 那么这里面有多少跳法，就是f(n-2)
        if(number==1)
            return 1;
        if(number==2)
            return 2;
        return jumpFloor(number-1)+jumpFloor(number-2);
    }
};



int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
