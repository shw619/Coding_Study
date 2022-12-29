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

//음... 왜지 ;ㅁ; 문자열 변환을 잘못했나봄... 다시 ㅠ 