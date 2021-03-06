/*
Author: Ceon Bang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Project 1

Write a function
string middle(string str)
that returns a string containing the middle character in str if the length of str is odd, or the two middle characters if the length is even. For example, middle("middle") returns "dd".
For example, middle ("middle) returns "dd"
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string middle(string str) {
    int word_length = str.length();

    if (word_length % 2 == 1) {
        int odd = floor(word_length / 2);
        return str.substr(odd, 1);
    }
    else {
        int even = word_length / 2;
        return str.substr(even - 1, 2);
    }
    return false;
}
// count the entire length to the word and divide by two to find out middle value
// use the value to index the middle string and prints the values.

// if the string length is odd 
// ex) value.length = 5 % 2 = 1, 5/2 = 2.5 (rounddown) = 2, 2th letter of the value = l

// if the string length is even
// ex) middle.length = 6 % 2 = 0, 6/2= 3, print the 3th and 3-1th word. = dd

int main() {
    cout << middle("middle") << endl;
    cout << middle("abcde") << endl;
    return 0;
}

