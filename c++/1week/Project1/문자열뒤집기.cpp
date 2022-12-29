#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int zerocount;
int onecount;
int answer;

int main()
{
	string input;
	cin >> input;

	for (int i = 0; i < input.length(); i++)
	
		if(input[i] != input[i+1])
		{
			if (input[i] == '0')
				zerocount++;
			else
				onecount++;
	}

	answer = min(zerocount, onecount);
	cout << answer;

	return 0;
}
