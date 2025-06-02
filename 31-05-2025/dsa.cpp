#include<iostream>
using namespace std;
// calculate sum of digits of a number

int sumOfDigit(int num) {
    int digitSum = 0;
    while(num > 0) {
        int lastDigit = num % 10;
        num /= 10;
        digitSum += lastDigit;
    }
    return digitSum;
}

int main() {
    cout<< "Sum of digit : " << sumOfDigit(12312) << endl;
    




    return 0;
}