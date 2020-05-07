/*
*题意：输入n个整数，找出其中最小的K个数。
例如输入4,5,1,6,2,7,3,8这8个数字，则最小的4个数字是1,2,3,4,。
*/

/**
思路：
这道题两种做法：
1、基于partition的方法，因为首先这个数组没有顺序，给定了k那么
我们可以根据partition的方法将数组分为两个部分左边的小于k处的数，右边
大于k处的数，所以先用着一种方法来实现。
2、基于堆的方法，适用于海量数据的处理，但是需要扩展到堆用数组来实现
也就是堆排序，这个小甲鱼的视频上有。那么先写一个使用stl的数据类型，
就是找一个数据容器比如最小堆，如果要找最小的4个数字的话。
红黑树来实现容器，红黑树的查找删除和插入操作都是Ologk的时间，
set和multist都是基于红黑树实现的。
*/

#include<iostream>
using namespace std;
typedef multiset<int ,greater<int>> intSet;
typedef multiset<int ,greater<int>>::iterator setIterator;

//partition返回的是一个index,可能我们还需要一个数组的范围
int partition(int* x,int k,int left,int right)//传入的是数组的下标
{
    //我没有增加边界判断条件
    if(data==nullptr||length<=0||start<=0||end>=length)
        throw new exception("invalid paramaters");
    //首先产生随机数index
    int index=rand()%(right-left+1)+left;
    //然后就是将index处 数和最后一个交换
    Swap(&x[index],&x[right]);
    //然后新建一个变量用来记录比x[index]小的数
    int small=left-1;
    //然后就是从左到右比较然后如果小于x[index]那么就和
    //这个small对应的交换
    for(int i=left;i<right-1;i++)
    {
        if(x[i]<=x[right])
        {
            small++;
            if(small!=i)//这个判断条件同样有作用。
            {
                Swap(&x[i],&x[small]);
            }

        }

    }
    small++;
    Swap(&x[small],&x[left]);//传入对应的地址
    return index;//这个index就是那个位置或者返回small均可。
}

vector<int> findmink(vector<int> input,int k)
{
    //尝试一下将vector转换为int数组
    int *x;
    for(int i=0;i<input.size();i++)
    {
        x[i]=input[i];
    }
    //首先走一个index
    int left=0;
    int right=input.size()-1;
    int index=partition(x,k,left,right);
    while(index!=k-1)
    {
        if(index>k-1)
        {
            //如果index大于k那么比x[k]小的一定在index中
            right=index-1;
            index=partition(x,k,left,right);
        }
        else
        {
            left=index+1;
            index=partition(x,k,left,right);
        }

    }
    //现在就是已经交换好了的数组直接返回前k个就可以了
    vector<int> res;
    for(int i=0;i<k;i++)
    {
        res.push_back(x[i]);
    }
    return res;

}

void Swap(int *a,int *b)
{
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}


public:
     vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> res;
        if(input.size()<=0||k>input.size())
            return res;
        inSet leastNumbers;
        helper(input,leastNumbers,k);
        for(auto x:leastNumbers)
        {
            res.push_back(x);
        }
        return res;
    }
    void helper(const vector<int>& data,inSet&leastNumbers, int k)
    {
        leastNumbers.clear();//先将容器清空。定义了一个全局的容器。
        if(k<1||data.size()<k)
            return;
        vector<int>::const_iterator iter=data.begin();//vector迭代器
        for(;iter!=data.end();iter++)
        {
            if(leastNumbers.size()<k)
                leastNumbers.insert(*iter);//set中使用的是insert
            else
            {
                //比较最上面的元素如果小于当前的原那么就先移除这个元素然后
                //插入新的元素。
                setIterator iterGreatest=leastNumbers.begin();
                if(*iter<*(leastNumbers.begin()))
                {
                    leastNumbers.erase(iterGreatest);
                    leastNumbers.insert(*iter);
                }
            }
        }
    }









int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
