/*
*���⣺����һ��double���͵ĸ�����base��int���͵�����exponent��
��base��exponent�η���
��֤base��exponent��ͬʱΪ0
*/

/**
˼·�����Ҫע�����exponent�Ǹ��Ļ�����ôbase����Ϊ0
*/

#include<iostream>
using namespace std;


class Solution {
public:
    double Power(double base, int exponent) {
        //�����Ķ��ٴη�
        //���ǲ���������ʱ��
        //Ҫ����ȫ��
        //��Ҫ����ȡ��������ĸ������0
        /*
        if(base==0.0)
            return 0.0;
        double res=1.0;
        int e=exponent>0?exponent:-exponent;
        for(int i=0;i<e;i++)
        {
            res*=base;
        }
        return exponent>0?res:1/res;
        */
        //�����������Ч�ʲ��ߣ�logn�ĸ��Ӷ���ôд
        //��exponentΪż����ʱ��x(n)=x(n/2)*x(n/2);
        //��exponentΪ������ʱ��x(n)=x(n/2)*x(n/2)*x������һ������ʽ�ӡ�
        //��ôдʹ�õݹ飿
        //дһ����������helper()쳲������ݹ�
        if(base==0.0)
            return 0.0;
        int e=exponent>0?exponent:-exponent;
        double res=helper(base,e);
        return exponent>0?res:1/res;
    }
    double helper(double base,int e)
    {
        if(e==0)
            return 1;
        if(e==1)
            return base;
        double res=helper(base,e>>1);//�ݽ�ȥȻ������飬
        res*=res;//����ǿ����ݵķ��������õݹ�ķ�ʽ
        if(e&0x1==1)//���������
            res*=base;
        return res;

    }
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
