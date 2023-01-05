#include <iostream>
using namespace std;

int main() {
    string input = "";

    cin >> input;

    int column = input[0] - 'a' + 1;
    int row = input[1] - '1' + 1;

    int xy[8][2] = { {1,2}, {-1,2}, {1,-2}, {-1,-2}, {-2,1}, {-2,-1}, {2,1}, {2,-1} };

    int answer = 0;

    for (int i = 0; i < 8; i++) {
        int move_row = row + xy[i][0];
        int move_column = column + xy[i][1];

        if (move_row >= 1 && move_row <= 8 && move_column >= 1 && move_column <= 8) 
            answer++;
    }
    cout << answer;
    return 0;
}
