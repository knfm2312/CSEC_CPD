#include<iostream>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	int petya;
	int vesya;
	int tonya;
	int problemsolved = 0;
	for (int i = 0;i < n;i++) {
		cin >> petya;
		cin >> vesya;
		cin >> tonya;
		if (petya + vesya + tonya > 1) {
			problemsolved++;
		}
	}
	cout << problemsolved;
}
