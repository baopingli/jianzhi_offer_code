/*
*���⣺��ʵ�������������ֱ��������л��ͷ����л�������

�����������л���ָ����һ�ö���������ĳ�ֱ�����ʽ�Ľ����ĳ�ָ�ʽ����Ϊ�ַ�����
�Ӷ�ʹ���ڴ��н��������Ķ��������Գ־ñ��档���л����Ի����������򡢺���
����Ķ�����������ʽ�������޸ģ����л��Ľ����һ���ַ��������л�ʱͨ��
ĳ�ַ��ű�ʾ�սڵ㣨#������ �� ��ʾһ�����ֵ�Ľ�����value!����

�������ķ����л���ָ������ĳ�ֱ���˳��õ������л��ַ������str���ع���������
*/

/**
˼·��
*/

#include<iostream>
using namespace std;

/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    string sHelper(TreeNode *node)
    {
        if(node==nullptr)
            return "#";
        return to_string(node->val)+","+sHelper(node->left)
            +","+sHelper(node->right);
    }
    char* Serialize(TreeNode *root) {
    //char��ʵ���ò�������������ʹ��stringȻ��ת��Ϊchar
        string s=sHelper(root);
        char* ret=new char[s.length()+1];
        //��stringת��Ϊchar����
        strcpy(ret,const_cast<char*>(s.c_str()));
        return ret;
    }
    TreeNode* dHelper(stringstream &ss)
    {
        string str;
        //��istream��getline
        getline(ss,str,',');//d�����롣
        //Ӧ��������һ�����žͻ����һ��getline��
        //Ȼ���ж�����ַ��ǲ���#��
        if(str=="#")
            return nullptr;
        else
        {
            TreeNode* node=new TreeNode(stoi(str));
            node->left=dHelper(ss);
            node->right=dHelper(ss);
            return node;
        }
    }
    TreeNode* Deserialize(char *str) {
        stringstream ss(str);
        return dHelper(ss);
    }
};

int  main()
{

    cout<<"hello"<<endl;
    return 0;
}
