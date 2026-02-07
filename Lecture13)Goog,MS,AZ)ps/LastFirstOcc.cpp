#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int>& arr, int n, int key) {
    int s = 0, e = n-1;
    int ans = -1;

    while(s <= e) {
        int mid = s + (e - s) / 2;

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {
    int s = 0, e = n-1;
    int ans = -1;

    while(s <= e) {
        int mid = s + (e - s) / 2;

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    return { firstOcc(arr, n, k), lastOcc(arr, n, k) };
}

int main() {
    vector<int> arr = {1,2,3,3,3,4,5};
    int k = 3;

    pair<int,int> ans = firstAndLastPosition(arr, arr.size(), k);
    cout << ans.first << " " << ans.second << endl;

    return 0;
}
