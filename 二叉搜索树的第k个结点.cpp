/*
*���⣺����һ�ö��������������ҳ����еĵ�kС�Ľ�㡣
���磬 ��5��3��7��2��4��6��8��
  �У��������ֵ��С˳�����С����ֵΪ4��
*/

/**
˼·���������Ȼ��
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
    int count=0;
    TreeNode* tree=nullptr;
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {
        if(pRoot==nullptr||k==0)
            return nullptr;
        Inorder(pRoot,k);
        return tree;
    }
    void Inorder(TreeNode* pRoot,int& k)
    {
        if(count<k&&pRoot->left!=nullptr)
            Inorder(pRoot->left,k);
        if(++count==k)//������ֱ���˳���
        {
            tree=pRoot;
        }
        if(count<k&&pRoot->right!=nullptr)
            Inorder(pRoot->right,k);
    }



};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}



/**
��������չһ��������Ҷ����������б�k�����С���Ǹ���
*/

int FindMinOfMax(TreeNode* root,int key)
{
    int temp=0;
    TreeNode* p=root;
    if(root==nullptr)
        return temp;
    while(p!=nullptr)
    {
        if(p->val>key)
            temp=p->val;
        if(p->val>key)
            p=p->left;
        else
            p=p->right;
    }
    return temp;
}
