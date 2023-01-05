#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string input;
    cin >> input;
    vector<char> answer;
    int sum = 0;

    for (int i = 0; i < input.size(); i++) {
        if (isalpha(input[i]))
        {
            answer.push_back(input[i]);
        }
        else
        {
            sum += input[i] - '0';
        }
    }

    sort(answer.begin(), answer.end());

    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i];
    }
    if (sum != 0)
        cout << sum;

    return 0;
}