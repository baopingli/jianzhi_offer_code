/*
*题意：给定一棵二叉搜索树，请找出其中的第k小的结点。
例如， （5，3，7，2，4，6，8）
  中，按结点数值大小顺序第三小结点的值为4。
*/

/**
思路：中序遍历然后
*/

#include<iostream>
using namespace std;

/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    int count=0;
    TreeNode* tree=nullptr;
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {
        if(pRoot==nullptr||k==0)
            return nullptr;
        Inorder(pRoot,k);
        return tree;
    }
    void Inorder(TreeNode* pRoot,int& k)
    {
        if(count<k&&pRoot->left!=nullptr)
            Inorder(pRoot->left,k);
        if(++count==k)//这样会直接退出。
        {
            tree=pRoot;
        }
        if(count<k&&pRoot->right!=nullptr)
            Inorder(pRoot->right,k);
    }



};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}



/**
这里再扩展一个题就是找二叉搜索树中比k大的最小的那个数
*/

int FindMinOfMax(TreeNode* root,int key)
{
    int temp=0;
    TreeNode* p=root;
    if(root==nullptr)
        return temp;
    while(p!=nullptr)
    {
        if(p->val>key)
            temp=p->val;
        if(p->val>key)
            p=p->left;
        else
            p=p->right;
    }
    return temp;
}
