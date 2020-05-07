/*
*���⣺��εõ�һ���������е���λ����������������ж�����������ֵ��
��ô��λ������������ֵ����֮��λ���м����ֵ��������������ж���ż������ֵ��
��ô��λ������������ֵ����֮���м���������ƽ��ֵ��
����ʹ��Insert()������ȡ��������ʹ��GetMedian()������ȡ��ǰ��ȡ���ݵ���λ����
*/

/**
˼·����Ϊ�������������Ҫ�����ܵĻ��getmedian��Ļ���Ҫ
���������ѵĻ�����O1��ʱ�临�Ӷȣ�on�Ŀռ临�Ӷȡ�
����ķ����൱��ֱ��ʹ����stl�н�������Ϊ�ѵĺ�����
*/

#include<iostream>
using namespace std;

class Solution {
private:
    vector<int> min;
    vector<int> max;
public:
    //��һ������������ߵ�������һ����С�������ұߵ�����
    //Ҫƽ������
    //�����ѵ�������Ŀ֮��ܳ���1
    //����������ĿΪż����ʱ��������ݲ�����С�ѣ�������ʱ���������
    void Insert(int num)
    {
        if((min.size()+max.size())&1==0)
        {
            //ż����ʱ��Ӧ�ò�����С�ѣ�һ����û�е�ʱ�������С�ѡ�
            if(max.size()>0&&num<max[0])
            {
                //�����������������ѵ�С����ô�Ȳ�������Ȼ���ó������뵽��С��
                max.push_back(num);
                push_heap(max.begin(),max.end(),less<int>());//�Ӵ�С��
                num=max[0];
                //popȻ������
                pop_heap(max.begin(),max.end(),less<int>());
                max.pop_back();//��������
            }
            min.push_back(num);
            push_heap(min.begin(),min.end(),greater<int>());
        }
        else//�������в���
        {
            if(min.size()>0&&num>min[0])
            {
                //�Ȳ�����С��
                min.push_back(num);
                push_heap(min.begin(),min.end(),greater<int>());
                num=min[0];
                pop_heap(min.begin(),min.end(),greater<int>());
                min.pop_back();
            }
            max.push_back(num);
            push_heap(max.begin(),max.end(),less<int>());
        }
    }

    double GetMedian()
    {
        int size=max.size()+min.size();
        if(size==0)
            return 0.0;
        double median=0.0;
        if((size&1)==1)//����
            median=min[0];
        else
            median=(max[0]+min[0])/2.0;
        return median;
    }

};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
