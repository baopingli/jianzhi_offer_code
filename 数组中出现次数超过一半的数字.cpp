/*
*���⣺��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬
���ҳ�������֡���������һ������Ϊ9������{1,2,3,2,2,2,5,4,2}��
��������2�������г�����5�Σ�
�������鳤�ȵ�һ�룬������2����������������0��
*/

/**
˼·���򵥵ķ�������Ϊ��һ�����ֳ��ֵĴ������������鳤�ȵ�һ��
���Կ��Լ���һ������ͳ�ƣ���������ô++��������ô--�����ʣ�µ�
�������Ǹ���������һ��ġ�
*/

#include<iostream>
using namespace std;


class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
    //����һ�ַ�������Ϊ���ֵĴ���������鳤�ȵ�һ�룬���Կ���˵������ֵ����Ǳ��������ֵ����ĺ�Ҫ��
        //����һ��������һ������������ͬ��ʱ�������1��
        if(numbers.size()<=0)
            return 0;
        int res=numbers[0];
        int times=1;
        for(int i=1;i<numbers.size();i++)
        {
            if(times==0)
            {
                res=numbers[i];
                times=1;
            }
            else if(numbers[i]==res)
            {
                times++;
            }
            else
                times--;
        }
        if(!checkmorethanhalf(numbers,res))//���һ���ǲ��ǳ�����һ�롣
             res=0;
        return res;
    }
    bool checkmorethanhalf(vector<int>& numbers,int result)
    {
        int count=0;
        for(int i=0;i<numbers.size();i++)
        {
            if(numbers[i]==result)
                count++;
        }
        if(count*2>numbers.size())
        {
            return true;
        }
        else
            return false;
    }
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
