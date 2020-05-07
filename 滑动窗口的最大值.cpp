/*
*���⣺����һ������ͻ������ڵĴ�С���ҳ����л�����������ֵ�����ֵ��
���磬�����������{2,3,4,2,6,2,5,1}���������ڵĴ�С3����ôһ������6���������ڣ�
���ǵ����ֵ�ֱ�Ϊ{4,4,6,6,6,5}�� �������{2,3,4,2,6,2,5,1}�Ļ�������������6���� {[2,3,4],2,6,2,5,1}�� {2,[3,4,2],6,2,5,1}�� {2,3,[4,2,6],2,5,1}��
 {2,3,4,[2,6,2],5,1}�� {2,3,4,2,[6,2,5],1}�� {2,3,4,2,6,[2,5,1]}��
*/

/**
˼·��˫�˶��У���������һ�����еĳ���Ȼ�����������û��ֵ�������
���¼���ֵ��ʱ��������ֵ�ȶ�β�Ĵ���ô��ѭ��������βȻ��ֱ���������
���С�ڶ�β�Ļ��Ͳ��롣
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
