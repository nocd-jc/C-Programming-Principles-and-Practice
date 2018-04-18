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
    string friend_name;
    string sender_name;
    cout << "Who would you like to write this letter to?\n";
    cin >> friend_name;
    cout << "What is your name?\n";
    cin >> sender_name;
    cout << "\nDear " << friend_name << ", \n" << "\n   How are you?  I am fine.  I miss you.\n" << "I hope camp is going well.  I can't wait to see you!\n";
    char friend_sex = 0;
    cout << "\nWhat gender is your friend? (use m or f)\n";
    cin >> friend_sex;
    if (friend_sex == 'm') {
        cout << "\nHow is " << friend_name << "?\nHope he is well.\n" << "How old is he?\n";
        int age;
        cin >> age;
        if (age <= 0 or age >= 110) {
            simple_error("Stop kidding!");
        }
        else {
            cout << "Nice!\n";
        }
    }
    if (friend_sex == 'f') {
        cout << "\nHow is " << friend_name << "?\nHope she is well.\n" << "How old is she?\n";
        int age;
        cin >> age;
        if (age <= 0 or age >= 110) {
            simple_error("Stop kidding!");
        }
        else {
            cout << "Nice!\n";
        }
    }
}
