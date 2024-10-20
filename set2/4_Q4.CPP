
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    string filtered = "";
    for (char c : s) {
        if (isalnum(c)) filtered += tolower(c);
    }
    
    int left = 0, right = filtered.size() - 1;
    while (left < right) {
        if (filtered[left] != filtered[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";
    cout << boolalpha << isPalindrome(s) << endl;  // Output: true

    s = "race a car";
    cout << boolalpha << isPalindrome(s) << endl;  // Output: false
    return 0;
}