/*
*���⣺����һ�ö��������������ö���������ת����һ�������˫������
Ҫ���ܴ����κ��µĽ�㣬ֻ�ܵ������н��ָ���ָ��
*/

/**
˼·������һ������������������ڵ�ָ�򸸽ڵ��ҽ��ָ����ڵ㣬
������Ҫ��һ�������Ľ�������游�ڵ㣬
˼·���������������Ȼ���ڵݹ��ʱ����ڵ�ָ�򸸽�㣬��
���ڵ�ָ��
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
        //����Ҫ�����ռ��
        TreeNode* plast=nullptr;
        convertnode(pRootOfTree,&plast);
        TreeNode* phead=plast;
        while(phead!=nullptr&&phead->left!=nullptr)
            phead=phead->left; //���ص�ͷ��㣬һ��ʼ
        return phead;
    }
    void convertnode(TreeNode* pnode,TreeNode** plast)
    {
        if(pnode==nullptr)
            return;
        TreeNode* pc=pnode;

        if(pc->left!=nullptr)
            convertnode(pc->left,plast);

        pc->left=*plast;//����ָ����ڵ�
        if(*plast!=nullptr)//���ڵ�ָ���ҽڵ�
            (*plast)->right=pc;
        *plast=pc;//Ȼ�������ɵ�ǰ�ĸ��ڵ㡣

        if(pc->right!=nullptr)
            convertnode(pc->right,plast);
        //�������ĵݹ������һ��Ҫ�ж��ӽڵ��ǲ���Ϊ�ղ��С�
    }
};



int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
