@echo off
g++ main.cpp -o main.o -c
g++ GameEngine.cpp -o GameEngine.o -c
g++ createEnemy.cpp -o createEnemy.o -c
g++ createUnity.cpp -o createUnity.o -c
g++ Enemy.cpp -o Enemy.o -c 
g++ Unitati.cpp -o Unitati.o -c 
g++ Paint.cpp -o Paint.o -c 
g++ main.o GameEngine.o createEnemy.o createUnity.o Enemy.o Unitati.o Paint.o -o strategyGame.exe