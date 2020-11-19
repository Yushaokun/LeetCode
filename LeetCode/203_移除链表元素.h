#pragma once
/*
���ʱ��2020��11��19��
��Ŀ��ַ��https://leetcode-cn.com/problems/remove-linked-list-elements/
*/
#include"LCInclude.h"
using namespace std;

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // �п�
        if (head == nullptr)
            return head;

        // ��ȥ���ײ�һ����Ԫ��
        while (head != nullptr && head->val == val)
            head = head->next;

        // ������
        ListNode* it = head;
        // ����
        while (it != nullptr && it->next != nullptr)
        {
            // ������Ҫɾ����Ԫ��
            if (it->next->val == val)
            {
                // ��ָ�룬̽����һ��������val�Ľڵ�
                ListNode* fast = it->next;
                while (fast != nullptr && fast->val == val)
                {
                    fast = fast->next;
                }
                // ɾ���м����val�Ľڵ�
                it->next = fast;
            }
            // ����
            it = it->next;
        }

        return head;
    }
};