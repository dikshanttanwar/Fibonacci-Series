#include<iostream>
using namespace std;
int main(){

    int a=0; 
    int b=1;
    int sum=0;
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        sum = a+b;
        cout<<sum<<" ";
        a = b;
        b = sum;
    }

}