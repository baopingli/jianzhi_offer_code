/*
*题意：给定一个数组A[0,1,...,n-1],请
构建一个数组B[0,1,...,n-1],其中B中的元素B[i]
=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]。不能使用除法。（注意：
规定B[0] = A[1] * A[2] * ... * A[n-1]，B[n-1]
= A[0] * A[1] * ... * A[n-2];）
*/

/**
思路：每行分成两块来进行
*/

#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
        vector<int> B(A.size(),1);
        for(int i=0;i<A.size();i++)
        {
            //前半部分
            for(int j=0;j<i;j++)
            {
                B[i]*=A[j];
            }
            //后半部分
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
