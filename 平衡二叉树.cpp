/*
*题意：输入一棵二叉树，判断该二叉树是否是平衡二叉树。
*/

/**
思路：利用了前面的求二叉树深度的函数
*/

#include<iostream>
using namespace std;

class Solution{
public:
    bool IsBalanced_Solution(TreeNode* pRoot)
    {
        if(pRoot==nullptr)
            return true;
        if(abs(TreeDepth(pRoot->left)-TreeDepth(pRoot->right)))
            return false;
        return IsBalanced_Solution(pRoot->left)&&IsBalanced_Solution(pRoot->right)
    }



};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
