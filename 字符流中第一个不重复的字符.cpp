/*
*题意：请实现一个函数用来找出字符流中第一个只出现一次的字符。
例如，当从字符流中只读出前两个字符"go"时，第一个只出现一次的字符是"g"。
当从该字符流中读出前六个字符“google"时，第一个只出现一次的字符是"l"。
*/

/**
思路：使用一个辅助队列和辅助map
*/

#include<iostream>
using namespace std;

class Solution{
private:
    map<char,int> m;
    queue<char> q;
public:
    void Insert(char ch)
    {
        m[ch]++;
        if(m[ch]==1)
            q.push(ch);
    }
    char FirstAppearingOnce()
    {
        while(!q.empty())
        {
            if(m[q.front()]!==1)
            q.pop();
            else
            return q.front();
        }
        return '#';

    }


};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
