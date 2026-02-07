#include<iostream>
using namespace std;
#include<math.h>

int main(){

    int n;
    int i=0;

    cout<<"Enter the value of n: " << endl;
    cin>>n;

    int ans =0;

    while(n!=0){
        
        int bit = n& 1;
        ans = (bit*pow(10,i))+ans;
        n = n>>1;
        i++;
    }
    cout<< "Answer is " << ans << endl;
}