#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main() {
	string str;
	cin >> str;
	char current = 'a';
	int totalDis = 0;
	int clock;
	int unticlock;
	for (char& c : str) {
		clock = abs(c - current);
		unticlock =abs( 26 - clock);
		totalDis += min(clock, unticlock);
		current = c;
	}
	cout << totalDis;
}
