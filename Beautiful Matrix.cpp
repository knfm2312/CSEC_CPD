#include <iostream>
#include <cmath> 
using namespace std;
 
int main() {
    int matrix[5][5]; 
    int row = -1, col = -1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
           
            if (matrix[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }
    int numberOfMove = abs(row - 2) + abs(col - 2);
    cout << numberOfMove << endl;
 
    return 0;
}
