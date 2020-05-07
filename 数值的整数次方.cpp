/*
*题意：给定一个double类型的浮点数base和int类型的整数exponent。
求base的exponent次方。
保证base和exponent不同时为0
*/

/**
思路：这个要注意如果exponent是负的话，那么base不能为0
*/

#include<iostream>
using namespace std;


class Solution {
public:
    double Power(double base, int exponent) {
        //求数的多少次方
        //考虑不是正数的时候
        //要考虑全面
        //还要考虑取倒数，分母不能是0
        /*
        if(base==0.0)
            return 0.0;
        double res=1.0;
        int e=exponent>0?exponent:-exponent;
        for(int i=0;i<e;i++)
        {
            res*=base;
        }
        return exponent>0?res:1/res;
        */
        //但是这个方法效率不高，logn的复杂度怎么写
        //当exponent为偶数的时候x(n)=x(n/2)*x(n/2);
        //当exponent为奇数的时候x(n)=x(n/2)*x(n/2)*x；这是一个第推式子。
        //怎么写使用递归？
        //写一个算正数的helper()斐波那契递归
        if(base==0.0)
            return 0.0;
        int e=exponent>0?exponent:-exponent;
        double res=helper(base,e);
        return exponent>0?res:1/res;
    }
    double helper(double base,int e)
    {
        if(e==0)
            return 1;
        if(e==1)
            return base;
        double res=helper(base,e>>1);//递进去然后往外归，
        res*=res;//这个是快速幂的方法。采用递归的方式
        if(e&0x1==1)//如果是奇数
            res*=base;
        return res;

    }
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
