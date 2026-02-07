#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    // 2's complement (32-bit)
    unsigned int num = n;

    int i = 0;
    long long ans = 0;

    while (i < 32) {
        int bit = num & 1;
        ans = bit * (long long)pow(10, i) + ans;
        num >>= 1;
        i++;
    }

    cout << "2's Complement Binary: " << ans << endl;
    return 0;
}
