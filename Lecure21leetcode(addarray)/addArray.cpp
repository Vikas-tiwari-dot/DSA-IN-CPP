#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseVec(vector<int> v) {
    int s = 0;
    int e = v.size() - 1;

    while (s < e)
        swap(v[s++], v[e--]);

    return v;
}

vector<int> findArraySum(vector<int>& a, int n,
                         vector<int>& b, int m) {

    int i = n - 1, j = m - 1;
    vector<int> ans;
    int carry = 0;

    while (i >= 0 && j >= 0) {
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        ans.push_back(sum % 10);
        i--; j--;
    }

    while (i >= 0) {
        int sum = a[i] + carry;
        carry = sum / 10;
        ans.push_back(sum % 10);
        i--;
    }

    while (j >= 0) {
        int sum = b[j] + carry;
        carry = sum / 10;
        ans.push_back(sum % 10);
        j--;
    }

    while (carry) {
        ans.push_back(carry % 10);
        carry /= 10;
    }

    return reverseVec(ans);
}

int main() {
    vector<int> a = {1,2,3};
    vector<int> b = {9,9};

    vector<int> result = findArraySum(a, a.size(), b, b.size());

    for(int x : result)
        cout << x << " ";

    return 0;
}
