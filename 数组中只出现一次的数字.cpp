/*
*���⣺һ�����������������������֮�⣬
���������ֶ����������Ρ���д�����ҳ�������ֻ����һ�ε����֡�
*/

/**
˼·��ʹ��������ȵõ�һ������ֵ��Ȼ��õ������Ľ���ĵ�һ��1��λ��
Ȼ������ֳ����ࡣ
*/

#include<iostream>
using namespace std;

class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        //���Ƚ���������Ԫ�ؽ��������
        int xor1=0;
        for(int i=0;i<data.size();i++)
        {
            xor1=xor1^data[i];
        }
        int index=1;//�ҵ������Ǹ�1��λ�á�
        while((xor1&index)==0)
        {
            index=index<<1;
        }
        int result1=0;
        int result2=0;
        for(int i=0;i<data.size();i++)
        {
            if((data[i]&index)==0)
            {
                result1=result1^data[i];
            }
            else
                result2=result2^data[i];
        }
        num2[0]=result1;
        num1[0]=result2;
        return;
    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
