#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int num, input;
vector<int> v;
int sum = 1;

int main() {

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());


  /*  for (int i = 0; i < num; i++) {
        if (sum >= v[i]) {
            sum += v[i];
        }
        else 
            break;
    }*/
    cout << sum;

}