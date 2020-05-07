/*
*题意：给定一个二叉树和其中的一个结点，
请找出中序遍历顺序的下一个结点并且返回。
注意，树中的结点不仅包含左右子结点，同时包含指向父结点的指针。
*/

/**
思路：二叉树的下一个结点并且是中序遍历，那就要分情况讨论了。
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
        //1、如果有右子树那么下一个节点是右子树的最左节点
        if(pNode->right!=nullptr)
        {
            TreeLinkNode* pRight=pNode->right;
            while(pRight->left!=nullptr)
            {
                pRight=pRight->left;
            }
            return pRight;
        }
        //2、如果没有右子树，该节点是左子树，下一个节点是父节点
        if(pNode->next!=nullptr&&pNode->next->left==pNode)
        {
            return pNode->next;
        }
        //3、没有右子树，节点是父节点的右子树，那么就需要回溯父节点，
        //直到某个节点是父节点的左子树
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
