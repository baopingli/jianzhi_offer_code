/*
*���⣺��һ�����������а�������
���ҳ�������Ļ�����ڽ�㣬�������null��
*/

/**
˼·�����ȿ���ָ���ܣ���ȵĻ���˵��������
Ȼ��������һ��ָ���ͷ��ʼ��������������ڡ�
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
        //������ڽڵ����
        //����ָ��Ȼ���ߣ�������λ�ô���ʱ��һ����ͷ��ʼ�ߣ�һ�������ߣ���������ʱ�������ڵ�
        //��Ҫ�ж��Ƿ��л�
        if(pHead==nullptr||pHead->next==nullptr)
            return nullptr;
        ListNode* p1=pHead->next;
        ListNode* p2=pHead->next->next;
        //�������һ��ʼp1��p2����������Բ������whileѭ��
        while(p1!=p2&&p2!=nullptr&&p1!=nullptr)
        {
            p1=p1->next;
            p2=p2->next->next;
        }
        //�������ж�һ���Ƿ��л���
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
