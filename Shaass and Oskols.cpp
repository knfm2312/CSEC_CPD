#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arry[100];

	for (int i = 0; i < n;i++) {
		cin >> arry[i];
	}
	int k;
	cin >> k;
	for (int i = 0; i < k;i++) {
		int wire;
		int shot;
		cin >> wire >> shot;
		wire--;
		int right = arry[wire] - shot;
		int left = shot - 1;
		if (wire > 0) {
			arry[wire-1] += left;
			
		}
		if (wire < n-1) {
			arry[wire + 1] += right;
			
		}
		arry[wire] = 0;
	}

	for (int i = 0; i < n;i++) {
		cout<< arry[i]<<endl;
	}
}
