#include <bits/stdc++.h>

using namespace std;

string pigLatin(string word) {
    string res = "";
    if (word[0] == 'u' || word[0] == 'e' || word[0] == 'o' || word[0] == 'a' || word[0] == 'i' || word[0] == 'U' || word[0] == 'E' || word[0] == 'O' || word[0] == 'A' || word[0] == 'I') {
        res = res + word + "way";
    } else {
        res = res + word.substr(1) + word[0] + "ay";
    }
    return res;
}
