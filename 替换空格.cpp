/*
*���⣺��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ�%20����
���磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy��
*/

/**
˼·����ͳ���ж��ٿո�Ȼ������ĳ������䣬Ȼ������ָ��һ��ָ���ҿո�
һ��ָ���¼���棬������ָ����ȵ�ʱ��ֹͣ��
*/

#include<iostream>
using namespace std;


class Solution {
public:
	void replaceSpace(char *str,int length) {
         //����ָ��һ���ں�һ����ǰ
        //�Ƚ��ַ�����������//Ȼ��Ӻ���ǰ����
        if(str==nullptr||length<=0)
            return;
        //����ͳ�ƿո�ĸ���
        int countspace=0;
        for(int i=0;i<length;i++)
        {
            if(str[i]==' ')
            {
                countspace++;
            }

        }
        int newlength=length+countspace*2;
        //Ȼ��һ��ָ��ָ�����һ��ָ��ָ��length��ǰ������������Ĳ��ǿո�Ļ��Ͷ���ǰ�ƶ�
        int p1=length-1;
        int p2=newlength-1;
        while(p1!=p2)
        {
            if(str[p1]==' ')
            {
                str[p2]='0';
                str[--p2]='2';
                str[--p2]='%';
            }
            else
            {
                str[p2]=str[p1];
            }
            p2--;
            p1--;

        }

	}
};


int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
