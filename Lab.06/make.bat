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

g++ -I json-develop/include -c tests/test_board.cpp -o test_board.o
g++ -I json-develop/include -c tests/test_gameengine.cpp -o test_gameengine.o

g++ test_board.o test_gameengine.o -L. -lgameengine -lboard -lplayer -lrandomplay -lpainter -o test_suite.exe

del *.o
del *.a

test_suite.exe
