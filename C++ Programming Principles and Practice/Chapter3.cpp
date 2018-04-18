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
    int age;
    char friend_sex = 0;
    string closer = "Sincerely,\n\n\n";
    cout << "Who would you like to write this letter to?\n";
    cin >> friend_name;
    cout << "What is your name?\n";
    cin >> sender_name;
    cout << "How old is " << friend_name << "?\n";
    cin >> age;
    if (age <= 0 or age >= 110) {
        simple_error("Stop kidding!");
    }
    cout << "What gender is your friend? (use m or f)\n";
    cin >> friend_sex;
    
    cout << "\nDear " << friend_name << ", \n" << "\n   How are you?  I am fine.  I miss you.\n" << "I hope camp is going well.  I can't wait to see you!\n";
    
    if (friend_sex == 'm') {
        cout << "\nHow is " << friend_name << "? Hope he is well. ";
        
        if (age == 12) {
            cout << "Next year you will be " << age+1 << "!\n\n";
            cout << closer << sender_name << '\n';
        }
        if (age == 17) {
            cout << "Next year you will be able to vote.\n\n";
            cout << closer << sender_name << '\n';
        }
        if (age >= 70) {
            cout << "I hope you are enjoying retirement!\n\n";
            cout << closer << sender_name << '\n';
        }
    }
    if (friend_sex == 'f') {
        cout << "\nHow is " << friend_name << "? Hope she is well. ";
        
        if (age == 12) {
            cout << "Next year you will be " << age+1 << "!\n\n";
            cout << closer << sender_name << '\n';
        }
        if (age == 17) {
            cout << "Next year you will be able to vote.\n\n";
            cout << closer << sender_name << '\n';
        }
        if (age >= 70) {
            cout << "I hope you are enjoying retirement!\n\n";
            cout << closer << sender_name << '\n';
        }
    }
}

