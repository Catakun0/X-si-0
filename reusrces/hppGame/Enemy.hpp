#pragma once
#include <iostream>

class Enemy{
    private:
    std::string enemyName;
    int enemyHP;
    int enemyPower;
    int enemyDefence;

    public:
    void inserareName(std::string name){
        enemyName = name;
    }
    void inserareHP(int hp){
        enemyHP = hp;
    }
    void inserarePower(int power){
        enemyPower = power;
    };
    void inserareDefence(int defence){
        enemyDefence = defence;
    };
};