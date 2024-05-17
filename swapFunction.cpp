#include<iostream>
using namespace std;

int main(){
    int a=5;
    int b=2;
    cout<<a<<endl;
    cout<<b<<endl;
    
    // Method 1 (Using temp variable)
    // int temp;
    // temp=a;
    // a=b;
    // b=temp;

    // Method 2 (Using X)R operator)
    // a=a^b;
    // b=a^b;
    // a=a^b;

    // Method 3 (Using + and - operator)
    a=a+b;
    b=a-b;
    a=a-b;

    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}