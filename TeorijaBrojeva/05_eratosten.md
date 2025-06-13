# Eratostenovo sito

## Postupak zadatka

Ceo zadatak je primena Eratostenovog sita, algoritma za nalaženje prostih brojeva u opsegu 1 do N.

Uzmimo niz 1..25 kao primer. Kreiramo niz boolean-a u kome sve pozicije osim 1 postavimo na `true` za početak.

Krenemo for ciklusom od pozicije 2 do 25 sa brojačem `i`.
    
1. Ako data pozicija ima vrednost `false`, preskočimo je zato što je broj na toj poziciji složen broj.
2. Ako data pozicija ima vrednost `true`, to znači da je broj `i` prost. Ne menjamo njegovu vrednost već krećemo od 
vrednosti `i * i` do `N` (što je 25 u ovom primeru), dodavajući `i` u svakom koraku. Svaki broj koji dobijemo ovim postupkom
je deljiv sa `i`, zato ih sve postavljamo na `false`.

Posle izvršetka ovog postupka, samo je potreban još jedan prolaz a..b kako bismo odredili koji su brojevi u tom opsegu
prosti, koje onda možemo da izbrojimo i dodamo na zbir.

## Istorija sita

Eratostenovo sito je Nikomah iz Gerasa u svojoj knjizi "Uvod u aritmetiku" opisao i imenovao po Eratostenu iz Kirene, 
grčkom filozofu koji se bavio matematikom i geografijom. 

Iako nekolicina matematičara i programera smatra da je pravi izumitelj ovog sita neki nepoznati
Arapin, svi istorijski izvori navode Nikomahovu knjigu kao prvi put kada je pomenuto Eratostenovo sito, zato možemo sa
sigurnošću reći da je Eratosten prvi izmislio ovo sito, ili je prvi uspeo da ga zapiše i samim tim ostavi budućim pokolenjima,
što samo govori o visokom intelektu Grčkog naroda.