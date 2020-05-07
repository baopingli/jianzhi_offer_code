/*
*题意：输入某二叉树的前序遍历和中序遍历的结果，
请重建出该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。
例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，
则重建二叉树并返回。
*/

/**
思路：前序为根左右，中序为左根右，通过前序确定根为那个，然后通过中序
遍历确定左子树和右子树，然后递归。
*/

#include<iostream>
using namespace std;
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        //根据二叉树的前序和中序遍历重建二叉树
        //假设没有重复值

        //前序是根左右，所以第一个是根，然后中序中找到根，然后左边和右边的长度就有了
        return helper(pre,0,pre.size()-1,vin,0,vin.size()-1);
    }
    TreeNode* helper(vector<int>& pre,int pL,int pR,vector<int>& vin,int vL,int vR)
    {
        //判断条件，如果左边大于右边了说明要停止了
        if(pL>pR||vL>vR)
            return nullptr;
        int i=0;
        while(i<vin.size())
        {//找到根节点
            if(vin[i]==pre[pL])
                break;
            i++;
        }
        TreeNode* node=new TreeNode(pre[pL]);//新建节点然后
        node->left=helper(pre,pL+1,pL+i-vL,vin,vL,i-1);//len=i-1-vl然后len加上pL+1
        node->right=helper(pre,pR-vR+i+1,pR,vin,i+1,vR);//这里的这些尺寸的大小要注意
        return node;//返回node
    }
};
int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
