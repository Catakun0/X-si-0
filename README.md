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
1. clasa data detine un char de timp array cu dimensiunea de 9 iandexuri care va reprezenta de la 1-9 fiecare tratat.  
1 | 2 | 3  
4 | 5 | 6  
7 | 8 | 9  
2. Detine functia "setMove" pentru a positiona X sau 0  
3. Functia "check_If_is_empty" va verifica daca patratul respectiv este liber  
4. Si functia "checkWin" verifica dupa fiecare inserare noua daca exista un jucator  
* Clasa "GameEngine"
