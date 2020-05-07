/*
*题意：输入一个链表，按链表从尾到头的顺序返回一个ArrayList。
*/

/**
思路：就是递归，也就是栈，递进去归出来的时候就是反序的。
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
        //从尾部到头的顺序返回一个list
        //从头到尾然后反转lsit？不行
        //逆序链表
        //先从头到尾存入栈中，然后再输出
        //或者是递归
        helper(head,res);
        return res;

    }
    void helper(ListNode* head,vector<int>& res)
    {
        //递归要有判断条件
        //但是这种解决方式
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
