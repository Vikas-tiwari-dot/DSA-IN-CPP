#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int find_pivot(vector<int> v) {
        int s = 0, e = v.size() - 1;

        while (s < e) {
            int mid = s + (e - s) / 2;

            if (v[mid] < v[mid + 1])
                s = mid + 1;
            else
                e = mid;
        }
        return s;
    }

    int peakIndexInMountainArray(vector<int>& arr) {
        return find_pivot(arr);
    }
};

int main() {
    Solution sol;
    vector<int> arr = {0,2,5,7,6,3,1};

    cout <<"Index of Montain aray is : " <<  sol.peakIndexInMountainArray(arr) <<"\n";

    return 0;
}

// Pehle numbers strictly increase hote hain
// Ek point par maximum (peak) aata hai
// Uske baad numbers strictly decrease hote hain


//0 → 2 → 5 → 7   (increasing)
//            ↓
//              6 → 3 → 1 (decreasing)
//mid aur mid+1 compare karo
//v[mid] < v[mid+1]


