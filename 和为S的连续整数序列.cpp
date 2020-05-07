/*
*题意：小明很喜欢数学,有一天他在做数学作业时,要求计算出9~16的和,
他马上就写出了正确答案是100。但是他并不满足于此,他
在想究竟有多少种连续的正数序列的和为100(至少包括两个数)。
没多久,他就得到另一组连续正数和为100的序列:18,19,20,21,22。
现在把问题交给你,你能不能也很快的找出所有和为S的连续正数序列? Good Luck!
*/

/**
思路：滑动窗口，middle处停止
*/

#include<iostream>
using namespace std;

class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        //设置两个数small和big，一开始初始化为small=1，big=2；
        vector<vector<int>> res;
        if(sum<3)
            return res;
        int small=1;
        int big=2;
        int middle=(1+sum)/2;//走到middle就截止了，再往后走相加都大于sum了
        int cursum=small+big;
        while(small<middle)//这个判断条件是，举个例子可以看一下
        {
            if(cursum<sum)
            {
                big++;
                cursum+=big;
            }
            else if(cursum>sum)
            {
                cursum-=small;
                small++;
            }
            else
            {
                vector<int> temp;
                for(int i=small;i<=big;i++)
                {
                    temp.push_back(i);
                }
                res.push_back(temp);
                //就需要增加一个如果说相等了怎么办，后面还得走。
                big++;
                cursum+=big;
            }
        }
        return res;
    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
