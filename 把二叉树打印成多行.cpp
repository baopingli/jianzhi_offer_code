/*
*题意：从上到下按层打印二叉树，同一层结点从左至右输出。每一层输出一行。
*/

/**
思路：用队列
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
        vector<vector<int> > Print(TreeNode* pRoot) {
        //这一道题是打印二叉树的升级版
        //需要增加两个变量
        //要用队列
            vector<vector<int>> res;
            if(pRoot==nullptr)
                return res;
            queue<TreeNode*> q;
            q.push(pRoot);
            int toprint=1;
            int nextLevel=0;
            vector<int> temp;
            while(!q.empty())
            {
                TreeNode* t=q.front();
                if(t->left)
                {
                    q.push(t->left);
                    nextLevel++;
                }
                if(t->right)
                {
                    q.push(t->right);
                    nextLevel++;
                }
                q.pop();
                temp.push_back(t->val);
                toprint--;
                if(toprint==0)
                {
                    res.push_back(temp);
                    temp.clear();
                    toprint=nextLevel;
                    nextLevel=0;
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
