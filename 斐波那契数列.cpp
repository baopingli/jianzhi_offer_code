/*
*���⣺��Ҷ�֪��쳲��������У�����Ҫ������һ������n���������쳲��������еĵ�n���0��ʼ����0��Ϊ0����
n<=39
*/

/**
˼·�����ûʲô��˵�ľ���һ��forѭ�������ǲ�Ҫ�õݹ���Ϊ�ݹ�Ļ���
2��n�η��ĸ��Ӷȡ�
*/

#include<iostream>
using namespace std;

class Solution {
public:
    int Fibonacci(int n) {
        //���������dp
        //Ҳ�����õݹ�
        //���õݹ�ʵ��
        //��dpʵ��һ��
        /*
        if(n==0)
            return 0;
        if(n==1||n==2)
            return 1;
        return Fibonacci(n-1)+Fibonacci(n-2);
        */
        if(n==0)
            return 0;
        if(n==1||n==2)
            return 1;
        vector<int> tmp={0,1,1};
       //dp��ô��û��������
        int r=0;
        for(int i=3;i<=n;i++)
        {
            tmp.push_back(tmp[i-1]+tmp[i-2]);
        }
        return tmp.back();
    }
};



int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
