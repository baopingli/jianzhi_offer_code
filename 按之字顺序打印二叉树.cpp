/*
*���⣺��ʵ��һ����������֮���δ�ӡ��������
����һ�а��մ����ҵ�˳���ӡ���ڶ��㰴�մ��������˳���ӡ��
�����а��մ����ҵ�˳���ӡ���������Դ����ơ�
*/

/**
˼·������ջ��һ��currentһ��next
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
        //������ջ��ʵ��
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
