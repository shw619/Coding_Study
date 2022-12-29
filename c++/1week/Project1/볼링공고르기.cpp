#include<iostream>
#include<vector>

using namespace std;



int main() {
    int n, m;
    int arr[11] = { 0 };
    int result = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr[x]++;
    }

    for (int i = 0; i < m+1; i++) {
        if (arr[i] == 0)
            continue;
        result += arr[i] * (n - arr[i]);
        n = n - arr[i];
    
    }
    cout << result;
}