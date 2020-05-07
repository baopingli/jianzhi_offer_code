/*
*题意：输入两棵二叉树A，B，
判断B是不是A的子结构。（ps：我们约定空树不是任意一个树的子结构）
*/

/**
思路：递归判断树上的左右两个结点是不是相等，双层递归，因为你不知道
从主树的那个结点开始能够匹配到。
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
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        //判断一棵树是不是子结构
        //首先判断根节点
        //书上的题是double而这里的题是int，所以没有必要写一个equal函数
        bool res=false;
        if(pRoot1!=nullptr&&pRoot2!=nullptr)
        {
            //先判断根节点然后判断左右两个子节点。
            res= DoseTree1hasTree2(pRoot1,pRoot2)||DoseTree1hasTree2(pRoot1->left,pRoot2)
                ||DoseTree1hasTree2(pRoot1->right,pRoot2);


        }
        return res;

    }
    bool DoseTree1hasTree2(TreeNode* pRoot1,TreeNode* pRoot2)
    {
        //停止条件,首先要判断是不是子结构空了，因为有可能子结构和树一起空
        if(pRoot2==nullptr)
            return true;
        if(pRoot1==nullptr)
            return false;

        if(pRoot1->val!=pRoot2->val)
            return false;
        return DoseTree1hasTree2(pRoot1->left,pRoot2->left)&&DoseTree1hasTree2(pRoot1->right,pRoot2->right);

    }
};



int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
