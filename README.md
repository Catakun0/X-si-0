# Jocul X si 0
* Clasicul joc X si 0 creat in consola cu ajutorul limbajului de programare C++   
# Regulile de joc
Cine reuseste sa construiasca un sir de 3 charactere "X" sau "0" la rand pe diagonala, veritcala sau orizontala acela este castigatorul     
In cazul in care toate pozitiile sunt ocupate va rezulta a fiind egalitate     
Construirea jocului a fost realizata cu ajutorul claselor main, Board, Player, GameEngine, randomPlay si Painter
* Fiecare clasa are functualitatea sa pentru ca jocul sa ruleze
## Startul jocului
1. Main - este folosit ca punct de intrare in joc care apeleaza clasa..
2. GameEngine - aceasta creaza toate instantele de care jocul are nevoie acumuland datele necesare pentru afisare si calculare
3. RandmPlay - este creat in GameEngine inainte de a incepe afisarea, care returneaza 1 sau 2 la intamplare, reprezetand care jucator va incepe primul X sau 0
4. Player - este la fel apelat la inceput dar aici deja programul indrum utilizatorii de asi introduce numele dorite de la tastatura
5. Board - o data cu crearea istantei date constructorul implicit este apelat in momentul respectiv, iar acesta apeleaza functia de inserare a Boardului, ce insereaza un vector cu 1.2.3...9 de tip string 
6. Painter - reprezinta clasa principala care este folosita pentru afisarea datele importante
* Painter afiseaza tabla jocului, inclusiv actualizarea sa se face dupa fiecare modificare a Boardului in cazul in care a fost introdus o coordonata disponibila si numarul coordonatei a fost inlocuit cu "X" sau "0"
# Bliblioteca externa "JSON"
* De asemenea clasa Painter are posibilitatea cu ajutorul blibliotecei externe json.hpp sa salveze date    
in cazul jocului dat, datele ce sunt salvate sunt numarul de castiguri a fiecarui player    
Clasa painter detine functie pentru actualizare a datelor si de afisare, care sunt apelate la meniul de final
# Boardul 
* Clasa Board detine functiile de verificare in cazul in care coordonata introdusa este disponibila, adica nu se afla un alt "X" sau "0"
* La fel Boardul detine si functia ce verifica daca nu exista un castigator, facand o cautare pe liniile orizontale, verticale si cele depe deagonale
* In cazul in care exista un castigator clasa painter va afisa un meniu de final
# Meniu de final
* Afiseaza castigatorul curent si inclusiv tabla finala
* Meniul de final incarca de asemenea cu ajutorul blibliotecei externe "json" datele ce au fost salvate, numarul de victorii a fiecarui Player in parte
* Pe langa afisarea rezultatelor finale ofera utilizatorilor de a face un restart la joc prin inserarea cifrei "1" de la tastatura sau pentru inchiderea programului inserarea cifrei "2" de la tastatura
# Restartul jocului
* In cazul in care alegem sa restartam jocul datele Boardului principal sunt inlocuite cu o copie a sa ce a fost createa in momentul executarii programului
* Si din nou ruleaza acelasi procedeu de introducere a numelor si inceperea jocului de la capat
