/*
*���⣺����һ�������������е�һ����㣬
���ҳ��������˳�����һ����㲢�ҷ��ء�
ע�⣬���еĽ�㲻�����������ӽ�㣬ͬʱ����ָ�򸸽���ָ�롣
*/

/**
˼·������������һ����㲢��������������Ǿ�Ҫ����������ˡ�
*/

#include<iostream>
using namespace std;

/*
struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {

    }
};
*/
class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
        //1���������������ô��һ���ڵ���������������ڵ�
        if(pNode->right!=nullptr)
        {
            TreeLinkNode* pRight=pNode->right;
            while(pRight->left!=nullptr)
            {
                pRight=pRight->left;
            }
            return pRight;
        }
        //2�����û�����������ýڵ�������������һ���ڵ��Ǹ��ڵ�
        if(pNode->next!=nullptr&&pNode->next->left==pNode)
        {
            return pNode->next;
        }
        //3��û�����������ڵ��Ǹ��ڵ������������ô����Ҫ���ݸ��ڵ㣬
        //ֱ��ĳ���ڵ��Ǹ��ڵ��������
        if(pNode->next!=nullptr)
        {
            TreeLinkNode* pNext=pNode->next;
            while(pNext->next!=nullptr&&pNext->next->right==pNext)
            {
                pNext=pNext->next;
            }
            return pNext->next;
        }
        return nullptr;


    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
