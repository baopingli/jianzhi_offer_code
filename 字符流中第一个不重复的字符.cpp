/*
*���⣺��ʵ��һ�����������ҳ��ַ����е�һ��ֻ����һ�ε��ַ���
���磬�����ַ�����ֻ����ǰ�����ַ�"go"ʱ����һ��ֻ����һ�ε��ַ���"g"��
���Ӹ��ַ����ж���ǰ�����ַ���google"ʱ����һ��ֻ����һ�ε��ַ���"l"��
*/

/**
˼·��ʹ��һ���������к͸���map
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
