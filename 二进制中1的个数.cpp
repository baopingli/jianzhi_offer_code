/*
*���⣺����һ��������������������Ʊ�ʾ��1�ĸ��������и����ò����ʾ��
*/

/**
˼·���������ʵ�кܶ��ֽⷨ��
����ʹ����λ��ʹ�ó���2�Ļ��ǽ�ʡʱ��ġ�
���һ������ѭ����λ�Ļ�����������ѭ������ΪҪ��֤��һλ��1��
*/

#include<iostream>
using namespace std;


class Solution {
public:
     int  NumberOf1_1(int n)
     {
         //��index������λȻ�����뿴��һλ���ǲ���1.
         int index=1;
         int count=0;
         while(index)//�൱���ƶ���int��λ�Ĵ�С������Ч���ǲ��ǲ���
         {
             if(n&index)
                count++;
             index<<1;
         }
         return count;
     }
     int  NumberOf1_2(int n) {
         //�����Ʊ�ʾ��1�ĸ���
         //������1����õ����
         //����Ǹ����Ļ���ѡ����ѭ����
         /*
         int count=0;
         unsigned int flag=1;
         while(flag)
         {
             if(n&flag)
                 count++;
             flag=flag<<1;
         }
         return count;
         */
         //���ʡʱ����㷨
         int count=0;
         while(n)//�����һֱ����n���ұߵ�1��
         {
             count++;
             n=n&(n-1);//�����ұߵ�1���0.
         }
         return count;
     }
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
