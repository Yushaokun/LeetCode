/*
���ʱ�䣺2020��11��16��
��Ŀ��ַ��https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii/
*/
#pragma once
#include"LCInclude.h"
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // �ж�nums��Ԫ���������ų��������
        if (nums.size() <= 2)
        {
            return nums.size();
        }

        //һ������Ĵ���
        const int MAX_TIMES = 2; // �����ظ���������2
        int cur_times = 1; // ��ǰԪ�ص��ظ�����,��ʼʱΪ��һ��Ԫ�صĴ���1
        int slow = 0; // ��ָ���0��ʼ
        int fast = 1; // ��ָ���1��ʼ

        //ʹ�ÿ�ָ����������б���
        for (; fast < nums.size(); ++fast)
        {
            if (nums[fast] == nums[slow] && cur_times < MAX_TIMES)
            {
                // �ظ�,���ظ�����С�������ظ�����
                nums[++slow] = nums[fast]; // ����Ԫ�����
                ++cur_times; //�����ظ�����
            }
            else if (nums[fast] != nums[slow])
            {
                // ������Ԫ��ʱ
                nums[++slow] = nums[fast]; // ����Ԫ�����
                cur_times = 1; // ���ü���
            }
        }

        // ���ؽ��
        return slow + 1;
    }
};

//���Գ���
void test_main()
{
    vector<int> test = { 1,1,2,2,3,3,4,5,5,6,7,7,8 };
    int ret = Solution().removeDuplicates(test);
    for (int i = 0; i < test.size(); ++i)
    {
        cout << test[i] << ", ";
    }
    cout << endl;
}


