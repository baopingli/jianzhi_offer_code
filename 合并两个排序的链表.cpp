/*
*题意：
*/

/**
思路：类似于简单的merge方法。
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
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        //合并两个链表，保证单调不减规则

        if(pHead1==nullptr)
            return pHead2;
        if(pHead2==nullptr)
            return pHead1;
        ListNode *r=new ListNode(-1);//最基本的生成一个新的头结点都没有记住。
        ListNode *p=r;
        while(pHead1!=nullptr&&pHead2!=nullptr)
        {
            if(pHead1->val<=pHead2->val)
            {
                p->next=pHead1;
                pHead1=pHead1->next;
            }
            else
            {
                p->next=pHead2;
                pHead2=pHead2->next;
            }
            p=p->next;
        }
        if(pHead1!=nullptr)
        {
            p->next=pHead1;
        }
        if(pHead2!=nullptr)
        {
            p->next=pHead2;
        }
        return r->next;

        //上面的代码太冗余了来一个简单点的递归
        //首先需要判断,但是会溢出。
        /*
        if(pHead1==nullptr)
            return pHead2;
        if(pHead2==nullptr)
            return pHead1;
        ListNode *p=nullptr;
        if(pHead1->val<=pHead2->val)
        {
            p=pHead1;
            p->next=Merge(pHead1->next,pHead2);
        }
        else
        {
            p=pHead2;
            p->next=Merge(pHead1,pHead2->next);
        }
        return p;//是不是我没有return造成超时？其实递归的话思路更简单一点。
        */
    }
};



int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
