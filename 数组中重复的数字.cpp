/*
*���⣺��һ������Ϊn����������������ֶ���0��n-1�ķ�Χ�ڡ�
������ĳЩ�������ظ��ģ�����֪���м����������ظ��ġ�
Ҳ��֪��ÿ�������ظ����Ρ�
���ҳ�����������һ���ظ������֡� ���磬
������볤��Ϊ7������{2,3,1,0,2,5,3}����ô��Ӧ������ǵ�һ���ظ�������2��
*/

/**
˼·��
������������������ԡ�
������˼·���ж�λ���ϵ�ֵ���±��Ƿ����
����ȵĻ����滻�Ե�ǰλ�õ�����Ϊ�±��λ���ϵ�ֵ

*/

#include<iostream>
using namespace std;

class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
        //˼·���ǽ��������õ���0-n-��Χ����ص�
        if(length<=1)
            return false;
        for(int i=0;i<length;i++)
        {//ѭ��
            while(numbers[i]!=i)
            {
                //��������϶����ȱ�ִ�е��ģ���Ϊ
                //�����п϶������ظ��ġ�
                if(numbers[i]==numbers[numbers[i]])
                {
                    duplication[0]=numbers[i];
                    return true;
                }
                    int tmp=numbers[i];
                    numbers[i]=numbers[tmp];
                    numbers[tmp]=tmp;

            }
        }
        return false;
    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
