// Create a program to swap values of two variables.
#include<iostream>
using namespace std;
int main(){
    int a, b, temp;

    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    
    temp = a;
    a = b;
    b = temp;
    
    cout<<"Before swapping: a = "<<a<<" and b = "<<b<<endl;

    cout<<"After swapping: a = "<<a<<" and b = "<<b<<endl;
    return 0;
}