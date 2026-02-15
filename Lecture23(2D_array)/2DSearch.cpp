#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int rowIndex = 0;
        int colIndex = col - 1;
        
        while (rowIndex < row && colIndex >= 0) {
            int element = matrix[rowIndex][colIndex];
            
            if (element == target) {
                return 1;
            }
            
            if (element < target) {
                rowIndex++;
            } else {
                colIndex--;
            }
        }
        return 0;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16}
    };

    int target = 8;

    if (sol.searchMatrix(matrix, target))
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}
