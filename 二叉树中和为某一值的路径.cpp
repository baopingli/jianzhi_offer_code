/*
*���⣺����һ�Ŷ������ĸ��ڵ��һ��������
��ӡ���������н��ֵ�ĺ�Ϊ��������������·����
·������Ϊ�����ĸ���㿪ʼ����һֱ��Ҷ����������Ľ���γ�һ��·����
(ע��: �ڷ���ֵ��list�У����鳤�ȴ�����鿿ǰ)
*/

/**
˼·�����ﶨ����·�������ǴӸ���㵽Ҷ�ӽڵ����Եݹ��ж�������DFS
����������������Ļ��ͻ��ݡ�
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
        //���ö�res����
        return res;
    }
    void helper(TreeNode* root,int expectNumber,int currentsum)
    {
        //������Ҷ�ӽڵ�ͬʱ��Ҫ����·��֮�͵���currentsum�����Ҫ�������ӽڵ�
        temp.push_back(root->val);
        currentsum+=root->val;
        //�����Ǹ��ڵ�
        if(currentsum==expectNumber&&root->left==nullptr&&root->right==nullptr)
        {
            res.push_back(temp);
        }
        if(root->left!=nullptr)
            helper(root->left,expectNumber,currentsum);
        if(root->right!=nullptr)
            helper(root->right,expectNumber,currentsum);
        temp.pop_back();//˵��Ҷ�ӽڵ㲻����������
    }
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
