/*
*���⣺����һ���������飬�жϸ������ǲ���ĳ�����������ĺ�������Ľ����
����������Yes,�������No���������������������������ֶ�������ͬ��
*/

/**
˼·���ж��ǲ��Ǻ�������Ļ����������ҵ����ڵ�Ȼ��
�ȽϺ����ǲ����бȸ����С�ġ�
*/

#include<iostream>
using namespace std;


class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        //������������Ҹ�
        //�ݹ鶼��һ���ӹ��̣�����˵��Ҫ�Ȱ��ӹ���д����
        if(sequence.size()<=0)
            return false;
        return helper(sequence,0,sequence.size()-1);


    }

    bool helper(vector<int>& sequence, int left,int right)
    {

        //Ȼ������ҵ����Ľڵ�
        if(left>=right)
        {
            return true;
        }
        int root=sequence[right];
        int i=left;
        for(;i<right;i++)
        {
            if(sequence[i]>root)
                break;
        }
        int j=i;
        for(;j<right;j++)
        {
            if(sequence[j]<root)
                return false;
        }
        //��ǰ������û���⣬��Ҫ�ж�����
        /*
        bool rl=true;
        rl=helper(sequence,left,i-1);
        bool rr=true;
        rr=helper(sequence,i,right-1);
        return (rl&&rr);
        */
        return helper(sequence,left,i-1)&&helper(sequence,i,right-1);
    }
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
