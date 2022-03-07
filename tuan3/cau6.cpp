#include <bits/stdc++.h>

using namespace std;

int main() 
{
	string s;
	 int num_word=0;
	getline(cin, s);
	s = " " + s; 
for (int i = 1; i < s.length(); i++) { 
    if (s[i] != ' ' && s[i-1] == ' ') {
        num_word++;
    }
}
    cout<<num_word;
    return 0;
}