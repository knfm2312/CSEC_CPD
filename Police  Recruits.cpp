#include<iostream>


using namespace std;

int main() {
	int n;
	cin >> n;
	int event[100000];
	int crime = 0;
	int inv = 0;
	for (int i = 0;i < n;i++) {
		cin >> event[i];
		if (event[i] < 0) {
			if (inv > 0) {
				inv = inv + event[i];
			}
			else {
				crime++;
			}
		}
		else{
			inv=inv+ event[i];
		}
	}
	cout << crime;
}
