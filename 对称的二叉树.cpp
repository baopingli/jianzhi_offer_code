/*
*题意：请实现一个函数，用来判断一颗二叉树是不是对称的。
注意，如果一个二叉树同此二叉树的镜像是同样的，定义其为对称的。
*/

/**
思路：关键点是要将树的左右分开然后分别对比左边树的左节点
和右边树的右结点。
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
    bool jude(TreeNode* node1,TreeNode* node2)
    {
        if(node1==NULL&&node2==NULL)
            return true;
        else if(node1==NULL||node2==NULL)
            return false;
        if(node1->val!=node2->val)
        {
            return false;
        }
        else
        {
            //对称的二叉树，镜像
            return jude(node1->left,node2->right)&&jude(node1->right,node2->left);
        }
    }
    bool isSymmetrical(TreeNode* pRoot)
    {
        return (pRoot==NULL)||jude(pRoot->left,pRoot->right);
    }

};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
