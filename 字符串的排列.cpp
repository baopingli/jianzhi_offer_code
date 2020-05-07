/*
*题意：输入一个字符串,按字典序打印出该字符串中字符的所有排列。
例如输入字符串abc,
则打印出由字符a,b,c所能排列出来的所有字符串abc,acb,bac,bca,cab和cba。
*/

/**
思路：全排列这个题简单的方法就是dfs然后交换
*/

#include<iostream>
using namespace std;


class Solution {
    vector<string> res;
    set<string> s;
    int before=0;
public:
    vector<string> Permutation(string str) {
        if(str.length()<=0)
            return res;
        int begin=0;
        helper(str,begin);
        sort(res.begin(),res.end());
        return res;
    }
    void helper(string str,int begin)
    {
        //停止条件是
        if(begin==str.length())
        {
            //增加的map就是为了判断是否存在重复
            s.insert(str);
            if(s.size()!=before)
            {
                res.push_back(str);
                before=s.size();
            }
        }
        for(int i=begin;i<str.length();i++)
        {
            //交换
            char x=str[i];
            str[i]=str[begin];
            str[begin]=x;

            helper(str,begin+1);

            x=str[i];
            str[i]=str[begin];
            str[begin]=x;
        }
    }
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
