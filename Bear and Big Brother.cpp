#include<iostream>;
#include<string>;

using namespace std;
int main() {
	int a;
	int b;
	cin >> a;
	cin >> b;
	int numOfYear = 0;
	
	while (a <= b) {
		a = a * 3;
		b = b * 2;
		numOfYear++;
	}
	cout << numOfYear;
}
