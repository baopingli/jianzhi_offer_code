/*
*���⣺ţ���������һ����Ա��Fish��
ÿ���糿���ǻ�����һ��Ӣ����־��дЩ�����ڱ����ϡ�
ͬ��Cat��Fishд�������ĸ���Ȥ����һ������Fish����������
��ȴ������������˼�����磬��student. a am I������������ʶ����
��һ�ԭ���Ѿ��ӵ��ʵ�˳��ת�ˣ���ȷ�ľ���Ӧ���ǡ�I am a student.����
Cat��һһ�ķ�ת��Щ����˳��ɲ����У����ܰ�����ô��
*/

/**
˼·��
*/

#include<iostream>
using namespace std;

class Solution {
public:
    string ReverseSentence(string str) {
        //�����巴ת��Ȼ��ÿһ���ո񴦷�ת
        reverse(str.begin(),str.end());
        //Ȼ����������ָ��ֱ�ת
        int lasti=-1;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==' ')
            {
                //if(end==start) continue;
                reverse(str.begin()+lasti+1,str.begin()+i);
                lasti=i;
            }
        }
        reverse(str.begin()+lasti+1,str.end());
        return str;

    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
