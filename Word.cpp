#include<iostream>
#include<string>

using namespace std;

int main() {
	string name;
	getline(cin, name);
	int lower = 0;
	int upper = 0;
	for (char& c : name) {
		if (c >= 'a' && c <= 'z') {
			lower++;
		}
		else {
			upper++;
		}
	}
	if (lower > upper) {
		for (char& c : name) {
			if (c >= 'A' && c <= 'Z') {
				c = c + ('a' - 'A');
			}
		}
	}
	else if (lower < upper) {
		for (char& c : name) {
			if (c >= 'a' && c <= 'z') {
				c = c - ('a' - 'A');
			}
		}
	}
	else {
		for (char& c : name) {
			if (c >= 'A' && c <= 'Z') {
				c = c + ('a' - 'A');
			}
		}
	}
	cout << name;
}
