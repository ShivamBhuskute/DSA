#include<iostream>
using namespace std;

/*
    Time Complexity : O( N*N )
    Space complexity: O( 1 )

    Where N is the given input integer.
*/

void alphaTriangle(int n) {

    // For loop 'row' in range 0 to N-1.
    for(int row = 0; row < n; row++) {
        
        // For loop 'col' in range 0 to row.
        for(int col = 0; col <= row; col++) {
            
            cout << (char)(n - col - 1 + 'A') << ' ';
        }

        cout << '\n';
    }
}