//
//  Chapter3.cpp
//  C++ Programming Principles and Practice
//
//  Created by Jerry Clement on 4/16/18.
//  Copyright © 2018 Jerry Clement. All rights reserved.
//

#include "std_lib_facilities.h"

int main()
    {
        string val1, val2, val3;
        cout << "Enter three numbers.  Press enter after each.\n";
        cin >> val1;
        cin >> val2;
        cin >> val3;
        if ( val1 > val2 > val3) {
            cout << val1 << ", " << val2 << ", " << val3;
        }
        
//        int first = min({val1, val2, val3});
//        int third = max({val1, val2, val3});
//        int second = val1 ^ val2 ^ val3 ^ first ^ third;
//        cout << first << ", " << second << ", " << third << endl;
//        double val3 = val1;
//        double val4 = val2;
//        cout << "The sum of " << val1 << " & " << val2 << " is " << val1 + val2 << "\n"
//            << "The difference of " << val1 << " & " << val2 << " is " << val1 - val2 << "\n"
//            << "The product of " << val1 << " & " << val2 << " is " << val1 * val2 << "\n"
//            << "The ratio of " << val1 << " & " << val2 << " is " << val1 / val2 << "\n";
//        if ( val1 > val2 ) {
//           cout << val1 << " is greater than " << val2 << "\n";
//        }
//        if ( val2 > val1 ) {
//                cout << val2 << " is greater than " << val1 << '\n';
//        }
    }
