/*
*���⣺���ǿ�����2*1��С���κ��Ż�������ȥ���Ǹ���ľ��Ρ�
������n��2*1��С�������ص��ظ���һ��2*n�Ĵ���Σ��ܹ��ж����ַ�����
*/

/**
˼·�����Ҳ��쳲��������У��������ʵ��û��ʹ�����飬
��ʵ�����Ͳ���Ҫʹ�����飬��Ϊ����ǰ�������ĺ͡�
*/

#include<iostream>
using namespace std;

class Solution {
public:
    int rectCover(int number) {
        //���Ҳ��쳲���������
        //�����õݹ飬���ڴ���
        /*
        if(number==1)
            return 1;
        if(number==2)
            return 2;
        return rectCover(number-1)+rectCover(number-2);
        */
        //���Ҿ������鶼������ʵ��쳲���������
        if(number==1)
            return 1;
        if(number==2)
            return 2;
        int p1=1;
        int p2=2;
        int p3=0;
        for(int i=3;i<=number;i++)
        {
            p3=p2+p1;
            p1=p2;
            p2=p3;
        }
        return p3;
    }
};



int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
