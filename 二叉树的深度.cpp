/*
*���⣺����һ�ö����������������ȡ��Ӹ���㵽Ҷ������ξ����Ľ��
��������Ҷ��㣩�γ�����һ��·�����·���ĳ���Ϊ������ȡ�
*/

/**
˼·�����ض����������
*/

#include<iostream>
using namespace std;

class Solution{

int TreeDepth(TreeNode* pRoot)
{
    if(pRoot==nullptr)
        return 0;
    int left=TreeDepth(pRoot->left);
    int right=TreeDepth(pRoot->right);
    if(left<=right)
        return right+1;
    if(right<left)
        return left+1;


}


};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
