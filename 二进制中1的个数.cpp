/*
*题意：输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。
*/

/**
思路：这个题其实有很多种解法。
首先使用移位不使用除以2的话是节省时间的。
如果一个负数循环移位的话，会陷入死循环，因为要保证第一位是1。
*/

#include<iostream>
using namespace std;


class Solution {
public:
     int  NumberOf1_1(int n)
     {
         //让index来赖移位然后相与看这一位上是不是1.
         int index=1;
         int count=0;
         while(index)//相当于移动了int的位的大小，所以效率是不是不高
         {
             if(n&index)
                count++;
             index<<1;
         }
         return count;
     }
     int  NumberOf1_2(int n) {
         //二进制表示种1的个数
         //将数和1想与得到结果
         //如果是负数的话就选入死循环。
         /*
         int count=0;
         unsigned int flag=1;
         while(flag)
         {
             if(n&flag)
                 count++;
             flag=flag<<1;
         }
         return count;
         */
         //最节省时间的算法
         int count=0;
         while(n)//这个是一直在求n最右边的1。
         {
             count++;
             n=n&(n-1);//将最右边的1变成0.
         }
         return count;
     }
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
