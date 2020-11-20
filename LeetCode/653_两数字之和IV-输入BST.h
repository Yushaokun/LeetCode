#pragma once
/*
���ʱ��2020��11��20��
��Ŀ��ַ��https://leetcode-cn.com/problems/two-sum-iv-input-is-a-bst/
*/
#include"LCInclude.h"
using namespace std;

class Solution {
public:
    unordered_set<int> counter;
    bool findTarget(TreeNode* root, int k) {
        // �п�
        if (root == nullptr)
            return false;

        if (counter.count(k - root->val) > 0) // ��ǰ�ڵ�������
        {
            return true;
        }
        else // ��ǰ�ڵ㲻������
        {
            // �Ѹýڵ����hash��
            counter.insert(root->val);
            // ����̽�������ӽڵ�
            return findTarget(root->right,k) || findTarget(root->left,k);
        }

        return false;
    }   
};
