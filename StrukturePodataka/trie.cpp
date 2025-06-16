#include <bits/stdc++.h>
using namespace std;

/*

14
ubaci cta
ubaci ct
ubaci ctg
trazi cta
trazi ct
trazi ctg
trazi ctc
izbaci ct
trazi ct
trazi ctg
izbaci ctg
trazi ctg
ubaci ctg
trazi ctg

da
da
da
ne
ne
da
ne
da

*/

typedef struct Cvor {
    Cvor* sled[4];
    Cvor* pros;
    int br;
} Cvor;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    Cvor *stablo = (Cvor*)malloc(sizeof(Cvor));
    stablo->pros = nullptr;
    for(int i = 0; i < 4; i++) {
        stablo->sled[i] = nullptr;
    }
    stablo->br = 0;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string kom, str;
        cin >> kom >> str;
        if(kom == "ubaci") {
            Cvor *pret = stablo;
            for(int j = 0; j < str.size(); j++) {
                if(pret->sled[0] == nullptr) {
                    pret->sled[0] = (Cvor*)malloc(sizeof(Cvor));
                    pret->sled[0]->pros = pret;
                    for(int k = 0; k < 4; k++) {
                        pret->sled[0]->sled[k] = nullptr;
                    }
                    pret->sled[0]->br = 0;
                    pret = pret->sled[0];
                }
            }
        }
        if(kom == "izbaci") {

        }
        if(kom == "trazi") {

        }
    }
    return 0;
}