#include <iostream>
using std::string;
using std::cout;
#include "function.hpp"

int main(){
    string text, rev_text;
    text = "palindrome";
    rev_text = reversed_text(text);
    cout << rev_text << "\n";
    text= "saippuakivikauppias";
    rev_text = reversed_text(text);
    cout << rev_text;
}