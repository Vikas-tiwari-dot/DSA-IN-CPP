#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    int sum =0;
    cout<<"Enter the number n:" << endl;
    cin>>n;
    while(i<=n){
        sum += i;
        i += 1;
    }
    cout<< "sum is : " <<sum <<endl;

}