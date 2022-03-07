#include <bits/stdc++.h>

using namespace std;

int main() 
{
	string s;
	getline(cin, s);
	int countAlpha = 0, countNum = 0, countOther = 0;
	for (int i = 0; i < s.length(); i++) {
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
			countAlpha++;
		} else if (s[i] >= '0' && s[i] <= '9') {
			countNum++;
		} else countOther++;
	}
	cout << countAlpha << " " << countNum << " " << countOther;
}