/*
*题意：请实现一个函数按照之字形打印二叉树，
即第一行按照从左到右的顺序打印，第二层按照从右至左的顺序打印，
第三行按照从左到右的顺序打印，其他行以此类推。
*/

/**
思路：两个栈，一个current一个next
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
        //用两个栈来实现
        vector<vector<int>> res;
        vector<int> temp;
        if(pRoot==nullptr)
            return res;
        stack<TreeNode*> s[2];
        int current=0;
        int next=1;
        s[current].push(pRoot);
        while(!s[0].empty()||!s[1].empty())
        {
            TreeNode* t=s[current].top();
            s[current].pop();
            temp.push_back(t->val);
            if(current==0)
            {
                if(t->left)
                    s[next].push(t->left);
                if(t->right)
                    s[next].push(t->right);
            }
            else
            {
                if(t->right)
                    s[next].push(t->right);
                if(t->left)
                    s[next].push(t->left);
            }
            if(s[current].empty())
            {
                res.push_back(temp);
                temp.clear();
                current=1-current;
                next=1-next;
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
