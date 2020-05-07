/*
*题意：从上往下打印出二叉树的每个节点，同层节点从左至右打印。
*/

/**
思路：二叉树的层序遍历使用一个队列，打印该结点的时候同时将
该结点的子结点压入直到队列为空。
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
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        //层序遍历二叉树的每个节点
        vector<int> res;
        if(root==nullptr)
            return res;
        //用队列来实现，打印队列中的一个节点然后将这个节点的子节点放到队列中
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* t=q.front();
            res.push_back(t->val);
            q.pop();
            if(t->left)//关键的地方是需要判断是否为空，如果不判断就会出现溢出等错误。
            {
                q.push(t->left);
            }
            if(t->right)
            {
                q.push(t->right);
            }
        }
        return res;
    }
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
