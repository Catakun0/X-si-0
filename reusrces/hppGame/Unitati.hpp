#pragma once
#include <iostream>

class Unitati{
    private:
    std::string unityName;
    int unityHP;
    int unityPower;
    int unityDefence;

    public:
    void inserareName(std::string name){
        unityName = name;
    }
    void inserareHP(int hp){
        unityHP = hp;
    }
    void inserarePower(int power){
        unityPower = power;
    };
    void inserareDefence(int defence){
        unityDefence = defence;
    };
};