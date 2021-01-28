#include <iostream>
using std::string;
using std::cout;
#include "function.hpp"

int main(){
    string text= "palindrome";
    string reversed_text = palindrome(text);
    cout << reversed_text;
}