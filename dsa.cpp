#include <iostream>
using namespace std;
#include <climits>

int main() {
    
    int minimumNumber = INT_MAX;
    int nums[] = {10,20,30,-10,50,60,70,80,10,100};
    int size = sizeof(nums) / sizeof(int);

    for(int i=0; i<size; i++) {
        if(nums[i]<minimumNumber) {
            minimumNumber = i;
        }
    }

    cout << "The smallest Number index number is : " << minimumNumber;

    






   return 0;
}