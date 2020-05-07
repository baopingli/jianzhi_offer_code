#include<iostream>
#include<assert.h>
using namespace std;

void Swap(int*a,int pos,int j)
{
    int temp=a[pos];
    a[pos]=a[j];
    a[j]=temp;
}
//����һ���ѵ��࣬�ҷ���c++ȷʵͦ����˼��
//��Ϊ��ȥʵ����һ��ʵ�ֹ��ܵ�һ������
//���Ի��Ǻ��гɾ͸е�

/*����*/

class heap{
//privateһ�������ĳ�Ա������һЩ��Ĳ��ܷ��ʵķ���
private:
    int *Heap;
    int maxsize;
    //��ǰ���е�Ԫ�ظ���
    int n;
    //��Ԫ���ƶ������ʵ�λ��
    void shiftdown(int pos)
    {
        //�����Ҷ�ӽ���ֹͣ
        while(!isLeaf(pos))
        {
            int j=leftchild(pos);
            int rc=rightchild(pos);
            if(rc<n&&Heap[rc]>Heap[j])
            {
                //����Һ��Ӵ�������
                j=rc;
            }
            //������ڵ����Ҷ�ӽ��
            if(Heap[pos]>Heap[j])
            {
                return;
            }
            //����ͽ����ڵ��Ҷ�ӽ�㽻��
            Swap(Heap,pos,j);
        }
    }
public:
    //���캯��:������ʼ����ĳ�Ա����
    heap(int* h,int  num, int maxi)
    {
        Heap=h;
        n=num;
        maxsize=maxi;
        //��һ�������ʼ��Ϊ�ѣ�������Ҫ���ж���
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

