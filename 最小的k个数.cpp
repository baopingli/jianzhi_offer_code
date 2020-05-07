/*
*���⣺����n���������ҳ�������С��K������
��������4,5,1,6,2,7,3,8��8�����֣�����С��4��������1,2,3,4,��
*/

/**
˼·��
���������������
1������partition�ķ�������Ϊ�����������û��˳�򣬸�����k��ô
���ǿ��Ը���partition�ķ����������Ϊ����������ߵ�С��k���������ұ�
����k������������������һ�ַ�����ʵ�֡�
2�����ڶѵķ����������ں������ݵĴ���������Ҫ��չ������������ʵ��
Ҳ���Ƕ��������С�������Ƶ���С���ô��дһ��ʹ��stl���������ͣ�
������һ����������������С�ѣ����Ҫ����С��4�����ֵĻ���
�������ʵ��������������Ĳ���ɾ���Ͳ����������Ologk��ʱ�䣬
set��multist���ǻ��ں����ʵ�ֵġ�
*/

#include<iostream>
using namespace std;
typedef multiset<int ,greater<int>> intSet;
typedef multiset<int ,greater<int>>::iterator setIterator;

//partition���ص���һ��index,�������ǻ���Ҫһ������ķ�Χ
int partition(int* x,int k,int left,int right)//�������������±�
{
    //��û�����ӱ߽��ж�����
    if(data==nullptr||length<=0||start<=0||end>=length)
        throw new exception("invalid paramaters");
    //���Ȳ��������index
    int index=rand()%(right-left+1)+left;
    //Ȼ����ǽ�index�� �������һ������
    Swap(&x[index],&x[right]);
    //Ȼ���½�һ������������¼��x[index]С����
    int small=left-1;
    //Ȼ����Ǵ����ұȽ�Ȼ�����С��x[index]��ô�ͺ�
    //���small��Ӧ�Ľ���
    for(int i=left;i<right-1;i++)
    {
        if(x[i]<=x[right])
        {
            small++;
            if(small!=i)//����ж�����ͬ�������á�
            {
                Swap(&x[i],&x[small]);
            }

        }

    }
    small++;
    Swap(&x[small],&x[left]);//�����Ӧ�ĵ�ַ
    return index;//���index�����Ǹ�λ�û��߷���small���ɡ�
}

vector<int> findmink(vector<int> input,int k)
{
    //����һ�½�vectorת��Ϊint����
    int *x;
    for(int i=0;i<input.size();i++)
    {
        x[i]=input[i];
    }
    //������һ��index
    int left=0;
    int right=input.size()-1;
    int index=partition(x,k,left,right);
    while(index!=k-1)
    {
        if(index>k-1)
        {
            //���index����k��ô��x[k]С��һ����index��
            right=index-1;
            index=partition(x,k,left,right);
        }
        else
        {
            left=index+1;
            index=partition(x,k,left,right);
        }

    }
    //���ھ����Ѿ��������˵�����ֱ�ӷ���ǰk���Ϳ�����
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
        leastNumbers.clear();//�Ƚ�������ա�������һ��ȫ�ֵ�������
        if(k<1||data.size()<k)
            return;
        vector<int>::const_iterator iter=data.begin();//vector������
        for(;iter!=data.end();iter++)
        {
            if(leastNumbers.size()<k)
                leastNumbers.insert(*iter);//set��ʹ�õ���insert
            else
            {
                //�Ƚ��������Ԫ�����С�ڵ�ǰ��ԭ��ô�����Ƴ����Ԫ��Ȼ��
                //�����µ�Ԫ�ء�
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
