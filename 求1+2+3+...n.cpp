/*
*���⣺��1+2+3+...+n��Ҫ����ʹ�ó˳�����
for��while��if��else��switch��case
�ȹؼ��ּ������ж���䣨A?B:C����
*/

/**
˼·������ʹ�ó˷�
*/

#include<iostream>
using namespace std;

class Solution {
public:
    int Sum_Solution(int n) {
        //ʹ�õݹ�ӷ�
        //���ö�·������ʵ����ֹ
        int sum=n;
        sum&&(sum+=Sum_Solution(n-1));//���ǰ��Ϊ0�ˣ���ô����Ҳ�Ͳ���ִ����
        return  sum;
    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
