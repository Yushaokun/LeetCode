#pragma once
/*
���ʱ��2020��11��24��
��Ŀ��ַ��https://leetcode-cn.com/problems/3sum/
*/
#include"LCInclude.h"
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // �ж������Ƿ�Υ��
        if (nums.size() < 3)
            return vector<vector<int>>();

        // ��������
        sort(nums.begin(), nums.end());
        //���Ľ������
        vector<vector<int>> ret;

        int first_index = 0; // ��һ�����ֵ��±�
        // ��������
        for (; first_index < nums.size() - 2; ++first_index)
        {
            // �ظ�ʱ����
            if (first_index - 1 >= 0 && nums[first_index] == nums[first_index - 1])
                continue;

            // Ѱ�Һ�����������
            int target = -nums[first_index]; // �͵�Ŀ��
            int start = first_index + 1;
            int end = nums.size() - 1;
            // ˫ָ�뷨Ѱ��
            while (end > start)
            {
                if (nums[start] + nums[end] > target)
                    --end;
                else if (nums[start] + nums[end] < target)
                    ++start;
                else
                {
                    // �ҵ������
                    vector<int> this_ret = { nums[first_index], nums[start], nums[end] };
                    ret.push_back(this_ret);
                    // �����ظ�
                    ++start;
                    --end;
                    while (start < nums.size() && nums[start] == nums[start - 1])
                        ++start;
                    while (end >= 0 && nums[end] == nums[end + 1])
                        --end;
                }
            }
        }

        // ���ؽ��
        return ret;
    }
};
