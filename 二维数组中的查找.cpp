/*
*题意：在二维数组中每一行都按照从左到右递增的顺序排序，
*每一列都按照从上到下递增的顺序排序。
*请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
*/
/**思路：找到左下角的元素然后和target比较，如果小于它就向右移动，大于它就向上移动。
这个还可以用二分吗？二分的话效率未必高，每行进行二分然后从上到下去查找。
*/

#include<iostream>
using namespace std;
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        //判断是否含有该整数
        //找到左下角的点
        if(array.size()==0||array[0].size()==0)
            return false;
        int m=array.size()-1;
        int n=0;
        while(m>=0&&n<=array[0].size()-1)
        {
            if(array[m][n]==target)
                return true;
            else if (array[m][n]>target)
                m--;
            else
                n++;
        }
        return false;
    }
};

int main()
{
    cout<<"hello"<<endl;
    return 0;
}
