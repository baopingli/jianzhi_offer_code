/*
*���⣺������ջ��ʵ��һ�����У���ɶ��е�Push��Pop������ �����е�Ԫ��Ϊint���͡�
*/

/**
˼·������ջ�������ʱ����һ��ջ��ѹ�������ʱ��������һ��ջ��Ȼ�����
�����ʱ��������ջΪ�յĻ��������ջ�еĶ�ѹ�������
*/

#include<iostream>
using namespace std;


class Solution
{
public:
    //���˵������ջ��ʵ�ֵĻ�����һ��ջ�棬Ȼ��ȡ��ʱ���ȴ��Ǹ�ջ��ȡ������Ȼ���������һ��ջ��
    //Ȼ���ٴ������ջ��ȡ����
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        int r;
        //�ؼ��������Ҫ�ж�stack2�ǲ��ǿյĲ��С�
        if(!stack2.empty())
        {
            r=stack2.top();
            stack2.pop();
        }
        else
        {
            while(!stack1.empty())
            {
                stack2.push(stack1.top());
                stack1.pop();
            }
            r=stack2.top();
            stack2.pop();
        }
        return r;

    }

private:
    stack<int> stack1;
    stack<int> stack2;
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
