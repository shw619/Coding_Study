#include<iostream>
#include<string>

using namespace std;

string S;

int main() {

	cin >> S;

	int num = stoi(S);
	int result = S[0];

	for (int i = 1; i < S.length(); i++) {

		if (num <= 1) {
			result += num;
		}
		else
			result *= num;
	}

	cout << result;

	return 0;
}

//��... ���� ;��; ���ڿ� ��ȯ�� �߸��߳���... �ٽ� �� 