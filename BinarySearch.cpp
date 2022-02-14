// ¶þ·Ö²éÕÒ

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right)
        {
            int middle = left + ((right - left) >> 1);
            if (nums[middle] > target)
            {
                right = middle - 1;
            }
            else if (nums[middle] < target)
            {
                left = middle + 1;
            }
            else
            {
                return middle;
            }
        }
        return -1;
    }
};

int main()
{
    int a[] = { -1,0,3,5,9,12 };
    cout << "in:" << endl;
    for (int i = 0; i < (sizeof(a) / sizeof(int)); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl << "out:" << endl;

    vector<int> nums(a, a + sizeof(a) / sizeof(int));
    Solution solution;
    cout << solution.search(nums, 9) << endl;

    system("pause");
    return 0;
}