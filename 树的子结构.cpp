/*
*���⣺�������ö�����A��B��
�ж�B�ǲ���A���ӽṹ����ps������Լ��������������һ�������ӽṹ��
*/

/**
˼·���ݹ��ж����ϵ�������������ǲ�����ȣ�˫��ݹ飬��Ϊ�㲻֪��
���������Ǹ���㿪ʼ�ܹ�ƥ�䵽��
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
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        //�ж�һ�����ǲ����ӽṹ
        //�����жϸ��ڵ�
        //���ϵ�����double�����������int������û�б�Ҫдһ��equal����
        bool res=false;
        if(pRoot1!=nullptr&&pRoot2!=nullptr)
        {
            //���жϸ��ڵ�Ȼ���ж����������ӽڵ㡣
            res= DoseTree1hasTree2(pRoot1,pRoot2)||DoseTree1hasTree2(pRoot1->left,pRoot2)
                ||DoseTree1hasTree2(pRoot1->right,pRoot2);


        }
        return res;

    }
    bool DoseTree1hasTree2(TreeNode* pRoot1,TreeNode* pRoot2)
    {
        //ֹͣ����,����Ҫ�ж��ǲ����ӽṹ���ˣ���Ϊ�п����ӽṹ����һ���
        if(pRoot2==nullptr)
            return true;
        if(pRoot1==nullptr)
            return false;

        if(pRoot1->val!=pRoot2->val)
            return false;
        return DoseTree1hasTree2(pRoot1->left,pRoot2->left)&&DoseTree1hasTree2(pRoot1->right,pRoot2->right);

    }
};



int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
