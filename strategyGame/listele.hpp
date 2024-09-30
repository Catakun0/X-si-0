#pragma once
#include <iostream>
#include <vector>
#include "Enemy.hpp"
//unitatile
#include "Mag.hpp"
#include "Undead.hpp"
#include "King.hpp"

class listele{
    public:
    static std::vector<Enemy> enemyList;
    static std::vector<Mag> magList;
    static std::vector<Undead> undeadList;
    static std::vector<King> kingList;
};