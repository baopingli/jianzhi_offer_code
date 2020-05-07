#include<stdio.h>
int count;
//两两比较相邻元素？
//真正的冒泡排序是两两比较。
void BubbleSort(int k[], int n)
{
    int i,j,temp,count1=0,count2=0;
    for(i=0;i<n-1;i++)
    {
        //这种是从左边开始依次是最小的，之和i处的元素交换
        for(j=i+1;j<n;j++)
        {
            count1++;
            if(k[i]>k[j])
            {
                count2++;
                temp=k[i];
                k[i]=k[j];
                k[j]=temp;
            }
        }
    }
    printf("bublesort总共进行了%d次比较,%d移动\n",count1,count2);
}
//从底往上依次交换到最顶端。
void RealBubbleSort(int k[],int n)
{
    int i,j,temp,count1=0,count2=0,flag=1;
    for(int i=0;i<n-1&&flag;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            count1++;
            flag=0;
            //两两比较
            //如果已经排好序了，也就是没有交换了的话就break
            //真正的冒泡排序
            if(k[j]<k[j-1])
            {
                flag=1;
                count2++;
                temp=k[j];
                k[j]=k[j-1];
                k[j-1]=temp;
            }
        }
    }
    printf("realbublesort总共进行了%d次比较,%d移动\n",count1,count2);
}
//选择排序,效率高于冒泡排序一点。
void SelectSort(int k[],int n)
{
    //先比较剩下的所有数据找到最小的然后进行交换
    int i,j,temp,min,count1=0,count2=0;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            count1++;
            if(k[j]<k[min])
            {//min是最小的坐标应该是，一直在比较，
            //找到的最小的。

                min=j;//找到最小的这个值之后再交换，减少交换次数
            }
        }
        if(min!=i)
        {
            count2++;
            temp=k[min];
            k[min]=k[i];
            k[i]=temp;
        }
    }
    printf("SelectSort总共进行了%d次比较,%d移动\n",count1,count2);
}
//直接插入排序,最为简单的
//如果遇到小于的情况就将小的放到temp
//将记录插入到已排好序的里面
//从头到尾发现逆序便替换，然后将小的放到缓冲区，然后用另外一个指针找到小的应该
//在的位置，然后插入，但是其他的序列需要移位。
void StraightInsertSort(int k[],int n)
{
    int i,j,temp,count1,count2;
    for(i=1;i<n;i++)
    {
        count1++;
        if(k[i]<k[i-1])
        {
            temp=k[i];
            for(j=i-1;k[j]>temp&&j>=0;j--)
            {
                count2++;
                k[j+1]=k[j];
            }
            k[j+1]=temp;
        }
    }
    printf("StraightInsertSort总共进行了%d次比较,%d移动\n",count1,count2);
}
//希尔排序
//时间都用到哪去了,抓紧时间
//内排序的算法一开始是n的平方，
//希尔排序突破成nlogn
//基本有序、记录数少
//将序列分开，分开排然后合并
//直接插入排序加上跨度,说实话有点厉害
void ShellSort(int k[],int n)
{
    //将序列分组，然后每小组做插入排序
    //增加了跨度
    //希尔排序修改其他的排序也可以
    int i,j,temp,count1=0,count2=0;
    int gap=n;
    do{
        gap=gap/3+1;
        for(i=gap;i<n;i++)
    {
        count1++;
        if(k[i]<k[i-gap])
        {
            temp=k[i];
            for(j=i-gap;k[j]>temp&&j>=0;j-=gap)
            {
                count2++;
                k[j+gap]=k[j];
            }
            k[j+gap]=temp;
        }
    }
    }while(gap>1);
    printf("ShellSort总共进行了%d次比较,%d移动\n",count1,count2);

}

//堆排序
//选择排序需要 每一次查找都没有利用好上一次的查找的结果
//都需要比较n-1次才行，比较的次数很多
//冒泡排序的改进flag，但是表现不够好，复杂度还是o(n)
//复杂度是nlog(n)
//完全二叉树：1-n-1层结点达到了二叉树最大个数
//当且仅当每一个结点与深度为k的满二叉树中编号1-n的结点一一对应的时候称为完全二叉树
//大顶堆是完全二叉树,根大于子节点
//存成数组的时候是层序的存入
void HeapAdjust(int k[],int s,int n)
{
    //构建大顶堆
    int i,temp;
    temp=k[s];
    for(i=2*s;i<=n;i*=2)
    {
        count++;
        if( i<n && k[i]<k[i+1])
        {
            i++; //将i指向最大的下标
        }
        //将孩子走一遍如果temp大于孩子，就不替换。
        if(temp>=k[i])
        {
            break;
        }
        k[s]=k[i];//互换
        s=i;//循环不是为了找到最大的就行，而是要将k[s]这个数字存放到应该
        //存放的位置。要保证整棵树符合大顶堆。
    }
    k[s]=temp;

}
void swap(int k[],int i,int j)
{
    int temp;
    temp=k[i];
    k[i]=k[j];
    k[j]=temp;
}
void HeadSort(int k[],int n)
{
    //将待排序的序列构造成一个大顶堆
    //然后将堆顶的根节点移到末尾
    //剩下的再构成一个堆，继续进行
    //反复进行
    //从下往上排比较好，从右往左
    int i,j,temp,count1,count2;
    //i,2i,2i+1
    //只排序1开始之后
    for(i=n/2;i>0;i--)
    {
        HeapAdjust(k,i,n);//从下往上调整，构建一个大顶堆
    }//先构建一个大顶堆的排列
    for(i=n;i>1;i--)
    {
        swap(k,1,i);
        //第一个元素和最后一个元素互换
        HeapAdjust(k,1,i-1);
        //互换完之后重新建一个堆
    }
}

//归并排序
//就是假设n个有序的子序列，然后两两归并
//二路归并//递归实现//比较结果返回到list1
void merging(int *list1,int List1_size, int *list2, int List2_size)
{
    int i,j,k;
    int m;
    int temp[10];
    i=j=k=0;
    while(i<List1_size&&j<List2_size)
    {
        if(list1[i]<list2[j])
        {
            temp[k++]=list1[i++];
        }
        else
        {
            temp[k++]=list2[j++];
        }
    }
    while(i<List1_size)
    {
        temp[k++]=list1[i++];
    }
    while(j<List2_size)
    {
        temp[k++]=list2[j++];
    }
    for(m=0;m<(List1_size+List2_size);m++)
    {
        list1[m]=temp[m];
    }



}
void MergeSort(int k[],int n)
{
    if(n>1)
    {
        //用递归来实现
    //需要两个列表，左右两部分
    //将数组分为两半
    int i,j,temp;
    int *list1=k;//这个是关键点
    int List1_size=n/2;
    int *list2=k+n/2;
    int List2_size=n-n/2;
    MergeSort(list1,List1_size);
    MergeSort(list2,List2_size);
    //递归先把字符串分割
    merging(list1,List1_size,list2,List2_size);
    }
}
/*
//归并排序迭代实现(暂时放弃)
//2个一组，4个一组，8个一组
void iterMergeSort(int k[],int n)
{
    int i,left_min,left_max,right_min,right_max;
    //需要临时数组
    int *temp;
    //申请内存
    for(i=1;i<n;i*=2)
    {
        for(left_min=0;left_min<n-i;left_min=right_max)
        {
            right_min=left_max=left_min+i;
            right_max=left_max+i;

            if(right_max>n)
                right_max=n;
            next=0;
            while (left_min<left_max&&right_min<right_max)
            {
                if(k[left_min]<k[right_min])
                {
                    temp[next++]=k[left_min++];
                }
                else
                {
                    temp[next++]=k[right_min++];
                }

            }
            while(left_min<left_max)
            {
                k[--right_min]=k[--left_min];
            }

        }
    }
}
*/





int Partition(int k[],int low,int high)
{
    int point;
    //优化1
    /*
    int m=low+(high-low)/2;
    if(k[low]>k[high])
    {
        swap(k,low,high);
    }
    if(k[m]>k[high])
    {
        swap(k,m,high);
    }
    if(k[m]>k[low])
    {
        swap(k,m,low);
    }
    */
    //三数定中法
    point=k[low];//第一个值
    while(low<high)
    {
        while(low<high&&k[high]>=point)
        {
            high--;
        }
        //需要移动到point左边，交换是不必要的，改成直接赋值
        k[low]=k[high];
        //swap(k,low,high);
        while(low<high&&k[low]<=point)
        {
            low++;
        }
        //右边
        //swap(k,low,high);
        k[high]=k[low];//改成了赋值，优化二

    }
    k[low]=point;
    return low;//返回的是中间点
}

void ISort(int k[],int n)
{
    int i,j,temp,count1,count2;
    for(i=1;i<n;i++)
    {
        count1++;
        if(k[i]<k[i-1])
        {
            temp=k[i];
            for(j=i-1;k[j]>temp&&j>=0;j--)
            {
                count2++;
                k[j+1]=k[j];
            }
            k[j+1]=temp;
        }
    }
    //printf("StraightInsertSort总共进行了%d次比较,%d移动\n",count1,count2);
}

void InsertSort(int k[], int low,int high)
{
    ISort(k+low,high-low+1);
}


void QSort(int k[],int low,int high)
{
    int point;
    //递归排序
    //每一次指定一个基准点，所有小于基准点的元素移到左边，大于基准点的元素移到右边
    //根据基准点跨越式的交换，总的比较次数会减少
    if(high-low>7)
    {
        /*point=Partition(k,low,high);
        QSort(k,low,point-1);
        QSort(k,point+1,high);
        */
       while(low<high)
       {

           point=Partition(k,low,high);
           if(point-low<high-point)//左边长度小于右边
           {
               QSort(k,low,point-1);
                low=point+1;//尾递归:优化四
           }
           else
           {
               QSort(k,point+1,high);
               high=point-1;
           }



       }

    }
    else//小于7调用insertsort 优化三
    {
        InsertSort(k,low,high);
    }




}

//快速排序
void fastSort(int k[],int n)
{
    QSort(k,0,n-1);
}


//快速排序的优化
//如果一开始的点是中间点就很好，如果很大的话，就不好




int main()
{
    int i,a[10]={5,2,6,0,3,9,1,7,4,8};
    fastSort(a,10);
    //printf("总共执行%d次比较",count);
    printf("排序后的结果为：\n");
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
    getchar();
    return 0;
}

//总结
//快速排序使用了递归，大数据排序比较好
//直接插入排序：小规模
//快速排序：大规模
//优化四，尾递归
