#include<stdio.h>
int count;
//�����Ƚ�����Ԫ�أ�
//������ð�������������Ƚϡ�
void BubbleSort(int k[], int n)
{
    int i,j,temp,count1=0,count2=0;
    for(i=0;i<n-1;i++)
    {
        //�����Ǵ���߿�ʼ��������С�ģ�֮��i����Ԫ�ؽ���
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
    printf("bublesort�ܹ�������%d�αȽ�,%d�ƶ�\n",count1,count2);
}
//�ӵ��������ν�������ˡ�
void RealBubbleSort(int k[],int n)
{
    int i,j,temp,count1=0,count2=0,flag=1;
    for(int i=0;i<n-1&&flag;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            count1++;
            flag=0;
            //�����Ƚ�
            //����Ѿ��ź����ˣ�Ҳ����û�н����˵Ļ���break
            //������ð������
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
    printf("realbublesort�ܹ�������%d�αȽ�,%d�ƶ�\n",count1,count2);
}
//ѡ������,Ч�ʸ���ð������һ�㡣
void SelectSort(int k[],int n)
{
    //�ȱȽ�ʣ�µ����������ҵ���С��Ȼ����н���
    int i,j,temp,min,count1=0,count2=0;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            count1++;
            if(k[j]<k[min])
            {//min����С������Ӧ���ǣ�һֱ�ڱȽϣ�
            //�ҵ�����С�ġ�

                min=j;//�ҵ���С�����ֵ֮���ٽ��������ٽ�������
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
    printf("SelectSort�ܹ�������%d�αȽ�,%d�ƶ�\n",count1,count2);
}
//ֱ�Ӳ�������,��Ϊ�򵥵�
//�������С�ڵ�����ͽ�С�ķŵ�temp
//����¼���뵽���ź��������
//��ͷ��β����������滻��Ȼ��С�ķŵ���������Ȼ��������һ��ָ���ҵ�С��Ӧ��
//�ڵ�λ�ã�Ȼ����룬����������������Ҫ��λ��
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
    printf("StraightInsertSort�ܹ�������%d�αȽ�,%d�ƶ�\n",count1,count2);
}
//ϣ������
//ʱ�䶼�õ���ȥ��,ץ��ʱ��
//��������㷨һ��ʼ��n��ƽ����
//ϣ������ͻ�Ƴ�nlogn
//�������򡢼�¼����
//�����зֿ����ֿ���Ȼ��ϲ�
//ֱ�Ӳ���������Ͽ��,˵ʵ���е�����
void ShellSort(int k[],int n)
{
    //�����з��飬Ȼ��ÿС������������
    //�����˿��
    //ϣ�������޸�����������Ҳ����
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
    printf("ShellSort�ܹ�������%d�αȽ�,%d�ƶ�\n",count1,count2);

}

//������
//ѡ��������Ҫ ÿһ�β��Ҷ�û�����ú���һ�εĲ��ҵĽ��
//����Ҫ�Ƚ�n-1�β��У��ȽϵĴ����ܶ�
//ð������ĸĽ�flag�����Ǳ��ֲ����ã����ӶȻ���o(n)
//���Ӷ���nlog(n)
//��ȫ��������1-n-1����ﵽ�˶�����������
//���ҽ���ÿһ����������Ϊk�����������б��1-n�Ľ��һһ��Ӧ��ʱ���Ϊ��ȫ������
//�󶥶�����ȫ������,�������ӽڵ�
//��������ʱ���ǲ���Ĵ���
void HeapAdjust(int k[],int s,int n)
{
    //�����󶥶�
    int i,temp;
    temp=k[s];
    for(i=2*s;i<=n;i*=2)
    {
        count++;
        if( i<n && k[i]<k[i+1])
        {
            i++; //��iָ�������±�
        }
        //��������һ�����temp���ں��ӣ��Ͳ��滻��
        if(temp>=k[i])
        {
            break;
        }
        k[s]=k[i];//����
        s=i;//ѭ������Ϊ���ҵ����ľ��У�����Ҫ��k[s]������ִ�ŵ�Ӧ��
        //��ŵ�λ�á�Ҫ��֤���������ϴ󶥶ѡ�
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
    //������������й����һ���󶥶�
    //Ȼ�󽫶Ѷ��ĸ��ڵ��Ƶ�ĩβ
    //ʣ�µ��ٹ���һ���ѣ���������
    //��������
    //���������űȽϺã���������
    int i,j,temp,count1,count2;
    //i,2i,2i+1
    //ֻ����1��ʼ֮��
    for(i=n/2;i>0;i--)
    {
        HeapAdjust(k,i,n);//�������ϵ���������һ���󶥶�
    }//�ȹ���һ���󶥶ѵ�����
    for(i=n;i>1;i--)
    {
        swap(k,1,i);
        //��һ��Ԫ�غ����һ��Ԫ�ػ���
        HeapAdjust(k,1,i-1);
        //������֮�����½�һ����
    }
}

//�鲢����
//���Ǽ���n������������У�Ȼ�������鲢
//��·�鲢//�ݹ�ʵ��//�ȽϽ�����ص�list1
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
        //�õݹ���ʵ��
    //��Ҫ�����б�����������
    //�������Ϊ����
    int i,j,temp;
    int *list1=k;//����ǹؼ���
    int List1_size=n/2;
    int *list2=k+n/2;
    int List2_size=n-n/2;
    MergeSort(list1,List1_size);
    MergeSort(list2,List2_size);
    //�ݹ��Ȱ��ַ����ָ�
    merging(list1,List1_size,list2,List2_size);
    }
}
/*
//�鲢�������ʵ��(��ʱ����)
//2��һ�飬4��һ�飬8��һ��
void iterMergeSort(int k[],int n)
{
    int i,left_min,left_max,right_min,right_max;
    //��Ҫ��ʱ����
    int *temp;
    //�����ڴ�
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
    //�Ż�1
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
    //�������з�
    point=k[low];//��һ��ֵ
    while(low<high)
    {
        while(low<high&&k[high]>=point)
        {
            high--;
        }
        //��Ҫ�ƶ���point��ߣ������ǲ���Ҫ�ģ��ĳ�ֱ�Ӹ�ֵ
        k[low]=k[high];
        //swap(k,low,high);
        while(low<high&&k[low]<=point)
        {
            low++;
        }
        //�ұ�
        //swap(k,low,high);
        k[high]=k[low];//�ĳ��˸�ֵ���Ż���

    }
    k[low]=point;
    return low;//���ص����м��
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
    //printf("StraightInsertSort�ܹ�������%d�αȽ�,%d�ƶ�\n",count1,count2);
}

void InsertSort(int k[], int low,int high)
{
    ISort(k+low,high-low+1);
}


void QSort(int k[],int low,int high)
{
    int point;
    //�ݹ�����
    //ÿһ��ָ��һ����׼�㣬����С�ڻ�׼���Ԫ���Ƶ���ߣ����ڻ�׼���Ԫ���Ƶ��ұ�
    //���ݻ�׼���Խʽ�Ľ������ܵıȽϴ��������
    if(high-low>7)
    {
        /*point=Partition(k,low,high);
        QSort(k,low,point-1);
        QSort(k,point+1,high);
        */
       while(low<high)
       {

           point=Partition(k,low,high);
           if(point-low<high-point)//��߳���С���ұ�
           {
               QSort(k,low,point-1);
                low=point+1;//β�ݹ�:�Ż���
           }
           else
           {
               QSort(k,point+1,high);
               high=point-1;
           }



       }

    }
    else//С��7����insertsort �Ż���
    {
        InsertSort(k,low,high);
    }




}

//��������
void fastSort(int k[],int n)
{
    QSort(k,0,n-1);
}


//����������Ż�
//���һ��ʼ�ĵ����м��ͺܺã�����ܴ�Ļ����Ͳ���




int main()
{
    int i,a[10]={5,2,6,0,3,9,1,7,4,8};
    fastSort(a,10);
    //printf("�ܹ�ִ��%d�αȽ�",count);
    printf("�����Ľ��Ϊ��\n");
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
    getchar();
    return 0;
}

//�ܽ�
//��������ʹ���˵ݹ飬����������ȽϺ�
//ֱ�Ӳ�������С��ģ
//�������򣺴��ģ
//�Ż��ģ�β�ݹ�
