#include <string>
using std::string;

string reversed_text(string text){
    string rev_text;
    for (int i=text.size()-1; i>=0 ; i--){
        rev_text += text[i];
    }
    return rev_text;
}