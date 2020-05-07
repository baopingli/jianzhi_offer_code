/*
*题意：牛客最近来了一个新员工Fish，
每天早晨总是会拿着一本英文杂志，写些句子在本子上。
同事Cat对Fish写的内容颇感兴趣，有一天他向Fish借来翻看，
但却读不懂它的意思。例如，“student. a am I”。后来才意识到，
这家伙原来把句子单词的顺序翻转了，正确的句子应该是“I am a student.”。
Cat对一一的翻转这些单词顺序可不在行，你能帮助他么？
*/

/**
思路：
*/

#include<iostream>
using namespace std;

class Solution {
public:
    string ReverseSentence(string str) {
        //先整体反转，然后每一个空格处反转
        reverse(str.begin(),str.end());
        //然后设置两个指针分别反转
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
