#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    int n;
    cin >> s >> n;
    vector<int> lps(s.size());
    lps[0] = 0;
    for (int i = 1; i < s.size(); i++) {
        int len = lps[i - 1];
        while (true) {
            if (s[i] == s[len]) {
                lps[i] = len + 1;
                break;
            }
            if (len == 0) {
                lps[i] = 0;
                break;
            }
            len = lps[len - 1];
        }
    }
    cout << lps[s.size()-1] + n * (s.size() - lps[s.size()-1]) << '\n';
}