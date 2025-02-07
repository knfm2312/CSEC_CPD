#include <iostream>
#include<string>;
 
using namespace std;
 
int main() {
	string name;
	getline(cin, name);
	string newString;
	bool checkd[256] = { false };
	for (char c : name) {
		if (!checkd[(unsigned char)c]) {
			checkd[(unsigned char)c] = true;
			newString += c;
		}
	}
	int count=newString.length();
	
	if (count % 2 == 0) {
		cout << "CHAT WITH HER!";
	}
	else {
		cout << "IGNORE HIM!";
	}
}
