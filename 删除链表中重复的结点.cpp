/*
*题意：在一个排序的链表中，存在重复的结点，
请删除该链表中重复的结点，重复的结点不保留，
返回链表头指针。 例如，链表1->2->3->3->4->4->5 处理后为 1->2->5
*/

/**
思路：主要是要有一个辅助指针保存前一个结点，但是需要在这个链表之前
新建一个空结点，因为链表中第一个结点也有可能为空。
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
};
*/
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        //删除重复的节点
        if(pHead==nullptr||pHead->next==nullptr)
            return pHead;
        ListNode* head=new ListNode(INT_MIN);
        head->next=pHead;
        ListNode* p=head->next;//当前,这样就是从第一个开始的
        ListNode* p1=head;//前面一个
        while(p!=nullptr)
        {
            if(p->next!=nullptr&&p->val==p->next->val)
            {
                //判断出现了相等的结点，那么就要
                //循环直到找到不相等的结点，然后令前一个指向下一个结点
                while(p->next!=nullptr&&p->val==p->next->val)
                {
                    p=p->next;
                }
                p=p->next;
                p1->next=p;
            }
            else
            {
                p1=p;
                p=p->next;
            }
        }
        return head->next;
    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
