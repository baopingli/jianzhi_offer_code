/*
*题意：给你一根长度为n的绳子，请把绳子剪成整数长的m段（
m、n都是整数，n>1并且m>1），每段绳子的长度记为k[0],k[1],...,k[m]。
请问k[0]xk[1]x...xk[m]可能的最大乘积是多少？例如，当绳子的长度是8时，
我们把它剪成长度分别为2、3、3的三段，此时得到的最大乘积是18。
*/

/**
思路：贪心策略。尽量减成长度为3的。
*/

#include<iostream>
using namespace std;

class Solution {
public:
    int cutRope(int number) {
        //贪婪算法
        //尽可能多的剪成三段然后最后剩下4的话就是2x2
        if(number<2)
            return 0;
        if(number==2)
            return 1;
        if(number==3)
            return 2;
        //先把绳子剪成3的段，然后剩下的绳子剪成2的段
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
