/*
*���⣺����һ����������������е�����k����㡣
*/

/**
˼·�������Ͷ����������еĵ�k�����㲻ҪŪ�졣
1������
2����������ָ��
ע�⣺��㲻��Ϊ�յ�ϸ�ڡ�
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
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
    //����ָ��
        if(pListHead==nullptr||k==0)
            return nullptr;
        ListNode* p1=pListHead;
        ListNode* p2=pListHead;
        int n=k-1;
        while(n--)
        {
            if(p1->next!=nullptr)
                p1=p1->next;
            else//����Ҫ�ж��ǲ��ǿա�
                return nullptr;
        }
        while(p1->next!=nullptr)
        {
            p1=p1->next;
            p2=p2->next;
        }
        return p2;

    }
};



int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
