/*
*题意：输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。
要求不能创建任何新的结点，只能调整树中结点指针的指向。
*/

/**
思路：输入一个二叉搜索树，将左节点指向父节点右结点指向左节点，
所以需要有一个辅助的结点来保存父节点，
思路首先是中序遍历，然后在递归的时候将左节点指向父结点，将
父节点指向
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
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        //不需要辅助空间的
        TreeNode* plast=nullptr;
        convertnode(pRootOfTree,&plast);
        TreeNode* phead=plast;
        while(phead!=nullptr&&phead->left!=nullptr)
            phead=phead->left; //返回到头结点，一开始
        return phead;
    }
    void convertnode(TreeNode* pnode,TreeNode** plast)
    {
        if(pnode==nullptr)
            return;
        TreeNode* pc=pnode;

        if(pc->left!=nullptr)
            convertnode(pc->left,plast);

        pc->left=*plast;//左结点指向根节点
        if(*plast!=nullptr)//根节点指向右节点
            (*plast)->right=pc;
        *plast=pc;//然后根结点变成当前的父节点。

        if(pc->right!=nullptr)
            convertnode(pc->right,plast);
        //这种树的递归的问题一定要判断子节点是不是为空才行。
    }
};



int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
