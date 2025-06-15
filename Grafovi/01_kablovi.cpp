#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    scanf("%d %d", &n, &m);
    vector<vector<pair<double, int>>> veze(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        double c;
        scanf("%d %d %lf", &a, &b, &c);
        veze[a].emplace_back(-c, b);
        veze[b].emplace_back(-c, a); // Trik kako bi prioritetni red sortirao u nerastucem redosledu.
    }
    set<int> pos; // Poseceni
    priority_queue<pair<double, int>> kom; // Komsije
    double cena = 0.0;
    pos.emplace(0);
    for (auto i : veze[0])
        kom.push(i);
    while (pos.size() != n) {
        while (pos.count(kom.top().second) > 0 && !kom.empty())
            kom.pop();
        cena += kom.top().first;
        int sled = kom.top().second;
        pos.insert(sled);
        kom.pop();
        for (auto i : veze[sled]) {
            kom.push(i);
        }
    }
    printf("%.1lf\n", cena * -1.0); // Produzetak pomenutog trika.
    return 0;
}