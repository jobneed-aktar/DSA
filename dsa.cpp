#include <iostream>
using namespace std;
#include <climits>

int linearSearch(int n[], int s,int f,int r) {
   for(int i=0; i<s; i++) {
      if(n[i]==f) {
         return i;
      }
   }
   return -1;
}



int main() {
   int numbers[] = {1,2,3,4,5,6,7,8,9,10};
   int size = sizeof(numbers) / sizeof(int);
   int find = 11;
   int result;
   

   cout << linearSearch(numbers,size,find,result);


   return 0;
}