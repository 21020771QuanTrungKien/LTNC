#include <bits/stdc++.h>

using namespace std;

int main() 
{
	string s;
	getline(cin, s);
	string res = "";
	int countSpaces = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 32) {
			for (int j = i; j < s.length(); j++) {
				if (s[j] == 32) countSpaces++;
				else break;
			}
			if (i == 0) {
				for (int j = 0; j < countSpaces; j++) {
					res = res + s[j];
				}
				i = i + countSpaces;
			} else {
				i = i + countSpaces;
				res = res + " ";
			}
		}
		res = res + s[i];
		countSpaces = 0;
	}
	cout << res;
	return 0;
}