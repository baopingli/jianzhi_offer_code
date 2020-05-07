/*
*题意：求出1~13的整数中1出现的次数,
并算出100~1300的整数中1出现的次数？
为此他特别数了一下1~13中包含1的数字有1、10、11、12、13
因此共出现6次,但是对于后面问题他就没辙了。ACMer希望你们帮帮他,
并把问题更加普遍化,可以很快的求出任意非负整数区间中1出现的次数（
从1 到 n 中1出现的次数）。
*/

/**
思路：这道题简单的方法就是直接统计所有数的1位的个数
*/

#include<iostream>
using namespace std;
class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        //用数学归纳法
        if(n<=0) return 0;
        int count=0;
        for(int i=1;i<=n;i*=10)
        {
            //计算在第i位上总共有多少个1
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
