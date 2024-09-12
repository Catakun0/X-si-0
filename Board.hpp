
class Board{ //program one
    char squere[9]; //sizeBoard [3][3]
    public:
    int setMove(int position, bool Xmove);
    void check_If_is_empty(int position);
    bool checkWin();
};
