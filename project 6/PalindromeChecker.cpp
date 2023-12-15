//
//  PalindromeChecker.cpp
//  project 6
//
//  Created by bita yonas on 12/14/23.
//

#include "PalindromeChecker.hpp"
#include <cctype>
using namespace std;

bool PalindromeChecker::isPalindrome(const string& str, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (tolower(str[start]) != tolower(str[end])) {
        return false;
    }
    return isPalindrome(str, start + 1, end - 1);
}

bool PalindromeChecker::isStringValid(const string& str) {
    for (char c : str) {
        if (!isalpha(c)) {
            return false;
        }
    }
    return true;
}
