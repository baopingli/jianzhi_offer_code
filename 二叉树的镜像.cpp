/*
*���⣺���������Ķ�����������任ΪԴ�������ľ���
*/

/**
˼·���ݹ齻�����ҽ�㡣
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
    void Mirror(TreeNode *pRoot) {
        //ת��Ϊԭ�������ľ���
        //Ҳ���������ӽڵ㻥��
        if(pRoot==nullptr)
            return;
        if(pRoot->left==nullptr&&pRoot->right==nullptr)//���ڵ��ʱ�򷵻�
            return;
            //�������ҽ���
        TreeNode *x=pRoot->left;
        pRoot->left=pRoot->right;
        pRoot->right=x;
        if(pRoot->left)
            Mirror(pRoot->left);//��ΪʲôҪ����return�أ���һ��Ӧ���ǲ��ü�return��
        if(pRoot->right)
            Mirror(pRoot->right);
    }
};



int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
