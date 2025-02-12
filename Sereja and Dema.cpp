#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int cards[1000];
	int sereja = 0;
	int dima = 0;
	for (int i = 0; i < n; i++) {
		cin >> cards[i];
	}
	int pre = 0; 
	int post = n - 1;
	bool serejapick = true;
	for (int i = 0; i < n; i++) {
		if (cards[pre] > cards[post]) {
			if (serejapick) {
				sereja += cards[pre];
			}
			else {
				dima += cards[pre];
			}
			pre++;
		}
		else {
			if (serejapick) {
				sereja += cards[post];
			}
			else {
				dima += cards[post];
			}
			post--;
		}
		serejapick = !serejapick;
	}
	
	cout << sereja << " " << dima;
}
