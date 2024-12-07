@echo off

g++ -I json-develop/include -c Board.cpp -o Board.o
g++ -I json-develop/include -c GameEngine.cpp -o GameEngine.o
g++ -I json-develop/include -c Painter.cpp -o Painter.o
g++ -I json-develop/include -c Player.cpp -o Player.o
g++ -I json-develop/include -c RandomPlay.cpp -o RandomPlay.o
g++ -I json-develop/include -c main.cpp -o main.o

ar rcs libboard.a Board.o
ar rcs libgameengine.a GameEngine.o
ar rcs libpainter.a Painter.o
ar rcs libplayer.a Player.o
ar rcs librandomplay.a RandomPlay.o

g++ main.o -L. -lgameengine -lboard -lplayer -lrandomplay -lpainter -o tic_tac_toe.exe

g++ -I json-develop/include -I tests/ -c tests/player_test.cpp -o player_test.o
g++ -I json-develop/include -I tests/ -c tests/randomPlay_test.cpp -o randomPlay_test.o
g++ -I json-develop/include -I tests/ -c tests/board_test.cpp -o board_test.o
g++ -I json-develop/include -I tests/ -c tests/painter_test.cpp -o painter_test.o

g++ player_test.o -L. -lboard -lplayer -o player_test.exe
g++ randomPlay_test.o -L. -lboard -lrandomplay -o randomPlay_test.exe
g++ board_test.o -L. -lboard -o board_test.exe
g++ painter_test.o -L. -lpainter -o painter_test.exe

del *.o
del *.a

tic_tac_toe.exe
