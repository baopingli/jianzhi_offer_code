



/*
*���⣺һֻ����һ�ο�������1��̨�ף�
Ҳ��������2��������Ҳ��������n����
�����������һ��n����̨���ܹ��ж�����������
*/

/**
˼·���ҵ�����
*/

#include<iostream>
using namespace std;
class Solution {
public:
    int jumpFloorII(int number) {
        //�����������n��
        //��̬�滮
        /*
        return pow(2,number-1);
        */
        //̰���㷨����Ҫ�˽�һ��̰���㷨��˼·
        vector<int> tmp={0,1,2};
        //���û�������ռ�Ļ�����ֱ��ʹ��tmp[x]������û�а취��ֵ�ģ�����Ҳһ�������������ռ����
        for(int i=3;i<=number;i++)
        {
            int x=0;
            for(int j=i-1;j>=1;j--)
            {
                x+=tmp[j];
            }
            x++;//��n��̨�׷���
            tmp.push_back(x);
        }
        return tmp[number];



    }
};




int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
