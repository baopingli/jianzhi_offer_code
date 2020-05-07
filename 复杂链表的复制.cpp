/*
*���⣺����һ����������
��ÿ���ڵ����нڵ�ֵ���Լ�����ָ�룬һ��ָ����һ���ڵ㣬
��һ������ָ��ָ������һ���ڵ㣩�����ؽ��Ϊ���ƺ��������head��
��ע�⣬���������벻Ҫ���ز����еĽڵ����ã�������������ֱ�ӷ��ؿգ�
*/

/**
˼·��������Ҫ����һ��map�����������ͬʱ�½�һ������
Ȼ���ٱ���ԭ������½�������ͬʱ��������
��Ӧ��map��ȥ�ҵ���Ӧ���½�������
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
