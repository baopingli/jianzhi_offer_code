/*
*���⣺����һ������A[0,1,...,n-1],��
����һ������B[0,1,...,n-1],����B�е�Ԫ��B[i]
=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]������ʹ�ó�������ע�⣺
�涨B[0] = A[1] * A[2] * ... * A[n-1]��B[n-1]
= A[0] * A[1] * ... * A[n-2];��
*/

/**
˼·��ÿ�зֳ�����������
*/

#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
        vector<int> B(A.size(),1);
        for(int i=0;i<A.size();i++)
        {
            //ǰ�벿��
            for(int j=0;j<i;j++)
            {
                B[i]*=A[j];
            }
            //��벿��
            for(int k=i+1;k<A.size();k++)
            {
                B[i]*=A[k];
            }
        }
        return B;
    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
