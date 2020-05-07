/*
*题意：定义栈的数据结构，请在该类型中实现一个能够得到栈中所含最小元素的min函数
（时间复杂度应为O（1））。注意：保证测试中不会当栈为空的时候，
对栈调用pop()或者min()或者top()方法。
*/

/**
思路：增加一个辅助的栈，压入元素的同时判断并将当时的最小值压进去。
*/

#include<iostream>
using namespace std;


class Solution {
public:
    int minvalue=INT_MAX;
    stack<int> s1;
    stack<int> s2;
    //思路是增加一个辅助栈，压入一个元素的时候同时此时的最小元素押入到辅助栈种，所以需要一个变量
    void push(int value) {
        s1.push(value);
        if(minvalue<value)
        {
            s2.push(minvalue);
        }
        else
        {
            s2.push(value);
            minvalue=value;
        }

    }
    void pop() {
        s1.pop();
        s2.pop();
    }
    int top() {
        return s1.top();
    }
    int min() {
        return s2.top();
    }
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
