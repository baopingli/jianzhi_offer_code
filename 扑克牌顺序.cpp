/*
*题意：LL今天心情特别好,因为他去买了一副扑克牌,
发现里面居然有2个大王,2个小王(一副牌原本是54张^_^)...他
随机从中抽出了5张牌,想测测自己的手气,看看能不能抽到顺子,
如果抽到的话,他决定去买体育彩票,嘿嘿！！“红心A,黑桃3,小王
,大王,方片5”,“Oh My God!”不是顺子.....LL不高兴了,他想了想
,决定大\小 王可以看成任何数字,并且A看作1,J为11,Q为12,K为13
。上面的5张牌就可以变成“1,2,3,4,5”(大小王分别看作2和4),“So L
ucky!”。LL决定去买体育彩票啦。 现在,要求你使用这幅牌模拟上面
的过程,然后告诉我们LL的运气如何， 如果牌能组成顺子就输出true，
否则就输出false。为了方便起见,你可以认为大小王是0。
*/

/**
思路：先排序然后统计gap
*/

#include<iostream>
using namespace std;
class Solution {
public:
    bool IsContinuous( vector<int> numbers ) {
        if(numbers.size()<=0)//特殊条件
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
            if(numbers[small]==numbers[big])//对子返回false
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
