/*
*���⣺��һ���ַ���ת����һ��������
Ҫ����ʹ���ַ���ת�������Ŀ⺯����
��ֵΪ0�����ַ�������һ���Ϸ�����ֵ�򷵻�0
*/

/**
˼·���ж��������ж��Ƿ�Խ�磬�Ƿ��ǷǷ�����
*/

#include<iostream>
using namespace std;

class Solution
{
public:
    int StrToInt(string str)
    {
        const int length=str.length();
        int isNegative=1,overvalue=0;
        int digit=0,value=0;
        if(length==0)return 0;
        else
        {
            int idx=0;
            if(str[0]=='-')
            {
                isNegative=-1;
                idx=1;
            }
            else if(str[0]=='+')
            {
                idx=1;
            }
            for(;idx<length;idx++)
            {
                digit=str[i]-'0';
                //���overvalue�ǽ���ǰ��valueת��Ϊ��ֵȻ��
                //����ֵ���бȽ�
                overvalue=isNegative*value-INT_MAX/10+
                (((isNegative+1)/2+digit>8)?1:0);
                //��С������һλ����8.
                if(digit<0||digit>9) return 0;
                else if(overvalue>0) return 0;
                value=10*value+isNegative*digit;

            }
        }
        return value;
    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
