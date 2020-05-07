/*
*题意：请实现两个函数，分别用来序列化和反序列化二叉树

二叉树的序列化是指：把一棵二叉树按照某种遍历方式的结果以某种格式保存为字符串，
从而使得内存中建立起来的二叉树可以持久保存。序列化可以基于先序、中序、后序、
层序的二叉树遍历方式来进行修改，序列化的结果是一个字符串，序列化时通过
某种符号表示空节点（#），以 ！ 表示一个结点值的结束（value!）。

二叉树的反序列化是指：根据某种遍历顺序得到的序列化字符串结果str，重构二叉树。
*/

/**
思路：
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
    //char其实不好操作，采用首先使用string然后转换为char
        string s=sHelper(root);
        char* ret=new char[s.length()+1];
        //将string转换为char数组
        strcpy(ret,const_cast<char*>(s.c_str()));
        return ret;
    }
    TreeNode* dHelper(stringstream &ss)
    {
        string str;
        //是istream的getline
        getline(ss,str,',');//d得输入。
        //应该是输入一个逗号就会进行一次getline。
        //然后判断这个字符是不是#？
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
