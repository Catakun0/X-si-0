
class Board{
    int sizeBoard[3][3];
    int setMove(int x, int y, bool Xmove);
    bool checkWin();
};
class Player{
    char name[20];
    bool isX;
};
class Position{
    int x;
    int y;
};