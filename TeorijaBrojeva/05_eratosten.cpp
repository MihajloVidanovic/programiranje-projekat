#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    const int mod = 1000000;

    int a, b;
    cin >> a >> b;
    vector<bool> eratosten(b + 1, true);
    unsigned long long zbirProstih = 0, brojProstih = 0;
    eratosten[0] = false, eratosten[1] = false;
    for (int i = 2; i <= sqrt(b); i++) {
        if (eratosten[i]) {
            for (int j = i * i; j <= b; j += i) {
                eratosten[j] = false;
            }
        }
    }
    for (int i = a; i <= b; i++) {
        if (eratosten[i]) {
            (zbirProstih += i) %= mod;
            brojProstih++;
        }
    }
    cout << brojProstih << ' ' << zbirProstih << '\n';
    return 0;
}