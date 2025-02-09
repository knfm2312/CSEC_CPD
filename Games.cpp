#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arry[30];
	int arrry[30];
	int count = 0;
	for (int i = 0;i < n;i++) {
		cin >> arry[i] >> arrry[i];
	}
	for (int i = 0; i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (i != j && arry[i]==arrry[j]) {
				count++;
			}
		}
	}
	cout << count;
}
