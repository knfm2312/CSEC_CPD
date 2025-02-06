#include<iostream>;
#include<string>;

using namespace std;
int main() {
	string first;
	getline(cin, first);
	string second;
	getline(cin, second);
	
	for (char& c : first) {
		if (c >= 'A' && c <= 'Z') {
			c = c + ('a' - 'A');
		}
	}
	for (char& c : second) {
		if (c >= 'A' && c <= 'Z') {
			c = c + ('a' - 'A');
		}
	}
	if (first < second) {
		cout << "-1";
	}
	else if (first > second) {
		cout << "1";
	}
	else {
		cout << "0";
	}
}
