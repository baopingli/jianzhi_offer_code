/*
*题意：输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。
如果是则输出Yes,否则输出No。假设输入的数组的任意两个数字都互不相同。
*/

/**
思路：判断是不是后序遍历的话，就是先找到根节点然后
比较后面是不是有比根结点小的。
*/

#include<iostream>
using namespace std;


class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        //后序遍历是左右根
        //递归都是一个子过程，所以说需要先把子过程写出来
        if(sequence.size()<=0)
            return false;
        return helper(sequence,0,sequence.size()-1);


    }

    bool helper(vector<int>& sequence, int left,int right)
    {

        //然后就是找到最后的节点
        if(left>=right)
        {
            return true;
        }
        int root=sequence[right];
        int i=left;
        for(;i<right;i++)
        {
            if(sequence[i]>root)
                break;
        }
        int j=i;
        for(;j<right;j++)
        {
            if(sequence[j]<root)
                return false;
        }
        //当前左子树没问题，需要判断里面
        /*
        bool rl=true;
        rl=helper(sequence,left,i-1);
        bool rr=true;
        rr=helper(sequence,i,right-1);
        return (rl&&rr);
        */
        return helper(sequence,left,i-1)&&helper(sequence,i,right-1);
    }
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
