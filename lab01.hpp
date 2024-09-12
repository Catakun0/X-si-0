
class Board{
    char squere[10] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9'}; //sizeBoard [3][3]
    int setMove(int x, int y, bool Xmove);
    void check_If_is_empty(int x, int y);
    bool checkWin();
};
class Player{ //Players
    int maxPlayers = 2;
    char name[20];
    bool isX;
};
class Position{  //
    int x;
    int y;
};
class Painter{  //Afisarea datelor
    void Draw();
};
class Engine{  //Functinalitatea jocului
    void StartGame();
    void RestartGame();
    void EndGame();
};
class RandomPlay{ //RandomPlayerStart
    bool playerStart;
};