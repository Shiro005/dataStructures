#include <bits/stdc++.h>
using namespace std;

string findWinner(string s) {
    int n = s.size();
    vector<int> segments; 

    int cnt = 0;
    for (char c : s) {
        if (c == '0') {
            cnt++;
        } else {
            if (cnt > 0) {
                segments.push_back(cnt);
                cnt = 0;
            }
        }
    }
    if (cnt > 0) {
        segments.push_back(cnt);
    }

    int totalScore = 0;
    for (int len : segments) {
        int divisors = 0;
        for (int i = 1; i <= len; ++i) {
            if (len % i == 0) {
                divisors++;
            }
        }
        totalScore += divisors;
    }

    if (totalScore > 0) {
        if (segments.size() % 2 == 0) {
            return "MARC";
        } else {
            return "REX";
        }
    } else {
        return "REX";
    }
}

int main() {
    string s;
    getline (cin, s);

    string result = findWinner(s);

    cout << result

    return 0;
}
