/*
*题意：给一个链表，若其中包含环，
请找出该链表的环的入口结点，否则，输出null。
*/

/**
思路：首先快慢指针跑，相等的话就说明遇到了
然后令其中一个指针从头开始，再相遇就是入口。
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
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        //环的入口节点就是
        //快慢指针然后走，相遇的位置处的时候，一个从头开始走，一个继续走，再相遇的时候就是入口点
        //需要判断是否有环
        if(pHead==nullptr||pHead->next==nullptr)
            return nullptr;
        ListNode* p1=pHead->next;
        ListNode* p2=pHead->next->next;
        //这个上来一开始p1和p2就相等了所以不会进入while循环
        while(p1!=p2&&p2!=nullptr&&p1!=nullptr)
        {
            p1=p1->next;
            p2=p2->next->next;
        }
        //在这里判断一下是否有环。
        if(p1==nullptr||p2==nullptr)
            return nullptr;
        p1=pHead;
        while(p1!=p2)
        {
            p1=p1->next;
            p2=p2->next;
        }
        return p1;
    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
