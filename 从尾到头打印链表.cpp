/*
*���⣺����һ�������������β��ͷ��˳�򷵻�һ��ArrayList��
*/

/**
˼·�����ǵݹ飬Ҳ����ջ���ݽ�ȥ�������ʱ����Ƿ���ġ�
*/

/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/

#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> res;
        if(head==nullptr)
            return res;
        //��β����ͷ��˳�򷵻�һ��list
        //��ͷ��βȻ��תlsit������
        //��������
        //�ȴ�ͷ��β����ջ�У�Ȼ�������
        //�����ǵݹ�
        helper(head,res);
        return res;

    }
    void helper(ListNode* head,vector<int>& res)
    {
        //�ݹ�Ҫ���ж�����
        //�������ֽ����ʽ
        if(head==nullptr)
            return;
        helper(head->next,res);
        res.push_back(head->val);
    }
};



int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
