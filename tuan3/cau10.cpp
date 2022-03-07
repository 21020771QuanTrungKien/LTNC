#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int n = s.length();
    bool flag = true;
    if (n >= 6 && n <= 15) {
        if ((s[0] >= 'A' && s[0] <= 'Z') || (s[0] >= 'a' && s[0] <= 'z')) {
            for (int i = 1; i < n; i++) {
                if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                    flag = true;
                } else {
                    flag = false;
                    break;
                }
            }
        } else flag = false;
    } else flag = false;
    if (flag == true) cout << "Valid username.";
    else cout << "Invalid username.";
    return 0;
}