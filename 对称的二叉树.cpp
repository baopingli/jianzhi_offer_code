/*
*���⣺��ʵ��һ�������������ж�һ�Ŷ������ǲ��ǶԳƵġ�
ע�⣬���һ��������ͬ�˶������ľ�����ͬ���ģ�������Ϊ�ԳƵġ�
*/

/**
˼·���ؼ�����Ҫ���������ҷֿ�Ȼ��ֱ�Ա����������ڵ�
���ұ������ҽ�㡣
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
    bool jude(TreeNode* node1,TreeNode* node2)
    {
        if(node1==NULL&&node2==NULL)
            return true;
        else if(node1==NULL||node2==NULL)
            return false;
        if(node1->val!=node2->val)
        {
            return false;
        }
        else
        {
            //�ԳƵĶ�����������
            return jude(node1->left,node2->right)&&jude(node1->right,node2->left);
        }
    }
    bool isSymmetrical(TreeNode* pRoot)
    {
        return (pRoot==NULL)||jude(pRoot->left,pRoot->right);
    }

};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
