/*
*题意：输入一个链表，输出该链表中倒数第k个结点。
*/

/**
思路：这个题和二叉搜索树中的第k大个结点不要弄混。
1、回溯
2、定义两个指针
注意：结点不能为空等细节。
*/

#include<iostream>
using namespace std;

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
    //快慢指针
        if(pListHead==nullptr||k==0)
            return nullptr;
        ListNode* p1=pListHead;
        ListNode* p2=pListHead;
        int n=k-1;
        while(n--)
        {
            if(p1->next!=nullptr)
                p1=p1->next;
            else//这里要判断是不是空。
                return nullptr;
        }
        while(p1->next!=nullptr)
        {
            p1=p1->next;
            p2=p2->next;
        }
        return p2;

    }
};



int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
