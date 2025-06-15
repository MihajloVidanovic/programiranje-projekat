# Ušteda kablova

## Postupak zadatka

Ideja zadatka jeste primena algoritma za kreiranje minimalnog razapinjućeg stabla. Postoje razni primeri
ali u ovom rešenju ćemo koristiti *Primov algoritam.*

*Primov algoritam* podrazumeva sledeće:
1. Kreiramo skup u kojem ćemo smestiti sve posećene čvorove, red sa prioritetom u kojem ćemo smestiti 
veze na susedne čvorove čvorovima koji su već posećeni i njihove težine, i promenljivu u kojoj ćemo smestiti
ukupnu težinu stabla, tipa double.
2. Započinjemo algoritam time što ubacujemo 0 u skup posećenih čvorova i susede 0-tog čvora u red sa prioritetom.
   1. Izbacujemo veze sa vrha reda dok ne naiđemo na vezu koja povezuje stablo sa neposećenim čvorom.
   2. Ova veza je zagarantovano najjeftinija iliti najlakša veza kojom možemo povezati stablo sa neposećenim čvorom,
   zato što koristimo red sa prioritetom koji to garantuje.
   3. Ubacujemo čvor koji se povezuje sa stablom u posećene čvorove, u red ubacujemo njegove susede, a težinu veze
   dodajemo na ukupan zbir težine stabla.
3. Ovaj postupak se završava kada svi čvorovi budu posećeni, tj. veličina skupa posećenih čvorova bude jednaka N.

Ispis težine stabla na 1 decimalu se može postići funkcijom `printf("%.1lf", [vrednost]);`, što je zadato kao uslov u 
zadatku.

Drugačiji pristup bi bio primena Kruskalovog algoritma za minimalno povezujuće stablo, ali Primov algoritam sa dobrom
implementacijom zadovoljava uslove petljinog zadatka, samim tim je i zbog toga što je relativno prostiji izabran ovde.