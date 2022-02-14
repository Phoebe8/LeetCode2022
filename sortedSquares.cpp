///@file     sortedSquares.h
///@brief    有序数组的平方
///@author   ypz
///@date     2022-02-13
///@version  v1.0.0.0
///@note

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int k = nums.size() - 1;
        vector<int> result(nums.size(), 0);
        for (int i = 0, j = nums.size() - 1; i <= j;)
        {
            if (nums[i] * nums[i] < nums[j] * nums[j])
            {
                result[k--] = nums[j] * nums[j];
                j--;
            }
            else
            {
                result[k--] = nums[i] * nums[i];
                i++;
            }
        }
        return result;
    }
};

int main()
{
    int a[] = { -7, -3, 2, 3, 11 };
    cout << "in:" << endl;
    for (int i = 0; i < (sizeof(a) / sizeof(int)); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl << "out:" << endl;

    vector<int> nums(a, a + sizeof(a) / sizeof(int));
    Solution solution;
    vector<int> result = solution.sortedSquares(nums);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    system("pause");
    return 0;
}