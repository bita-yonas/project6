//
//  main.cpp
//  project 6
//
//  Created by bita yonas on 12/14/23.
//


    // main.cpp

#include <iostream>
#include "PalindromeChecker.hpp"
using namespace std;

int main() {
string userInput;
cout << "Enter a string to check if it's a palindrome: ";
cin >> userInput;


    try {
        if (!PalindromeChecker::isStringValid(userInput)) {
            throw runtime_error("Input should only contain letters.");
                }

                if (PalindromeChecker::isPalindrome(userInput, 0, userInput.length() - 1)) 
                    
                {
                    cout << "'" << userInput << "' is a palindrome." << endl;
                } 
                else
                {
                    cout << "'" << userInput << "' is not a palindrome." << endl;
                    
                }
            } catch (const runtime_error& e){
                    cout << "Error: " << e.what() << endl;
                return 1;
            }

    return 0;
}

        
        

