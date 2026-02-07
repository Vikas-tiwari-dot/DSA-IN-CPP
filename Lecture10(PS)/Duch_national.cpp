#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0;
        int high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

int main() {
    vector<int> nums = {2,0,2,1,1,0};

    Solution obj;
    obj.sortColors(nums);

    for (int x : nums)
        cout << x << " ";

    return 0;
}
