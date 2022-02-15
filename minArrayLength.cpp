///@file     minArrayLength.h
///@brief    长度最小的子数组
///@author   ypz
///@date     2022-02-15
///@version  v1.0.0.0
///@note

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result = INT32_MAX;
        int i = 0;
        int sum = 0;
        int subLength = 0;
        for (int j = 0; j<nums.size(); j++)
        {
            sum += nums[j];
            while (sum >= target)
            {
                subLength = j - i + 1;
                result = result>subLength ? subLength : result;
                sum -= nums[i++];
            }
        }
        return result == INT32_MAX ? 0 : result;
    }
};

int main()
{
    int a[] = { 2,3,1,2,4,3 };
    cout << "in:" << endl;
    for (int i = 0; i < (sizeof(a) / sizeof(int)); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl << "out:" << endl;

    vector<int> nums(a, a + sizeof(a) / sizeof(int));
    Solution solution;
    int result = solution.minSubArrayLen(7,nums);
    cout << result << endl;

    system("pause");
    return 0;
}
