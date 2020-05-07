/*
*题意：如何得到一个数据流中的中位数？如果从数据流中读出奇数个数值，
那么中位数就是所有数值排序之后位于中间的数值。如果从数据流中读出偶数个数值，
那么中位数就是所有数值排序之后中间两个数的平均值。
我们使用Insert()方法读取数据流，使用GetMedian()方法获取当前读取数据的中位数。
*/

/**
思路：因为是数据流，如果要尽可能的获得getmedian快的话就要
建立两个堆的话就是O1的时间复杂度，on的空间复杂度。
下面的方法相当于直接使用了stl中将数组作为堆的函数。
*/

#include<iostream>
using namespace std;

class Solution {
private:
    vector<int> min;
    vector<int> max;
public:
    //用一个最大堆来存左边的数据用一个最小堆来存右边的数据
    //要平均分配
    //两个堆的数据数目之差不能超过1
    //在数据总数目为偶数的时候把新数据插入最小堆，奇数的时候插入最大堆
    void Insert(int num)
    {
        if((min.size()+max.size())&1==0)
        {
            //偶数的时候应该插入最小堆，一个都没有的时候插入最小堆。
            if(max.size()>0&&num<max[0])
            {
                //但是如果这个数比最大堆的小，那么先插入最大堆然后拿出最大插入到最小堆
                max.push_back(num);
                push_heap(max.begin(),max.end(),less<int>());//从大到小排
                num=max[0];
                //pop然后排序
                pop_heap(max.begin(),max.end(),less<int>());
                max.pop_back();//弹出来。
            }
            min.push_back(num);
            push_heap(min.begin(),min.end(),greater<int>());
        }
        else//往最大堆中插入
        {
            if(min.size()>0&&num>min[0])
            {
                //先插入最小堆
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
        if((size&1)==1)//奇数
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
