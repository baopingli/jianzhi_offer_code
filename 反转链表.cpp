/*
*���⣺����һ��������ת��������������ı�ͷ��
*/

/**
˼·������������һ��ջ������ʹ���˸����ռ�
���ŵķ���Ӧ������ԭ�����Ͻ����޸ġ�
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
    ListNode* ReverseList(ListNode* pHead) {
        //��ת����Ȼ�����������ı�ͷ�����leetcode������

        if(pHead==nullptr)
            return nullptr;
        ListNode* newhead=nullptr;
        while(pHead!=nullptr)
        {
            ListNode* t=pHead->next;//����Ҫ����ס����Ľ�㡣
            pHead->next=newhead;//Ȼ���ж�
            newhead=pHead;//Ȼ���滻
            pHead=t;
        }
        return newhead;
    }
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
