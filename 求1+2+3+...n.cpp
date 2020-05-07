/*
*题意：求1+2+3+...+n，要求不能使用乘除法、
for、while、if、else、switch、case
等关键字及条件判断语句（A?B:C）。
*/

/**
思路：不能使用乘法
*/

#include<iostream>
using namespace std;

class Solution {
public:
    int Sum_Solution(int n) {
        //使用递归加法
        //利用短路特性来实现终止
        int sum=n;
        sum&&(sum+=Sum_Solution(n-1));//如果前面为0了，那么后面也就不会执行了
        return  sum;
    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
