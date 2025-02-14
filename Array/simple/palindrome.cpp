#include <iostream>
using namespace std;

int main() {
    string str = "madam", rev = "";
    for(int i = str.length() - 1; i >= 0; i --) {
        rev += str[i];
    }
    if(str == rev) {
        cout << "palindrome";
    } else {
        cout << "Not a palindrome";
    }
} 