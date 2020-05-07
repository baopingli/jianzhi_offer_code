/*
*题意：请实现一个函数用来匹配包括'.'和'*'的正则表达式。
模式中的字符'.'表示任意一个字符，而'*'表示它前面的字符可以
出现任意次（包含0次）。 在本题中，匹配是指字符串的所有字符
匹配整个模式。例如，字符串"aaa"与模式"a.a"和"ab*ac*a"匹
配，但是与"aa.a"和"ab*a"均不匹配
*/

/**
思路：.可以表示任意的字符，*表示前面的字符可以出现任意次数
常规的思路是
首先判断模式字符串的第二个字符是不是*，如果是星号的话那么就要分情况
讨论。
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
