/*
*���⣺�����������һ����λָ�����ѭ�����ƣ�ROL����
�����и��򵥵����񣬾������ַ���ģ�����ָ�����������
����һ���������ַ�����S���������ѭ������Kλ������������
���磬�ַ�����S=��abcXYZdef��,
Ҫ�����ѭ������3λ��Ľ��������XYZdefabc�����ǲ��Ǻܼ򵥣�OK���㶨����
*/

/**
˼·�����η�ת
*/

#include<iostream>
using namespace std;

class Solution {
public:
    string LeftRotateString(string str, int n) {
        //ѭ�����ƣ����ַ���ģ���������
        //ѭ������kλ֮��Ľ��
        //�ֳ��������ֱַ�תȻ�������巴ת��
        int l=str.length();
        if(l<=0)
            return "";
        n=n%l;
        reverse(str.begin(),str.begin()+n);
        reverse(str.begin()+n,str.end());
        reverse(str.begin(),str.end());
        return str;
    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
