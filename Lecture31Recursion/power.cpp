#include<iostream> 
using namespace std;

int power(int n) {

    //base case 
    if(n == 0)
        return 1;

    //recursive relation
    return 2 * power(n-1);    
}

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int ans = power(n);

    cout << "2 raised to the power of " << n << " is: " << ans << endl;

    return 0;
}