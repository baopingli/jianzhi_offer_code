/*
*���⣺С����ϲ����ѧ,��һ����������ѧ��ҵʱ,Ҫ������9~16�ĺ�,
�����Ͼ�д������ȷ����100�����������������ڴ�,��
���뾿���ж������������������еĺ�Ϊ100(���ٰ���������)��
û���,���͵õ���һ������������Ϊ100������:18,19,20,21,22��
���ڰ����⽻����,���ܲ���Ҳ�ܿ���ҳ����к�ΪS��������������? Good Luck!
*/

/**
˼·���������ڣ�middle��ֹͣ
*/

#include<iostream>
using namespace std;

class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        //����������small��big��һ��ʼ��ʼ��Ϊsmall=1��big=2��
        vector<vector<int>> res;
        if(sum<3)
            return res;
        int small=1;
        int big=2;
        int middle=(1+sum)/2;//�ߵ�middle�ͽ�ֹ�ˣ�����������Ӷ�����sum��
        int cursum=small+big;
        while(small<middle)//����ж������ǣ��ٸ����ӿ��Կ�һ��
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
                //����Ҫ����һ�����˵�������ô�죬���滹���ߡ�
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
