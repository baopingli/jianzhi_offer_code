/*
*���⣺���1~13��������1���ֵĴ���,
�����100~1300��������1���ֵĴ�����
Ϊ�����ر�����һ��1~13�а���1��������1��10��11��12��13
��˹�����6��,���Ƕ��ں�����������û���ˡ�ACMerϣ�����ǰ����,
������������ձ黯,���Ժܿ���������Ǹ�����������1���ֵĴ�����
��1 �� n ��1���ֵĴ�������
*/

/**
˼·�������򵥵ķ�������ֱ��ͳ����������1λ�ĸ���
*/

#include<iostream>
using namespace std;
class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        //����ѧ���ɷ�
        if(n<=0) return 0;
        int count=0;
        for(int i=1;i<=n;i*=10)
        {
            //�����ڵ�iλ���ܹ��ж��ٸ�1
            count=count+(n/(10*i))*i;
            int mod=n%(10*i);
            if(mod>2*i-1) count+=i;
            else{
                if(mod>=i)
                    count+=(mod-i)+1;
            }
        }
        return count;
    }
};
class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        int res=0;
        for(int i=0;i<n;i++)
        {
            res+=getnumberof1(i);
        }
        return res;
    }
    int getnumberof1(int n)
    {
        int count=0;
        while(n>0)
        {
            if(n%10==1)
            {
                count++;
            }
            n=n/10;
        }
    }
};







int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
