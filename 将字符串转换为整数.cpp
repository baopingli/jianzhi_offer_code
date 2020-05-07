/*
*题意：将一个字符串转换成一个整数，
要求不能使用字符串转换整数的库函数。
数值为0或者字符串不是一个合法的数值则返回0
*/

/**
思路：判断正负、判断是否越界，是否是非法输入
*/

#include<iostream>
using namespace std;

class Solution
{
public:
    int StrToInt(string str)
    {
        const int length=str.length();
        int isNegative=1,overvalue=0;
        int digit=0,value=0;
        if(length==0)return 0;
        else
        {
            int idx=0;
            if(str[0]=='-')
            {
                isNegative=-1;
                idx=1;
            }
            else if(str[0]=='+')
            {
                idx=1;
            }
            for(;idx<length;idx++)
            {
                digit=str[i]-'0';
                //这个overvalue是将当前的value转换为正值然后
                //和阈值进行比较
                overvalue=isNegative*value-INT_MAX/10+
                (((isNegative+1)/2+digit>8)?1:0);
                //最小负数那一位就是8.
                if(digit<0||digit>9) return 0;
                else if(overvalue>0) return 0;
                value=10*value+isNegative*digit;

            }
        }
        return value;
    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
