



/*
*���⣺һֻ����һ�ο�������1��̨�ף�
Ҳ��������2���������������һ��n����̨���ܹ��ж���������
���Ⱥ����ͬ�㲻ͬ�Ľ������
*/

/**
˼·���������һ��1���ڶ���2��
*/

#include<iostream>
using namespace std;

class Solution {
public:
    int jumpFloor(int number) {
        //��̨������Ӧ���ǵݹ��
        //��̨�������쳲�����������ʵ��һ�µģ���Ҫ�����˼·��ô���������
        //ת��Ϊ쳲��������⡣
        //1-1
        //2-2
        //3�Ļ� �����һ������һ�� ��ôʣ�� n-1 ��ô�������ж������� ������f(n-1)��
        //�����һ������������ôʣ��n-2 ��ô�������ж�������������f(n-2)
        if(number==1)
            return 1;
        if(number==2)
            return 2;
        return jumpFloor(number-1)+jumpFloor(number-2);
    }
};



int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
