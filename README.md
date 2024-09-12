# Jocul X si 0
## Despre ce este proiectul:
Recrearea jocului clasic tic-tac-toe.
# Logica jocului:
Jocul se joaca in doua persoane "player1" "player2", acestea plaseaza pe rand X sau 0 pe o tabla de 3/3
Jocul este finisat in cazul in care exista un castigator sau e remiza.
1. Jocul poate fi castigat in cazul in care unul dintre jucatori detine 3 siboluri la rand pe orizontala, verticala sau pe deagonala
2. In cazul in care pe tabla nu mai exista nici un patrat liber si nici un jucator nu are 3 simboluri la rand atunci e remiza
# Clasele create pentru joc
* Clasa "Board", 
1. clasa data detine un char de timp array cu dimensiunea de 9 iandexuri care va reprezenta de la 1-9 fiecare patrat.  
1 | 2 | 3  
4 | 5 | 6  
7 | 8 | 9  
2. Detine functia "setMove" pentru a positiona X sau 0  
3. Functia "check_If_is_empty" va verifica daca patratul respectiv este liber  
4. Si functia "checkWin" verifica dupa fiecare inserare noua daca exista un jucator  
* Clasa "GameEngine"  
1. Detine functia "StartGame" care porneste jocul
2. Functia "RestartGame" care reseteaza jocul in cazul in care este sfarsitul partidei
3. Si functia "EndGame" care va inchide Jocul sau partida  
* Clasa "Painter"  
1. Detine functia "Draw" pentru a afisa in consola tabla de joc si inclusiv toate datele necesare precum care jucator merge daca exista un castigator sau daca e remiza
* Clasa "Player"  
1. Detine un int care reprezinta numarul maxim de jucatori posibili care este egal cu 2
2. Un char cu dimensiunea de 20 de caractere ce va reprezenta numele jucatorilor
3. Si un bool ce va determina daca playerul este "X" sau "0"
