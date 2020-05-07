/*
*题意：输入一个链表，反转链表后，输出新链表的表头。
*/

/**
思路：这个题可以用一个栈，但是使用了辅助空间
最优的方法应该是在原链表上进行修改。
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
        //反转链表然后输出新链表的表头，这个leetcode上做过

        if(pHead==nullptr)
            return nullptr;
        ListNode* newhead=nullptr;
        while(pHead!=nullptr)
        {
            ListNode* t=pHead->next;//搜先要保存住后面的结点。
            pHead->next=newhead;//然后切断
            newhead=pHead;//然后替换
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
