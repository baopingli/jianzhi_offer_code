/*
*���⣺�ڶ�ά������ÿһ�ж����մ����ҵ�����˳������
*ÿһ�ж����մ��ϵ��µ�����˳������
*�����һ������������������һ����ά�����һ���������ж��������Ƿ��и�������
*/
/**˼·���ҵ����½ǵ�Ԫ��Ȼ���target�Ƚϣ����С�����������ƶ����������������ƶ���
����������ö����𣿶��ֵĻ�Ч��δ�ظߣ�ÿ�н��ж���Ȼ����ϵ���ȥ���ҡ�
*/

#include<iostream>
using namespace std;
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        //�ж��Ƿ��и�����
        //�ҵ����½ǵĵ�
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
