/*
*���⣺��һ������������У������ظ��Ľ�㣬
��ɾ�����������ظ��Ľ�㣬�ظ��Ľ�㲻������
��������ͷָ�롣 ���磬����1->2->3->3->4->4->5 �����Ϊ 1->2->5
*/

/**
˼·����Ҫ��Ҫ��һ������ָ�뱣��ǰһ����㣬������Ҫ���������֮ǰ
�½�һ���ս�㣬��Ϊ�����е�һ�����Ҳ�п���Ϊ�ա�
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
        //ɾ���ظ��Ľڵ�
        if(pHead==nullptr||pHead->next==nullptr)
            return pHead;
        ListNode* head=new ListNode(INT_MIN);
        head->next=pHead;
        ListNode* p=head->next;//��ǰ,�������Ǵӵ�һ����ʼ��
        ListNode* p1=head;//ǰ��һ��
        while(p!=nullptr)
        {
            if(p->next!=nullptr&&p->val==p->next->val)
            {
                //�жϳ�������ȵĽ�㣬��ô��Ҫ
                //ѭ��ֱ���ҵ�����ȵĽ�㣬Ȼ����ǰһ��ָ����һ�����
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
