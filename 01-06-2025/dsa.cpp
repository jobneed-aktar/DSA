#include<iostream>
using namespace std;

int deciamlToBinary(int decimal) {
    int binary = 0, place = 1;
    while(decimal > 0) {
        int remainder = decimal % 2;
        binary += remainder*place;
        decimal /= 2;
        place *= 10;
    }
    return binary;
}

int main() {
    int num;
    cout << "Enter a decimal number : \n";
    cin >> num;
    cout << "Binary : " << deciamlToBinary(num) << endl;
    return 0;
}
