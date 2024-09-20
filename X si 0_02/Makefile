all: x_and_0

x_and_0: Board.o GameEngine.o Painter.o Player.o RandomPlay.o main.o

Board.o:
    g++ Board.cpp -o Board.o -c

GameEngine.o:
    g++ GameEngine.cpp -o GameEngine.o -c

Painter.o:
    g++ Painter.cpp -o Painter.o -c

Player.o:
    g++ Player.cpp -o Player.o -c

RandomPlay.o:
   g++ RandomPlay.cpp -o RandomPlay.o -c

clean:
    rm -f *.o *.exe