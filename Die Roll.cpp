#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int y;
	cin >> y;
	int w;
	cin >> w;
	int m = max(y, w);
	int nomiretor = 7 - m;
	int die = 6;
	int dies=6;
	int gcf = nomiretor;
	while (die != 0) {
		int temp = die;
		die = gcf % die;
		gcf = temp;
	}
	int nom = nomiretor / gcf;
	int din = dies / gcf;
	if (nom == din) {
		cout << "1/1";
		return 0;
	}
	if (nom == 0 || din == 0) {
		cout << "0/1";
		return 0;
	}
	cout<<nom<<"/"<<din;
}
