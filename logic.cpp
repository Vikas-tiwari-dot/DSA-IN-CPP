#include <iostream>
using namespace std;
#include<cmath>

int main(){
    int num;
 cout << "Number daalo bhai: ";
 cin>>num;

 int square=num*num;

 int temp=num;
 int digit=0;

 while(temp>0){
     digit++;
    temp/=10;
 }

 int lastDigit=square%(int)pow(10,digit);
 if(lastDigit==num){
    cout<<"Ha hai";
 }else{
    cout<<"Nhi hai";
 }

 return 0;
   


}
