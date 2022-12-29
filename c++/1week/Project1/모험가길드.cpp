#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {

	int input;
	int ans = 0;
	int people = 0;

	vector<int> v;

	cin >> input;

	for (int i = 0; i < input; i++) {
		int n;
		cin >> n;
		v.push_back(n);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		people++;
		if (people >= v[i]) {
			ans++;
			people = 0;
		}
	}

	cout << ans;

	return 0;

}