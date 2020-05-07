/*
*题意：写一个函数，求两个整数之和，
要求在函数体内不得使用+、-、*、/四则运算符号。
*/

/**
思路：异或就是求和，相与左移就是进位，然后循环
*/

#include<iostream>
using namespace std;

class Solution {
public:
    int Add(int num1, int num2)
    {
        int sum,carry;
        do{
            sum=num1^num2;
            carry=(num1&num2)<<1;
            num1=sum;
            num2=carry;
        }while(num2!=0);
            return num1;
    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
