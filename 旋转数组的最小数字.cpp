/*
*题意：把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
输入一个非递减排序的数组的一个旋转，输出旋转数组的最小元素。
例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。
NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。
*/

/**
思路：二分查找但是我一直对于二分查找有点不是非常清楚，判断中间值和左边比较。
*/

#include<iostream>
using namespace std;


class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        //数组的旋转
        //使用二分查找？
        //上来先分一个中间值
        //用递归会超内存，递归这样写没有问题，但是会超内存，所以不用递归
        /*
        if(rotateArray.size()<=0)
            return 0;
        //然后就是递归，不断地分
        return helper(rotateArray,0,rotateArray.size());
    }
    int helper(vector<int>& rotateArray,int L,int R)
    {
        int mid=(L+R)/2;
        if(L==R-1)
            return rotateArray[R];
        //判断中间元素位于前面递增的数组
        //说明反转点一定在右边
        if(rotateArray[mid]>rotateArray[L])
        {
            helper(rotateArray,mid,R);
        }
        else
        {
            helper(rotateArray,L,mid);
        }

    }
    *//*
        if(rotateArray.size()<=0)
            return 0;
        int L=0;
        int R=rotateArray.size()-1;
        while(L+1<R)
        {
            int mid=(L+R)/2;
            if(rotateArray[mid]>=rotateArray[L])
                L=mid;
            else
                R=mid;
        }
        return rotateArray[R];
        //此方法就是将递归变成了迭代的方式去求解。
        */
        if(rotateArray.size()<=0)
            return 0;
        int l=0;
        int r=rotateArray.size()-1;
        while(l!=r-1)//当左右相邻的时候停止。
        {
            int mid=(l+r)/2;
            //判断中间的值是否大于左边
            if(rotateArray[mid]>=rotateArray[l])
                l=mid;
            else
                r=mid;
        }
        return rotateArray[r];

    }
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
