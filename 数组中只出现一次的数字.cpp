/*
*题意：一个整型数组里除了两个数字之外，
其他的数字都出现了两次。请写程序找出这两个只出现一次的数字。
*/

/**
思路：使用异或，首先得到一个异或的值，然后得到和异或的结果的第一个1的位置
然后想与分成两类。
*/

#include<iostream>
using namespace std;

class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        //首先将数组所有元素进行异或处理
        int xor1=0;
        for(int i=0;i<data.size();i++)
        {
            xor1=xor1^data[i];
        }
        int index=1;//找到至少那个1的位置。
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
