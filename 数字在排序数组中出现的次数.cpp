/*
*���⣺ͳ��һ�����������������г��ֵĴ�����
*/

/**
˼·�������ʹ�õ��Ƕ��ֲ��ң��ҵ�֮�������߽�����ɢ
Ȼ���������߷��س���
*/

#include<iostream>
using namespace std;

class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        //���ֲ���
        int left=0;
        int right=data.size()-1;

        while(left<=right)
        {
            int mid=(left+right)/2;
            //����м��ֵ����k����ô�ж����ֵ�ǲ��ǵ�һ�����ֵ�
            if(k==data[mid])
            {
                    int i=mid,j=mid;
                    while(data[--i]==k){};
                    while(data[++j]==k){};
                    return j-i-1;
            }
            else if(k>data[mid])
            {
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        return 0;
    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
