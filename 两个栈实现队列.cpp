/*
*题意：用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。
*/

/**
思路：两个栈，输入的时候往一个栈中压入输出的时候用另外一个栈，然后输出
输出的时候如果这个栈为空的话将输入的栈中的都压入过来。
*/

#include<iostream>
using namespace std;


class Solution
{
public:
    //如果说用两个栈来实现的话就是一个栈存，然后取得时候先从那个栈中取出来，然后放入另外一个栈中
    //然后再从另外的栈中取出来
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        int r;
        //关键点就是需要判断stack2是不是空的才行。
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
