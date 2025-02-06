#include<iostream>;
#include<string>;

using namespace std;
int main() {
	int n;
	cin >> n;
	int danik = 0;
	int anton = 0;
	cin.ignore();
	string result;
	getline(cin, result);
	for (int i = 0; i < n; i++) {
		if (result[i] == 'A') {
			anton++;
		}
		if (result[i] == 'D') {
			danik++;
		}
		
	}
	if (anton > danik) {
		cout << "Anton";
	}
	else if (danik > anton) {
		cout << "Danik";
	}
	else {
		cout << "Friendship\n";
	}
	
}
