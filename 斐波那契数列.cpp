/*
*题意：大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n项（从0开始，第0项为0）。
n<=39
*/

/**
思路：这个没什么好说的就是一个for循环，但是不要用递归因为递归的话是
2的n次方的复杂度。
*/

#include<iostream>
using namespace std;

class Solution {
public:
    int Fibonacci(int n) {
        //这个可以用dp
        //也可以用递归
        //先用递归实现
        //用dp实现一下
        /*
        if(n==0)
            return 0;
        if(n==1||n==2)
            return 1;
        return Fibonacci(n-1)+Fibonacci(n-2);
        */
        if(n==0)
            return 0;
        if(n==1||n==2)
            return 1;
        vector<int> tmp={0,1,1};
       //dp怎么能没有数组呢
        int r=0;
        for(int i=3;i<=n;i++)
        {
            tmp.push_back(tmp[i-1]+tmp[i-2]);
        }
        return tmp.back();
    }
};



int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
