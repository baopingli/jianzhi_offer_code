/*
*���⣺���ϵ��°����ӡ��������ͬһ����������������ÿһ�����һ�С�
*/

/**
˼·���ö���
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
        //��һ�����Ǵ�ӡ��������������
        //��Ҫ������������
        //Ҫ�ö���
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
