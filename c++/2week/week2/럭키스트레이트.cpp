#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string input;
    cin >> input;
    int div = input.size() / 2;

    int left = 0;
    for (int i = 0; i < div; i++) {
        left += input[i];
    }

    int right = 0;
    for (int i = div; i < input.size(); i++) {
        right += input[i];
    }

    if (left == right) 
        cout << "LUCKY";
    else 
        cout << "READY";

    return 0;
}