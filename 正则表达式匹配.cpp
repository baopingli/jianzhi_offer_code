/*
*���⣺��ʵ��һ����������ƥ�����'.'��'*'��������ʽ��
ģʽ�е��ַ�'.'��ʾ����һ���ַ�����'*'��ʾ��ǰ����ַ�����
��������Σ�����0�Σ��� �ڱ����У�ƥ����ָ�ַ����������ַ�
ƥ������ģʽ�����磬�ַ���"aaa"��ģʽ"a.a"��"ab*ac*a"ƥ
�䣬������"aa.a"��"ab*a"����ƥ��
*/

/**
˼·��.���Ա�ʾ������ַ���*��ʾǰ����ַ����Գ����������
�����˼·��
�����ж�ģʽ�ַ����ĵڶ����ַ��ǲ���*��������ǺŵĻ���ô��Ҫ�����
���ۡ�
*/

#include<iostream>
using namespace std;

class Solution {
public:
    bool match(char* str, char* pattern)
    {
        if(str==nullptr||pattern==nullptr)
            return false;
        return matchcore(str,pattern);
    }
    bool matchcore(char* str,char* pattern)
    {
        if(*str=='\0'&&*pattern=='\0')
            return true;
        if(*str!='\0'&&*pattern=='\0')
            return false;
        if(*(pattern+1)=='*')
        {
            if(*str==*pattern||(*str!='\0'&&*pattern=='.'))
                return matchcore(str+1,pattern+2)||matchcore(str+1,pattern)||matchcore(str,pattern+2);
            else
                return matchcore(str,pattern+2);
        }
        if(*str==*pattern||(*str!='\0'&&*pattern=='.'))
            return matchcore(str+1,pattern+1);
        return false;

    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
