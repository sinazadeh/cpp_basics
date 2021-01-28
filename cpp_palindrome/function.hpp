#include <iostream>
using std::string;

string palindrome(string text){
    string reversed_text;
    for (int i=text.size()-1; i>=0 ; i--){
        reversed_text += text[i];
    }
    return reversed_text;
}