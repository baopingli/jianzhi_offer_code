/*
*题意：输入一个整数数组，实现一个函数来调整该数组中数字的顺序，
使得所有的奇数位于数组的前半部分，
所有的偶数位于数组的后半部分，
并保证奇数和奇数，偶数和偶数之间的相对位置不变。
*/

/**
思路：所有的奇数位于数组的前半部分，偶数位于后半部分
这个使用的是类似于冒泡的方式。
从最后边开始往上走如果前面的是偶数后面的是奇数那么交换，这样能
够保证前面的一个一个的变成奇数。
*/

#include<iostream>
using namespace std;

class Solution {
public:
    void reOrderArray(vector<int> &array) {
        //讲奇数放在数组的前半部分，偶数放在数组的后半部分，相对位置不变
        int flag=0;
        for(int i=0;i<array.size()&&flag==0;i++)
        {
            flag=1;//类似于冒泡排序，两两交换然后，可以通过增加一个flag来实现优化
            for(int j=array.size()-1;j>i;j--)
            {

                if(array[j-1]%2==0&&array[j]%2==1)
                {
                    flag=0;
                    swap(array[j],array[j-1]);
                }
            }
        }
    }
};



int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
