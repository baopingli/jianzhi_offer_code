/*
*题意：输入一棵二叉树，求该树的深度。从根结点到叶结点依次经过的结点
（含根、叶结点）形成树的一条路径，最长路径的长度为树的深度。
*/

/**
思路：返回二叉树的深度
*/

#include<iostream>
using namespace std;

class Solution{

int TreeDepth(TreeNode* pRoot)
{
    if(pRoot==nullptr)
        return 0;
    int left=TreeDepth(pRoot->left);
    int right=TreeDepth(pRoot->right);
    if(left<=right)
        return right+1;
    if(right<left)
        return left+1;


}


};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
