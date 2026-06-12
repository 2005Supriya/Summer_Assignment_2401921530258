#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int left = 0;
    int right = str.size() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

string longestPalindrome(string s) {
    string ans = "";

    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            string sub = s.substr(i, j - i + 1);

            if (isPalindrome(sub) && sub.size() > ans.size()) {
                ans = sub;
            }
        }
    }

    return ans;
}

int main() {
    string s;

    cout << "Enter a string: ";
    cin >> s;

    cout << "Longest Palindromic Substring: "
         << longestPalindrome(s) << endl;

    return 0;
}