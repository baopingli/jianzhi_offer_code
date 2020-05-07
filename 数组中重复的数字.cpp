/*
*题意：在一个长度为n的数组里的所有数字都在0到n-1的范围内。
数组中某些数字是重复的，但不知道有几个数字是重复的。
也不知道每个数字重复几次。
请找出数组中任意一个重复的数字。 例如，
如果输入长度为7的数组{2,3,1,0,2,5,3}，那么对应的输出是第一个重复的数字2。
*/

/**
思路：
这个方法叫做利用特性。
这个题的思路是判断位置上的值和下标是否相等
不相等的话就替换以当前位置的内容为下标的位置上的值

*/

#include<iostream>
using namespace std;

class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
        //思路就是交换，利用的是0-n-范围这个特点
        if(length<=1)
            return false;
        for(int i=0;i<length;i++)
        {//循环
            while(numbers[i]!=i)
            {
                //这个条件肯定是先被执行到的，因为
                //数组中肯定是有重复的。
                if(numbers[i]==numbers[numbers[i]])
                {
                    duplication[0]=numbers[i];
                    return true;
                }
                    int tmp=numbers[i];
                    numbers[i]=numbers[tmp];
                    numbers[tmp]=tmp;

            }
        }
        return false;
    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
