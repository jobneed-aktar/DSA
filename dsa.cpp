#include <iostream>
#include <climits>
using namespace std;


void reverseArr(int arr[], int size) {
    int start = 0; 
    int end = size -1;
    while(start < end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


int main() {
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr) / sizeof(int);
    reverseArr(arr,size);

    for(int i = 0; i < size -1 ; i++) {
       cout << arr[i] << endl;
    }
    
    


    return 0;
}
