#include<iostream>
#include<string>

using namespace std;

int main() {
	int arry[10000];
	int aa;
	int count = 0;
	int look=0;
	int callory = 0;
	string strip;
	while (cin >> aa) {
		arry[count] = aa;
		count++;
		if (cin.peek() == '\n') {
			break;
		}
	}
	cin >> strip;
	for (char& c : strip) {
		
		int num = c - '0';
		num--;
		look += arry[num];
	}
	cout<<look;
}
