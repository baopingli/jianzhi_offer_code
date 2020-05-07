/*
*���⣺����һ������Ϊn�����ӣ�������Ӽ�����������m�Σ�
m��n����������n>1����m>1����ÿ�����ӵĳ��ȼ�Ϊk[0],k[1],...,k[m]��
����k[0]xk[1]x...xk[m]���ܵ����˻��Ƕ��٣����磬�����ӵĳ�����8ʱ��
���ǰ������ɳ��ȷֱ�Ϊ2��3��3�����Σ���ʱ�õ������˻���18��
*/

/**
˼·��̰�Ĳ��ԡ��������ɳ���Ϊ3�ġ�
*/

#include<iostream>
using namespace std;

class Solution {
public:
    int cutRope(int number) {
        //̰���㷨
        //�����ܶ�ļ�������Ȼ�����ʣ��4�Ļ�����2x2
        if(number<2)
            return 0;
        if(number==2)
            return 1;
        if(number==3)
            return 2;
        //�Ȱ����Ӽ���3�ĶΣ�Ȼ��ʣ�µ����Ӽ���2�Ķ�
        int timeof3=number/3;.
        int timeof2=0;
        if(number%3==1)
        {
            timeof3--;
        }
            timeof2=(number-timeof3*3)/2;
        return pow(3,timeof3)*pow(2,timeof2);
    }

    int cutRope_dp(int number)
    {
        if(number<2)
            return 0;
        if(number==2)
            return 1;
        if(number==3)
            return 2;
        int *products=new int[number+1];
        products[0]=0;
        products[1]=1;
        products[2]=2;
        products[3]=3;
        int max=0;
        for(int i=4;i<=number;i++)
        {
            for(int j=1;j<=i/2;j++)
            {
                int product=products[j]*products[i-j];
                if(max<product)
                {
                    max=product;
                }
            }
            products[i]=max;
        }
        max=products[length];
        delete[] products;
        return max;
    }
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
