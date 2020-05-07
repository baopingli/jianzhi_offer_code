/*
*题意：输入两个链表，找出它们的第一个公共结点。（注意因为传入数据是链表，
所以错误测试数据的提示是用其他方式显示的，保证传入数据是正确的）
*/

/**
思路：统计两个链表的长度然后长链表先走k步，然后两个链表同时走
相等的就是公共的结点
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
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        if(pHead1==nullptr||pHead2==nullptr)
            return nullptr;
        int n1=getlength(pHead1);
        int n2=getlength(pHead2);
        ListNode *p1=pHead1;
        ListNode *p2=pHead2;
        int gap=n1-n2;
        //假设p1是长的
        if(n1<n2)
        {
            p1=pHead2;
            p2=pHead1;
            gap=n2-n1;
        }
        for(int i=0;i<gap;i++)
        {
            p1=p1->next;
        }
        while(p1!=nullptr&&p2!=nullptr&&p1!=p2)
        {
            p1=p1->next;
            p2=p2->next;
        }
        return p1;
    }
    int getlength(ListNode* node)
    {
        int n=0;
        while(node)
        {
            node=node->next;
            n++;
        }
        return n;
    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
