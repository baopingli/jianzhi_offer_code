/*
*题意：输入两个整数序列，
第一个序列表示栈的压入顺序，
请判断第二个序列是否可能为该栈的弹出顺序。
假设压入栈的所有数字均不相等。例如序列1,2,3,4,5是某栈的压入顺序，
序列4,5,3,2,1是该压栈序列对应的一个弹出序列
，但4,3,5,1,2就不可能是该压栈序列的弹出序列。（注意：这两个序列的长度是相等的）
*/

/**
思路：这个题就是一个队列是压入的队列一个队列是弹出的队列
那么就是说在往压入队列压入的时候，判断压入队列的top是不是
和弹出队列的当前的元素相等，如果相等的话就将压入队列往外弹
最后看弹出的队列是不是空的？
*/

#include<iostream>
using namespace std;

class Solution {
public:
    //有的时候需要转换一下思路
    //这个就是一直往里面压，如果碰到相等的就弹出来
    //判断最后是不是空，是空的话就说明弹出顺序是对的
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        if(pushV.size()==0||popV.size()==0||pushV.size()!=popV.size())
            return false;
        stack<int> s1;
        int j=0;
        for(int i=0;i<pushV.size();i++)
        {
            s1.push(pushV[i]);
            while(!s1.empty()&&s1.top()==popV[j])
            {
                s1.pop();
                j++;
            }
        }
        return s1.empty();
    }
};



int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
