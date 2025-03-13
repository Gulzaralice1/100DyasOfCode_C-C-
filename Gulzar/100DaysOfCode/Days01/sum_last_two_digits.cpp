// Sum of Last Two Digits of a Number
#include<iostream>
using namespace std;
int main(){
    int number;    //Variable to store number
    int sum = 0;    //Variable to store sum of last two digits
    cout<<"Enter a number: ";    //Taking input form user
    cin>>number;

    int i = 0;
    while(i < 2){  
        sum += number % 10;  //Adding last digit to sum
        number /= 10;   //Removing last digit from number
        i++;   //Incrementing i
    }

    cout<<"Sum of Last two digits: "<<sum;   //Printing sum of last two digits 
    return 0;
}
// Input: 1234
// Output: Sum of Last two digits: 7

// Input: 123456
// Output: Sum of Last two digits: 11


// 100DaysOfCode
// Day 1