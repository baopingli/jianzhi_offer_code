/*
*���⣺����һ����������������һ������S��
�������в�����������ʹ�����ǵĺ�������S��
����ж�����ֵĺ͵���S������������ĳ˻���С�ġ�
*/

/**
˼·��˫ָ��������
*/

#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        //����˻���С������������ôӦ���������ߵ�
        //����ָ��
        vector<int> res;
        if(array.size()<=0)
            return res;
        int p1=0;
        int p2=array.size()-1;
        while(p1!=p2)
        {
            if(array[p1]+array[p2]==sum)
            {
                return {array[p1],array[p2]};
            }
            else if(array[p1]+array[p2]<sum)
                p1++;
            else
                p2--;
        }
        return {};
    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
