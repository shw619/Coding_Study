#include<iostream>
using namespace std;

int n, k;


int main() {
	int count = 0;
	cin >> n >> k;
	
	while (n != 1) {
		if (n % k == 0) {
			n = n / k;
			count++;
		}
		else
		{
			n -= 1;
			count++;
		}
	}

	cout << count;

	return 0;
}