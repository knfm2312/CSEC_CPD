#include<iostream>
#include<string>
using namespace std;

int main() {
	string color;
	getline(cin, color);
	string instraction;
	getline(cin, instraction);
	int poLiss = 0;
	for (char& c : instraction) {
		if (color[poLiss] == c) {
			poLiss++;
		}
	}
	cout << poLiss+1;

}
