#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    cout<<"Enter the number n: " << endl;
    cin>>n;

    while(i<=n){
        int j=1; //if here we put j=i then it will print decreasing order in column in downward
        while(j<=n){
            cout<<i;
            j = j+1;
        }
        cout<<endl;
        i+=1;
    }
}