/*
*���⣺����һ���ַ���,���ֵ����ӡ�����ַ������ַ����������С�
���������ַ���abc,
���ӡ�����ַ�a,b,c�������г����������ַ���abc,acb,bac,bca,cab��cba��
*/

/**
˼·��ȫ���������򵥵ķ�������dfsȻ�󽻻�
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
        //ֹͣ������
        if(begin==str.length())
        {
            //���ӵ�map����Ϊ���ж��Ƿ�����ظ�
            s.insert(str);
            if(s.size()!=before)
            {
                res.push_back(str);
                before=s.size();
            }
        }
        for(int i=begin;i<str.length();i++)
        {
            //����
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
