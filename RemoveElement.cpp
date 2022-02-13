///@file     RemoveElement.h
///@brief    ÒÆ³ýÔªËØ
///@author   ypz
///@date     2022-02-13
///@version  v1.0.0.0
///@note

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slowIndex = 0;
        for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++)
        {
            if (nums[fastIndex] != val)
            {
                nums[slowIndex] = nums[fastIndex];
                slowIndex++;
            }
        }
        return slowIndex;
    }
};

int main()
{
    int a[] = { 0,1,2,2,3,0,4,2 };
    vector<int> nums(a, a + sizeof(a) / sizeof(int));
    Solution solution;
    cout << solution.removeElement(nums, 2) << endl;
    system("pause");
    return 0;
}