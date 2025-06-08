#include <iostream>
using namespace std;

void reverse(int numbers[], int size) {
    int start = 0;
    int end = size-1;
    while(start<end){
        swap(numbers[start], numbers[end]);
        start++;
        end--;
    }
}



int main() {

    int numbers[] = {10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(numbers) / sizeof(int);
    reverse(numbers,size);
    
    for(int i=0; i<size; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}