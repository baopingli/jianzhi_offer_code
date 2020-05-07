/*
*题意：我们可以用2*1的小矩形横着或者竖着去覆盖更大的矩形。
请问用n个2*1的小矩形无重叠地覆盖一个2*n的大矩形，总共有多少种方法？
*/

/**
思路：这个也是斐波那契序列，但是这个实现没有使用数组，
其实本来就不需要使用数组，因为就是前两个数的和。
*/

#include<iostream>
using namespace std;

class Solution {
public:
    int rectCover(int number) {
        //这个也是斐波那契序列
        //不能用递归，超内存了
        /*
        if(number==1)
            return 1;
        if(number==2)
            return 2;
        return rectCover(number-1)+rectCover(number-2);
        */
        //那我就连数组都不用来实现斐波那契数列
        if(number==1)
            return 1;
        if(number==2)
            return 2;
        int p1=1;
        int p2=2;
        int p3=0;
        for(int i=3;i<=number;i++)
        {
            p3=p2+p1;
            p1=p2;
            p2=p3;
        }
        return p3;
    }
};



int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
