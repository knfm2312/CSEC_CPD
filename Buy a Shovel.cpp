#include<iostream>

using namespace std;

int main() {
	int price;
	int r;
	cin >> price >> r;
	int numShovels = 1;
	while (true) {
		if ((price * numShovels) % 10 == 0 || (price * numShovels) % 10 == r) {
			cout << numShovels;
			break;
		}
		numShovels++;
	}
}
