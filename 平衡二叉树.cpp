/*
*���⣺����һ�ö��������жϸö������Ƿ���ƽ���������
*/

/**
˼·��������ǰ������������ȵĺ���
*/

#include<iostream>
using namespace std;

class Solution{
public:
    bool IsBalanced_Solution(TreeNode* pRoot)
    {
        if(pRoot==nullptr)
            return true;
        if(abs(TreeDepth(pRoot->left)-TreeDepth(pRoot->right)))
            return false;
        return IsBalanced_Solution(pRoot->left)&&IsBalanced_Solution(pRoot->right)
    }



};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
