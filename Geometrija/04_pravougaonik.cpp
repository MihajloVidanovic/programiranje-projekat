#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<pair<int, int>> p(4);
    for (int i = 0; i < 4; i++) {
        cin >> p[i].first >> p[i].second;
    }
    while(next_permutation(p.begin(), p.end())) {
        for (int i = 0; i < 4; i++) {
            pair<int, int> v1, v2;
            v1.first = p[(i - 1 + 4) % 4].first - p[i].first;
            v1.second = p[(i - 1 + 4) % 4].second - p[i].second;
            v2.first = p[(i + 1 + 4) % 4].first - p[i].first;
            v2.second = p[(i + 1 + 4) % 4].second - p[i].second;
            if ((v1.first * v2.first) + (v1.second * v2.second) != 0) {
                goto nije_pravougaonik;
            }
        }
        cout << "DA\n";
        return 0;
        nije_pravougaonik: ;
    }
    cout << "NE\n";
    return 0;
}