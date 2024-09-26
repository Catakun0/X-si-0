@echo off
g++ Board.cpp -o Board.o -c
g++ GameEngine.cpp -o GameEngine.o -c
g++ Painter.cpp -o Painter.o -c
g++ Player.cpp -o Player.o -c
g++ RandomPlay.cpp -o RandomPlay.o -c
g++ main.cpp -o main.o -c
g++ Board.o GameEngine.o Painter.o Player.o RandomPlay.o main.o -o game.exe


