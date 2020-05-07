/*
*题意：给定一个数组和滑动窗口的大小，找出所有滑动窗口里数值的最大值。
例如，如果输入数组{2,3,4,2,6,2,5,1}及滑动窗口的大小3，那么一共存在6个滑动窗口，
他们的最大值分别为{4,4,6,6,6,5}； 针对数组{2,3,4,2,6,2,5,1}的滑动窗口有以下6个： {[2,3,4],2,6,2,5,1}， {2,[3,4,2],6,2,5,1}， {2,3,[4,2,6],2,5,1}，
 {2,3,4,[2,6,2],5,1}， {2,3,4,2,[6,2,5],1}， {2,3,4,2,6,[2,5,1]}。
*/

/**
思路：双端队列，首先先走一个队列的长度然后，如果队列中没有值往里面加
当新加入值的时候，如果这个值比队尾的大那么就循环弹出队尾然后直到不是最大
如果小于队尾的话就插入。
*/

#include<iostream>
#include<vector>
#include<deque>
using namespace std;

class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
        vector<int> res;

        if(num.size()>=size&&size>=1)
        {
            deque<int> index;
            for(int i=0;i<size;i++)
            {
                while(!index.empty()&&num[i]>=num[index.back()])
                    index.pop_back();
                index.push_back(i);
            }
            for(int i=size;i<num.size();i++)
            {
                res.push_back(num[index.front()]);
                while(!index.empty()&&num[i]>=num[index.back()])
                    index.pop_back();
                if(!index.empty()&&index.front()<=(int)(i-size))
                    index.pop_front();
                index.push_back(i);
            }
             res.push_back(num[index.front()]);
        }

        return res;
    }
};

int  main()
{
     const vector<int> x={2,3,4,2,6,2,5,1};
    Solution s;
    vector<int> res;
    res=s.maxInWindows(x,x.size());
    cout<<res[0]<<endl;

    cout<<"hello"<<endl;
    return 0;
}
