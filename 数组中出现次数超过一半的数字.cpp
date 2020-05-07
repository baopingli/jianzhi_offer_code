/*
*题意：数组中有一个数字出现的次数超过数组长度的一半，
请找出这个数字。例如输入一个长度为9的数组{1,2,3,2,2,2,5,4,2}。
由于数字2在数组中出现了5次，
超过数组长度的一半，因此输出2。如果不存在则输出0。
*/

/**
思路：简单的方法是因为有一个数字出现的次数超过了数组长度的一半
所以可以计算一个数来统计，如果相等那么++，不等那么--，最后剩下的
数就是那个次数超过一半的。
*/

#include<iostream>
using namespace std;


class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
    //另外一种方法，因为出现的次数查过数组长度的一半，所以可以说这个出现的数是比其他出现的数的和要多
        //保存一个数、和一个次数、当不同的时候次数减1，
        if(numbers.size()<=0)
            return 0;
        int res=numbers[0];
        int times=1;
        for(int i=1;i<numbers.size();i++)
        {
            if(times==0)
            {
                res=numbers[i];
                times=1;
            }
            else if(numbers[i]==res)
            {
                times++;
            }
            else
                times--;
        }
        if(!checkmorethanhalf(numbers,res))//检查一下是不是超过了一半。
             res=0;
        return res;
    }
    bool checkmorethanhalf(vector<int>& numbers,int result)
    {
        int count=0;
        for(int i=0;i<numbers.size();i++)
        {
            if(numbers[i]==result)
                count++;
        }
        if(count*2>numbers.size())
        {
            return true;
        }
        else
            return false;
    }
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
