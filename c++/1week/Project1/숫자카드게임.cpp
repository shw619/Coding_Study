#include<iostream>
#include<algorithm>

using namespace std;

int n, m;
int ans;

int main() {

    cin >> n >> m;

    for (int i = 0; i < n; i++) {

        int minx = 10001;

        for (int j = 0; j < m; j++) {

            int x;
            cin >> x;
            minx = min(minx,x);

        }

        ans = max(ans, minx);
    }

    cout << ans;
}
