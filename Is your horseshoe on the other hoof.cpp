#include<iostream>

using namespace std;

int main() {
	int arry[4];
	int count=0;
	for (int i = 0;i < 4;i++) {
		cin >> arry[i];
	}
	for (int i = 0;i < 4; i++) {
		bool duble = false;
		for (int j = 0;j < i;j++) {
			if (arry[j] == arry[i]) {
				duble = true;
				break;
			}
		}
		if (!duble) {
			count++;
		}
	}
	cout << (4-count);
}
