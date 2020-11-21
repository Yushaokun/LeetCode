#pragma once
/*
���ʱ��2020��11��19��
��Ŀ��ַ��https://leetcode-cn.com/problems/two-sum-ii-input-array-is-sorted/
*/
#include"LCInclude.h"

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0; // ��ָ��
        int right = numbers.size() - 1; // ��ָ��
        while (right > left)
        {
            int num = numbers[left] + numbers[right]; // ��ǰ����ָ����ָ������֮��
            if (num < target) // ������֮��С��Ŀ��
            {
                // ��ָ�����ƣ���һ������֮�ͱ��
                ++left;
            }
            else if (num > target) // ������֮�ʹ���Ŀ��
            {
                // ��ָ������
                --right;
            }
            else // ��ȵ����
            {
                return vector<int>{left + 1, right + 1};
            }
        }

        return vector<int>{};
    }
};

