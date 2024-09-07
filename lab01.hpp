
class Board{
    int sizeBoard[3][3];
    int setMove(int x, int y, bool Xmove);
    void check_If_is_empty(int x, int y);
    bool checkWin();
};
class Player{
    int maxPlayers = 2;
    char name[20];
    bool isX;
};
class Position{
    int x;
    int y;
};
class Painter{
    void Draw();
};
class Engine{
    void StartGame();
    void RestartGame();
    void EndGame();
};
class RandomPlay{
    bool playerStart;
};