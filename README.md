# Jocul X si 0
## Compilarea obectelor
* Pentru compilarea manuala a fisierelor cpp e necesar de a merge direct in terminal sau in linia de comanda si de executat ca exemplu acest cod "g++ main.cpp -o main.o -c"   
aceasta comanda mai exact ce face
1. Apeleaza compilatorul g++
2. "main.cpp" fisierul sursa ce detine codul C++
3. Specificam numele obectului care va fi creat "main.o"
4. Si -c indica faptul ca trebuie doar sa compileze fisier de tip obect ci nu un executabil   
Astfel reusim sa compilam manual fisierele dorite in cazul in care nu persista nici o eruare in fisierile hpp si cpp
# Fisierele de constructie
Sunt modalitati prin care putem sa usuram modul de compilare a obectelor, mai mult ca printr-o metoda semi-automatizata
la ce se refera aceasta
* Crearea unui fisier de constructie, spre exemplu un fiser de tip bat sau un fisier "Makefile"   
Totusi din cauza problemei de compilarea pe dizpozitivul local compilarea o efectuez cu ajutorul executabilului de timp bat   
* In fisierul respectiv (bat) introducem aceleasi linii de comanda ca cum am faci-o manual:   
@echo off   
g++ Board.cpp -o Board.o -c   
g++ GameEngine.cpp -o GameEngine.o -c   
g++ Painter.cpp -o Painter.o -c   
g++ Player.cpp -o Player.o -c   
g++ RandomPlay.cpp -o RandomPlay.o -c   
g++ main.cpp -o main.o -c   
g++ Board.o GameEngine.o Painter.o Player.o RandomPlay.o main.o -o tic_tac_toe.exe   
* Astfel prin rularea acestui fisier prin terminal folosind comanda "make" va creea obecte pentru fiecare fisier in parte care a fost introduse in acesta
* Iar "g++ Board.o GameEngine.o Painter.o Player.o RandomPlay.o main.o -o tic_tac_toe.exe" linia aceasta de comanda va crea un executabil pentru jocul nostru pe care il putem rula si juca
# Makefile
* in cazul in care folosim compilarea cu ajutorul unui fisier Makefile e doar un pic mai diferit 
nu inseram direct comanda g++ Player.cpp -o Player.o -c Dar:   
Player.o:   
  g++ Player.cpp -o Player.o -c   
Specificam ce obect dorim sa copilam si scriem comanda respectiva   
Si asa din nou e nevoie pentru fiecare obiect   
Iar pentru crearea executabilului e nevoie ca toate obectele sa fie construite intrun singur fisier exe:   
x_and_0: Board.o GameEngine.o Painter.o Player.o RandomPlay.o main.o   
  g++ Board.o GameEngine.o Painter.o Player.o RandomPlay.o main.o -o x_and_0

