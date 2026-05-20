#include<bits/stdc++.h>
using namespace std;

// Square
/*

*****
*****
*****
*****
*****

*/

void pattern1(int n) {
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "*";
        }
        cout << endl;
    }
}

// Left to Right Triangle

/*
    
* 
*  * 
*  *  * 
*  *  *  * 
*  *  *  *  * 

*/

void pattern2(int n) {
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout << " * ";
        }
        cout << endl;
    }
}

// Left to Right Numeric Traingle P1

/*
    
1
12
123
1234
12345

*/

void pattern3(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

// Left to Right Numeric Triangle P2

/*

1
22
333
4444
55555

*/

void pattern4(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << i;
        }
        cout << endl;
    }
}

// Right to Left Higher to Lower Triangle

/*

 *  *  *  *  * 
 *  *  *  * 
 *  *  * 
 *  * 
 *

*/

//Code
void pattern5(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=0; j<n-i+1; j++) {
            cout << " * ";
        }
        cout << endl;
    }
}

// Right to Left Higher to Lower Triangle

/*

12345
1234
123
12
1

*/

// Code

void pattern6(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i+1; j++) {
            cout << j;
        }
        cout << endl;
    }
}

// Triangle

/*

    *    
   ***   
  *****  
 ******* 
*********

*/

// Code
void pattern7(int n) {
    for(int i=0; i<n; i++) {
        // No of Lines
        for(int j=0; j<n-i-1; j++) {
            // Space
            cout << " ";
        }

        for(int j=0; j<2*i+1; j++) {
            // Stars
            cout << "*";
        }

        for(int j=0; j<n-i-1; j++) {
            // Space
            cout << " ";
        }

        cout << endl;
    }
}

// Reverse Triangle

/*

*********
 ******* 
  *****  
   ***   
    *

*/

// Code
void pattern8(int n) {
    for(int i=n-1; i>=0; i--) {
        // No of Lines
        for(int j=0; j<n-i-1; j++) {
            // Space
            cout << " ";
        }

        for(int j=0; j<2*i+1; j++) {
            // Stars
            cout << "*";
        }

        for(int j=0; j<n-i-1; j++) {
            // Space
            cout << " ";
        }

        cout << endl;
    }
}

// Diamond (Kaju Katli)

/*

    *    
   ***   
  *****  
 ******* 
*********
*********
 ******* 
  *****  
   ***   
    *

*/

// Code
void space_stars(int n, int i) {
    for(int j=0; j<n-i-1; j++) {
        // Space
        cout << " ";
    }

    for(int j=0; j<2*i+1; j++) {
        // Stars
        cout << "*";
    }

    for(int j=0; j<n-i-1; j++) {
        // Space
        cout << " ";
    }

    cout << endl;
}

void pattern9(int n) {
    for(int i=0; i<n; i++) {
        space_stars(5, i);
    }

    for(int i=n-1; i>=0; i--) {
        space_stars(5, i);
    }
}

// Right Side of a Diamond only

/*

*
**
***
****
*****
****
***
**
*

*/

// Code
void pattern10(int n) {
    // for(int i=0; i<=n; i++) {
    //     for(int j=0; j<i; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for(int i=n-1; i>=0; i--) {
    //     for(int j=0; j<i; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    for(int i=0; i<=2*n-1; i++) {
        int stars = i;
        
        if(i > n) stars = 2*n - i;
        for(int j=1; j<=stars; j++) {
            cout << "*";
        }
    }
}

void pattern11(int n) {
}

int main() {
    int n = 5;

    // cout << "Enter the Number: ";
    // cin >> n;

    pattern11(n);

}