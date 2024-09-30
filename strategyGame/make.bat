@echo off
g++ dangen.cpp -o dangen.o -c
g++ genRandom.cpp -o genRandom.o -c
g++ mainAccount.cpp -o mainAccount.o -c
g++ listele.cpp -o listele.o -c
g++ main.cpp -o main.o -c
g++ GameEngine.cpp -o GameEngine.o -c
g++ createEnemy.cpp -o createEnemy.o -c
g++ createUnity.cpp -o createUnity.o -c
g++ Enemy.cpp -o Enemy.o -c 
g++ Paint.cpp -o Paint.o -c 
g++ dangen.o genRandom.o mainAccount.o listele.o main.o GameEngine.o createEnemy.o createUnity.o Enemy.o Paint.o -o strategyGame.exe