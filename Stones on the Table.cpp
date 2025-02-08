#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	string stonsColor;
	cin >> stonsColor;
	int neighboring=0;
	for (int i = 0; i < n-1;i++) {
		if (stonsColor[i] == stonsColor[i + 1]) {
			neighboring++;
		}
	}
	cout << neighboring;
}
