/*
*题意：输入一个复杂链表
（每个节点中有节点值，以及两个指针，一个指向下一个节点，
另一个特殊指针指向任意一个节点），返回结果为复制后复杂链表的head。
（注意，输出结果中请不要返回参数中的节点引用，否则判题程序会直接返回空）
*/

/**
思路：首先需要借助一个map，遍历链表的同时新建一个链表，
然后再遍历原链表和新建的链表（同时遍历），
对应到map中去找到对应的新建的链表。
*/

#include<iostream>
using namespace std;

/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        //
        if(pHead==nullptr)
            return nullptr;
        unordered_map<RandomListNode*,RandomListNode*> m;
        RandomListNode* res=new RandomListNode(pHead->label);
        RandomListNode* r=res;
        RandomListNode* cur=pHead->next;
        m[pHead]=res;
        while(cur!=nullptr)
        {
            RandomListNode* t=new RandomListNode(cur->label);
            m[cur]=t;
            r->next=t;
            r=r->next;
            cur=cur->next;
        }
        cur=pHead;
        r=res;
        while(cur!=nullptr)
        {
            r->random=m[cur->random];
            cur=cur->next;
            r=r->next;
        }
        return res;
    }
};



int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
