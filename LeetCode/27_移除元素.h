/*
���ʱ��2020��11��17��
��Ŀ��ַ��https://leetcode-cn.com/problems/remove-element/
*/
#pragma once
#include"LCInclude.h"
#include"27_�Ƴ�Ԫ��.h"
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = -1; // ��������±�
        // ��������
        for (int i = 0; i < nums.size(); ++i)
        {
            // �����ǰ���ֲ�����Ҫɾ�������������������
            if (nums[i] != val)
            {
                nums[++index] = nums[i];
            }
        }

        //����������ĳ���
        return index + 1;
    }
};

// ���Գ���
void test_main()
{
    vector<int> test = { 1,1,2,2,3,3,4,5,5,6,7,7,8 };
    int ret = Solution().removeElement(test, 3);
    for (int i = 0; i < test.size(); ++i)
    {
        cout << test[i] << ", ";
    }
    cout << endl;
}