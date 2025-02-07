#include <iostream>
using namespace std;

int main() {
    int n;
    int groupOfMagnet=0;
    int x = 0;
    int y = 1;
    cin >> n;
    int arrry[100000] = {};
    for (int i = 0; i < n; i++) {
        cin >> arrry[i];
    }
    for (int i = 0; i < n; i++) {
        if (arrry[x] == arrry[y]) {
            x++;
            y++;
        }
        else {
            groupOfMagnet++;
            x++;
            y++;
        }
    }
    cout << groupOfMagnet;
    return 0;
}
