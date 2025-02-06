#include<iostream>;

using namespace std;
int main() {
	int n;
	cin >> n;
	int h;
	cin >> h;
	int width=0;
	int arry[1000];
	for (int i = 0;i < n;i++) {
		cin >> arry[i];
		if (arry[i] <= h) {
			width++;
		}
		if (arry[i] > h) {
			width = width + 2;
		}
	}
	cout << width;
	
}
