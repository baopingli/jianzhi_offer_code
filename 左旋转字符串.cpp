/*
*题意：汇编语言中有一种移位指令叫做循环左移（ROL），
现在有个简单的任务，就是用字符串模拟这个指令的运算结果。
对于一个给定的字符序列S，请你把其循环左移K位后的序列输出。
例如，字符序列S=”abcXYZdef”,
要求输出循环左移3位后的结果，即“XYZdefabc”。是不是很简单？OK，搞定它！
*/

/**
思路：三次反转
*/

#include<iostream>
using namespace std;

class Solution {
public:
    string LeftRotateString(string str, int n) {
        //循环左移，用字符串模拟这个过程
        //循环左移k位之后的结果
        //分成两个部分分别反转然后再整体反转。
        int l=str.length();
        if(l<=0)
            return "";
        n=n%l;
        reverse(str.begin(),str.begin()+n);
        reverse(str.begin()+n,str.end());
        reverse(str.begin(),str.end());
        return str;
    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
