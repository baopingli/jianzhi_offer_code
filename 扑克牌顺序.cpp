/*
*���⣺LL���������ر��,��Ϊ��ȥ����һ���˿���,
���������Ȼ��2������,2��С��(һ����ԭ����54��^_^)...��
������г����5����,�����Լ�������,�����ܲ��ܳ鵽˳��,
����鵽�Ļ�,������ȥ��������Ʊ,�ٺ٣���������A,����3,С��
,����,��Ƭ5��,��Oh My God!������˳��.....LL��������,��������
,������\С �����Կ����κ�����,����A����1,JΪ11,QΪ12,KΪ13
�������5���ƾͿ��Ա�ɡ�1,2,3,4,5��(��С���ֱ���2��4),��So L
ucky!����LL����ȥ��������Ʊ���� ����,Ҫ����ʹ�������ģ������
�Ĺ���,Ȼ���������LL��������Σ� ����������˳�Ӿ����true��
��������false��Ϊ�˷������,�������Ϊ��С����0��
*/

/**
˼·��������Ȼ��ͳ��gap
*/

#include<iostream>
using namespace std;
class Solution {
public:
    bool IsContinuous( vector<int> numbers ) {
        if(numbers.size()<=0)//��������
            return false;
        sort(numbers.begin(),numbers.end());
        int numberofzero=0;
        int numberofgap=0;
        for(int i=0;i<numbers.size();i++)
        {
            if(numbers[i]==0)
                numberofzero++;
        }
        int small=numberofzero;
        int big=small+1;
        while(big<numbers.size())
        {
            if(numbers[small]==numbers[big])//���ӷ���false
                return false;
            numberofgap+=numbers[big]-numbers[small]-1;
            small++;
            big++;
        }
        return(numberofgap>numberofzero)?false:true;
    }
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
