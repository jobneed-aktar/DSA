#include<iostream>
using namespace std;
int main() {


    
    /*
        Inverted triangle pattern
    */ 
    int n = 4;
    for(int i = 0; i < n; i++) {
        // Printing space
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        // printing number
        for(int j = 0; j < n - i; j++) {
            cout << i + 1;
        }
        cout << endl;
    }

        /*
            Inverted triangle pattern charecter version
        */ 
        int n = 4;
        char ch = 'A';
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < i; j++) {
            cout << " "; 
            }
            for(int j = 0; j < n - i; j++) {
            cout << ch;
            }
            ch++;
            cout << endl;
        }





    return 0;
}