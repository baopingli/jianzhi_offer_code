/*
*题意：输入一颗二叉树的根节点和一个整数，
打印出二叉树中结点值的和为输入整数的所有路径。
路径定义为从树的根结点开始往下一直到叶结点所经过的结点形成一条路径。
(注意: 在返回值的list中，数组长度大的数组靠前)
*/

/**
思路：这里定义了路径必须是从根结点到叶子节点所以递归判断条件。DFS
如果不能满足条件的话就回溯。
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
};*/
class Solution {
    vector<vector<int>> res;
    vector<int> temp;
public:
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        if(root==nullptr)//
            return res;
        int currentsum=0;
        helper(root,expectNumber,currentsum);
        //还得对res排序
        return res;
    }
    void helper(TreeNode* root,int expectNumber,int currentsum)
    {
        //必须是叶子节点同时需要满足路径之和等于currentsum否则就要找左右子节点
        temp.push_back(root->val);
        currentsum+=root->val;
        //必须是根节点
        if(currentsum==expectNumber&&root->left==nullptr&&root->right==nullptr)
        {
            res.push_back(temp);
        }
        if(root->left!=nullptr)
            helper(root->left,expectNumber,currentsum);
        if(root->right!=nullptr)
            helper(root->right,expectNumber,currentsum);
        temp.pop_back();//说明叶子节点不能满足条件
    }
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
