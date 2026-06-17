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
    for(int i=0; i<=2*n-1; i++) {
        int stars = i;
        
        if(i > n) stars = 2*n - i;
        for(int j=1; j<=stars; j++) {
            cout << "*";
        }
    }
}

// Binary Left to Right Triangle

/*

1
01
101
0101
10101

*/

// Code
void pattern11(int n) {
    int start = 1;
    for(int i=0; i<n; i++) {
        if (i % 2 == 0) start = 1;
        else start = 0;
        for(int j=0; j<=i; j++) {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

// Left to Right lower and Upper Triangle

/*

1        1
12      21
123    321
1234  4321
1234554321

*/

// Code
void pattern12(int n) {
    int spaces = 2*(n-1);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << j;
        }

        for(int j=1; j<=spaces; j++) {
            cout << " ";
        }

        for (int j=i; j>=1; j--) {
            cout << j;
        }

        cout << endl;

        spaces -= 2;
    }
}

// Numeric left to Right (1 to 15) Triangle

/*

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15

*/

// Code
void pattern13(int n) {
    int count = 1;
    for(int i=1; i<=n; i++) {
        for(int j=0; j<i; j++) {
            cout << count << " ";
            count += 1;
        }
        cout << endl;
    }
}

// Alphabetic Left to Right Triangle

/* 

A 
A B 
A B C 
A B C D 
A B C D E

*/

// Code
void pattern14(int n) {
    for(int i=1; i<=n; i++) {
        for(char ch='A'; ch<'A'+i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

// Reverse Alphabetic Right to Left Triangle

/*

A B C D E 
A B C D 
A B C 
A B 
A

*/

//Code 
void pattern15(int n) {
    for(int i=1; i<=n; i++) {
        for(char ch='A'; ch<=n-i+'A'; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

// Alphabetic Left to Right Triangle (with similar Alphabets in each row)

/*

A 
B B 
C C C 
D D D D 
E E E E E

*/

// Code
void pattern16(int n) {
    for(int i=0; i<n; i++) {
        char ch = 'A' + i;
        for(int j=0; j<=i; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

// Aplhabetic Triangle

/*

    A    
   ABA   
  ABCBA  
 ABCDCBA

*/

// Code
void pattern17(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1-i; j++) {
            cout << " ";
        }

        char ch='A';
        int breakpoint = (2*i+1) / 2;
        for(int j=0; j<=2*i+1; j++) {
            cout << ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }

        for(int j=0; j<n-1-i; j++) {
            cout << " ";
        }

        cout << endl;
    }
}

// Reverse Alphabetical Order Left to Right Triangle

/*

F
EF
DEF
CDEF
BCDEF
ABCDEF

*/

// Code
void pattern18(int n) {
    for(int i=0; i<=n; i++) {
        for(char ch='A'+n-i; ch<='A'+n; ch++) {
            cout << ch;
        }
        cout << endl;
    }
}

// Space Traingle

/*

************
*****  *****
****    ****
***      ***
**        **
*          *
*          *
**        **
***      ***
****    ****
*****  *****
************

*/

// Code
void pattern19(int n) {
    for(int i=0; i<=n; i++) {
        for(int j=0; j<=n-i; j++) {
            cout << "*";
        }

        for(int j=0; j<2*i; j++) {
            cout << " ";
        }

        for(int j=0; j<=n-i; j++) {
            cout << "*";
        }
        
        cout << endl;
    }

    for(int i=0; i<=n; i++) {
        for(int j=0; j<=i; j++) {
            cout << "*";
        }

        for(int j=0; j<2*(n-i); j++) {
            cout << " ";
        }

        for(int j=0; j<=i; j++) {
            cout << "*";
        }
        
        cout << endl;
    }
}

// 

/*

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/

// Code
void pattern20(int n) {
    for(int i=1; i<=2*n-1; i++) {

        int stars = i;
        if (i > n) stars = 2*n-i;
        for(int j=0; j<stars; j++) {
            cout << "*";
        }

        for(int j=0; j<2*(n-stars); j++) {
            cout << " ";
        }

        for(int j=0; j<stars; j++) {
            cout << "*";
        }
        
        cout << endl;
    }
}

// Hollow Square

/*

*****
*   *
*   *
*   *
*****

*/

// Code
void pattern21(int n) {
    // for(int i=0; i<n; i++) {
    //     cout << "*";
    // }

    // cout << endl;

    // for(int i=1; i<n-1; i++) {
    //     cout << "*";
    //     for(int j=0; j<n-2; j++) {
    //         cout << " ";
    //     }
    //     cout << "*";
    //     cout << endl;
    // }

    // for(int i=0; i<n; i++) {
    //     cout << "*";
    // }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if( i==0 || j==0 || i==n-1 || j==n-1 ) {
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }
}

// Numeric Square

/*

4444444
4333334
4322234
4321234
4322234
4333334
4444444

*/

// Code
void pattern22(int n) {
    for(int i=0; i<2*n-1; i++) {
        for(int j=0; j<2*n-1; j++) {
            int top = i;
            int left = j;
            int right = (2*n - 2) - j;
            int down = (2*n - 2) - i;
            cout << (n - min(min(top, down), min(left, right)));
        }
        cout << endl;
    }
}

int main() {
    int n;

    cout << "Enter the Number: ";
    cin >> n;

    pattern22(n);

}