/*
*���⣺����ջ�����ݽṹ�����ڸ�������ʵ��һ���ܹ��õ�ջ��������СԪ�ص�min����
��ʱ�临�Ӷ�ӦΪO��1������ע�⣺��֤�����в��ᵱջΪ�յ�ʱ��
��ջ����pop()����min()����top()������
*/

/**
˼·������һ��������ջ��ѹ��Ԫ�ص�ͬʱ�жϲ�����ʱ����Сֵѹ��ȥ��
*/

#include<iostream>
using namespace std;


class Solution {
public:
    int minvalue=INT_MAX;
    stack<int> s1;
    stack<int> s2;
    //˼·������һ������ջ��ѹ��һ��Ԫ�ص�ʱ��ͬʱ��ʱ����СԪ��Ѻ�뵽����ջ�֣�������Ҫһ������
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
