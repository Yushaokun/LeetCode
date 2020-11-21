/*
���ʱ��2020��11��18��
��Ŀ��ַ��https://leetcode-cn.com/problems/delete-node-in-a-linked-list/
*/
#pragma once
#include"LCInclude.h"

class Solution {
public:
    void deleteNode(ListNode* node) {
        // �п�
        if (node == nullptr)
            return;

        // ɾ������
        if (node->next != nullptr)
        {
            // �ǿյ�ʱ�� ��һ���ڵ��Ԫ����ǰ������ɾ����һ���ڵ�
            node->val = node->next->val;
            node->next = node->next->next;
        }
    }
};

// ���Գ���
void test_main()
{
    ListNode* head = new ListNode(1);
    ListNode* it = head;
    ListNode* removeNode = nullptr;
    const int RemoveNumber = 3; // ��Ҫɾ��������
    for (int i = 2; i <= 10; ++i)
    {
        it->next = new ListNode(i);
        it = it->next;
        if (it->val == RemoveNumber)
            removeNode = it;
    }

    Solution().deleteNode(removeNode);
    it = head;
    while (it != nullptr)
    {
        cout << it->val << ",";
        it = it->next;
    }
    cout << endl;
}