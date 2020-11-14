#pragma once
#include"LCInclude.h"
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
        {
            // ����Ϊ��ʱֱ�ӷ���0
            return 0;
        }
        else if (nums.size() == 1)
        {
            // ����ֻ��һ��Ԫ�ص�ʱ��ֱ�ӷ���1
            return 1;
        }

        int index_slow = 0;       // ��ָ��
        int index_fast = 1;       // ��ָ��

        // ��ָ���������
        for (; index_fast < nums.size(); ++index_fast)
        {
            // ��ָ����������ظ���Ԫ�ص�ʱ��������ظ���Ԫ��д�ص���ָ�봦
            if (nums[index_fast] != nums[index_fast - 1])
            {
                // �Ż���ֻ�п���ָ�벻���ڵ�ʱ�����Ҫд��
                if (index_fast - index_slow > 1)
                    nums[index_slow + 1] = nums[index_fast];
                // ��ָ�벽��
                ++index_slow;
            }
        }

        //���ز��ظ����ֵĳ���
        return index_slow + 1;
    }
};

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
