/*
*���⣺��һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת��
����һ���ǵݼ�����������һ����ת�������ת�������СԪ�ء�
��������{3,4,5,1,2}Ϊ{1,2,3,4,5}��һ����ת�����������СֵΪ1��
NOTE������������Ԫ�ض�����0���������СΪ0���뷵��0��
*/

/**
˼·�����ֲ��ҵ�����һֱ���ڶ��ֲ����е㲻�Ƿǳ�������ж��м�ֵ����߱Ƚϡ�
*/

#include<iostream>
using namespace std;


class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        //�������ת
        //ʹ�ö��ֲ��ң�
        //�����ȷ�һ���м�ֵ
        //�õݹ�ᳬ�ڴ棬�ݹ�����дû�����⣬���ǻᳬ�ڴ棬���Բ��õݹ�
        /*
        if(rotateArray.size()<=0)
            return 0;
        //Ȼ����ǵݹ飬���ϵط�
        return helper(rotateArray,0,rotateArray.size());
    }
    int helper(vector<int>& rotateArray,int L,int R)
    {
        int mid=(L+R)/2;
        if(L==R-1)
            return rotateArray[R];
        //�ж��м�Ԫ��λ��ǰ�����������
        //˵����ת��һ�����ұ�
        if(rotateArray[mid]>rotateArray[L])
        {
            helper(rotateArray,mid,R);
        }
        else
        {
            helper(rotateArray,L,mid);
        }

    }
    *//*
        if(rotateArray.size()<=0)
            return 0;
        int L=0;
        int R=rotateArray.size()-1;
        while(L+1<R)
        {
            int mid=(L+R)/2;
            if(rotateArray[mid]>=rotateArray[L])
                L=mid;
            else
                R=mid;
        }
        return rotateArray[R];
        //�˷������ǽ��ݹ����˵����ķ�ʽȥ��⡣
        */
        if(rotateArray.size()<=0)
            return 0;
        int l=0;
        int r=rotateArray.size()-1;
        while(l!=r-1)//���������ڵ�ʱ��ֹͣ��
        {
            int mid=(l+r)/2;
            //�ж��м��ֵ�Ƿ�������
            if(rotateArray[mid]>=rotateArray[l])
                l=mid;
            else
                r=mid;
        }
        return rotateArray[r];

    }
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
