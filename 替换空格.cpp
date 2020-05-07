/*
*题意：请实现一个函数，将一个字符串中的每个空格替换成“%20”。
例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
*/

/**
思路：先统计有多少空格，然后将数组的长度扩充，然后两个指针一个指针找空格
一个指针记录后面，当两个指针相等的时候停止。
*/

#include<iostream>
using namespace std;


class Solution {
public:
	void replaceSpace(char *str,int length) {
         //两个指针一个在后一个在前
        //先将字符串进行扩充//然后从后往前插入
        if(str==nullptr||length<=0)
            return;
        //首先统计空格的个数
        int countspace=0;
        for(int i=0;i<length;i++)
        {
            if(str[i]==' ')
            {
                countspace++;
            }

        }
        int newlength=length+countspace*2;
        //然后一个指针指向后面一个指针指向length往前遍历如果遇到的不是空格的话就都往前移动
        int p1=length-1;
        int p2=newlength-1;
        while(p1!=p2)
        {
            if(str[p1]==' ')
            {
                str[p2]='0';
                str[--p2]='2';
                str[--p2]='%';
            }
            else
            {
                str[p2]=str[p1];
            }
            p2--;
            p1--;

        }

	}
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
