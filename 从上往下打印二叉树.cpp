/*
*���⣺�������´�ӡ����������ÿ���ڵ㣬ͬ��ڵ�������Ҵ�ӡ��
*/

/**
˼·���������Ĳ������ʹ��һ�����У���ӡ�ý���ʱ��ͬʱ��
�ý����ӽ��ѹ��ֱ������Ϊ�ա�
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
        //���������������ÿ���ڵ�
        vector<int> res;
        if(root==nullptr)
            return res;
        //�ö�����ʵ�֣���ӡ�����е�һ���ڵ�Ȼ������ڵ���ӽڵ�ŵ�������
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* t=q.front();
            res.push_back(t->val);
            q.pop();
            if(t->left)//�ؼ��ĵط�����Ҫ�ж��Ƿ�Ϊ�գ�������жϾͻ��������ȴ���
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
