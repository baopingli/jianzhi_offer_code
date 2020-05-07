/*
*题意：请实现一个函数用来判断字符串是否表示数值（包括整数和小数）。
例如，字符串"+100","5e2","-123","3.1416"和"-1E-16"都表示数值。
 但是"12e","1a3.14","1.2.3","+-5"和"12e+4.3"都不是。
*/

/**
思路：这个就是从左到右按照正确字符串的方式进行匹配
如果最后有不能匹配的情况的话就返回false
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
