/*
*���⣺
*/

/**
˼·�������ڼ򵥵�merge������
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
        //�ϲ�����������֤������������

        if(pHead1==nullptr)
            return pHead2;
        if(pHead2==nullptr)
            return pHead1;
        ListNode *r=new ListNode(-1);//�����������һ���µ�ͷ��㶼û�м�ס��
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

        //����Ĵ���̫��������һ���򵥵�ĵݹ�
        //������Ҫ�ж�,���ǻ������
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
        return p;//�ǲ�����û��return��ɳ�ʱ����ʵ�ݹ�Ļ�˼·����һ�㡣
        */
    }
};



int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
