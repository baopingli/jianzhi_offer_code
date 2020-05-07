#include<iostream>
#include<assert.h>
using namespace std;

void Swap(int*a,int pos,int j)
{
    int temp=a[pos];
    a[pos]=a[j];
    a[j]=temp;
}
//创建一个堆的类，我发现c++确实挺有意思的
//因为你去实现了一个实现功能的一个函数
//所以还是很有成就感的

/*最大堆*/

class heap{
//private一般就是类的成员变量和一些别的不能访问的方法
private:
    int *Heap;
    int maxsize;
    //当前堆中的元素个数
    int n;
    //将元素移动到合适的位置
    void shiftdown(int pos)
    {
        //如果是叶子结点就停止
        while(!isLeaf(pos))
        {
            int j=leftchild(pos);
            int rc=rightchild(pos);
            if(rc<n&&Heap[rc]>Heap[j])
            {
                //如果右孩子大于左孩子
                j=rc;
            }
            //如果父节点大于叶子结点
            if(Heap[pos]>Heap[j])
            {
                return;
            }
            //否则就将父节点和叶子结点交换
            Swap(Heap,pos,j);
        }
    }
public:
    //构造函数:用来初始化类的成员变量
    heap(int* h,int  num, int maxi)
    {
        Heap=h;
        n=num;
        maxsize=maxi;
        //将一个数组初始化为堆，所以需要进行堆排
        buildHeap();
    }
    int size()const
    {
        return n;
    }
    bool isLeaf(int pos)const
    {
        return (pos>=n/2)&&(pos<n);
    }
    int leftchild(int pos)const
    {
        return 2*pos+1;
    }
    int leftchild(int pos)const
    {
        return 2*pos+2;
    }
    int parent(int pos) const
    {
        return (pos-1)/2;
    }
    void buildHeap()
    {
        for(int i=n/2-1;i>=0;i--)
        {
            shiftdown(i);
        }
    }
    void insert(const int&it)
    {
        assert(n<maxsize);
        int curr=n++;
        Heap[curr]=it;
        while((curr!=0)&&(Heap[curr]>Heap[parent(curr)]))
        {
            Swap(Heap,curr,parent(curr));
            curr=parent(curr);
        }
    }
    int remove(int pos)
    {
        assert((pos>=0)&&(pos<n));
        if(pos==(n-1))
            n--;
        else
        {
            Swap(Heap,pos,--n);
            while((pos!=0)&&(Heap[pos]>Heap[parent(pos)]))
            {
                Swap(Heap,pos,parent(pos));
                pos=parent(pos);
            }
        }
        if(n!=0)
            shiftdown(pos);
    }
    return Heap[n];


};

