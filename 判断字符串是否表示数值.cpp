/*
*���⣺��ʵ��һ�����������ж��ַ����Ƿ��ʾ��ֵ������������С������
���磬�ַ���"+100","5e2","-123","3.1416"��"-1E-16"����ʾ��ֵ��
 ����"12e","1a3.14","1.2.3","+-5"��"12e+4.3"�����ǡ�
*/

/**
˼·��������Ǵ����Ұ�����ȷ�ַ����ķ�ʽ����ƥ��
�������в���ƥ�������Ļ��ͷ���false
*/

#include<iostream>
using namespace std;

class Solution {
public:
    bool isNumeric(char* string)
    {
        if(string==nullptr)
            return false;
        bool numeric=scanInteger(&string);
        if(*string=='.')
        {
            string++;
            numeric=scanUnsignedInterger(&string)||numeric;
        }
        if(*string=='e'||*string=='E')
        {
            string++;
            numeric=numeric&&scanInteger(&string);

        }
        return numeric&&(*string=='\0');
    }
    bool scanInteger(char **str)
    {
        if(**str=='+'||**str=='-')
            ++(*str);
        return scanUnsignedInteger(str);
    }
    bool scanUnsignedInteger(char* str)
    {
        const char* before=*str;
        while(**str!='\0'&&**str>='0'&&**str<='9')
        {
            (*str)++;
        }
        return before<*str;
    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
