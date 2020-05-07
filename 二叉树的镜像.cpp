/*
*题意：操作给定的二叉树，将其变换为源二叉树的镜像。
*/

/**
思路：递归交换左右结点。
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
public:
    void Mirror(TreeNode *pRoot) {
        //转换为原二叉树的镜像
        //也就是左右子节点互换
        if(pRoot==nullptr)
            return;
        if(pRoot->left==nullptr&&pRoot->right==nullptr)//根节点的时候返回
            return;
            //就是左右交换
        TreeNode *x=pRoot->left;
        pRoot->left=pRoot->right;
        pRoot->right=x;
        if(pRoot->left)
            Mirror(pRoot->left);//我为什么要加上return呢？，一般应该是不用加return的
        if(pRoot->right)
            Mirror(pRoot->right);
    }
};



int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
