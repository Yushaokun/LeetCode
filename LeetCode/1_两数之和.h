#pragma once
/*
���ʱ��2020��11��19��
��Ŀ��ַ��https://leetcode-cn.com/problems/two-sum/
*/
#include"LCInclude.h"
using namespace std;

class Solution {
public:
    // ���������е�ÿһ������x�Ƿ������һ������ʹ�� target - x
    vector<int> twoSum(vector<int>& nums, int target) {
        // ���ù�ϣ��洢 target-x ���±�
        unordered_map<int, int> reference;

        for (int i = 0; i < nums.size(); ++i)
        {
            // ����Ŀ��ֵ
            int target_index = reference[target - nums[i]];
            if (target_index != 0)
            {
                return vector<int>{target_index - 1, i};
            }

            // ���Լ�ֵ�����ϣ��
            reference[nums[i]] = i + 1;
        }

        // �޽��򷵻ؿ�vector
        return vector<int>{};
    }
};
