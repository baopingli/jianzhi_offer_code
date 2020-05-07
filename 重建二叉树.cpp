/*
*���⣺����ĳ��������ǰ���������������Ľ����
���ؽ����ö����������������ǰ���������������Ľ���ж������ظ������֡�
��������ǰ���������{1,2,4,7,3,5,6,8}�������������{4,7,2,1,5,3,8,6}��
���ؽ������������ء�
*/

/**
˼·��ǰ��Ϊ�����ң�����Ϊ����ң�ͨ��ǰ��ȷ����Ϊ�Ǹ���Ȼ��ͨ������
����ȷ������������������Ȼ��ݹ顣
*/

#include<iostream>
using namespace std;
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        //���ݶ�������ǰ�����������ؽ�������
        //����û���ظ�ֵ

        //ǰ���Ǹ����ң����Ե�һ���Ǹ���Ȼ���������ҵ�����Ȼ����ߺ��ұߵĳ��Ⱦ�����
        return helper(pre,0,pre.size()-1,vin,0,vin.size()-1);
    }
    TreeNode* helper(vector<int>& pre,int pL,int pR,vector<int>& vin,int vL,int vR)
    {
        //�ж������������ߴ����ұ���˵��Ҫֹͣ��
        if(pL>pR||vL>vR)
            return nullptr;
        int i=0;
        while(i<vin.size())
        {//�ҵ����ڵ�
            if(vin[i]==pre[pL])
                break;
            i++;
        }
        TreeNode* node=new TreeNode(pre[pL]);//�½��ڵ�Ȼ��
        node->left=helper(pre,pL+1,pL+i-vL,vin,vL,i-1);//len=i-1-vlȻ��len����pL+1
        node->right=helper(pre,pR-vR+i+1,pR,vin,i+1,vR);//�������Щ�ߴ�Ĵ�СҪע��
        return node;//����node
    }
};
int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
