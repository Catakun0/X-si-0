#include "Paint.hpp"
#include "iostream"
#include "listele.hpp"
#include <cstdlib>
#include <windows.h>

void Paint::afisare(int i) {
    
    do 
    {
        if (i == -1)
        {
            std::system("cls");
            return;
        }
        if (i == 0) {
            int selector = 0;
            std::cout << "\n1 - Afisarea unitatilor detinute" << std::endl;
            std::cout << "2 - Generarea de unitati" << std::endl;
            std::cout << "3 - Mergi la urmatoarea lupta" << std::endl;
            std::cin >> selector;
            switch (selector) {
            case 1: //afisarea unitatilor
            {
                if (!listele::magList.empty() || !listele::undeadList.empty() || !listele::kingList.empty())
                {
                    if (!listele::magList.empty())
                    {
                        std::cout << "Afisarea magilor... \n" << std::endl;
                        Sleep(1000);
                        std::system("cls");
                        for (int j = 0; listele::magList.size() > j; j++) 
                        {
                            std::cout << "Name: " << listele::magList[j].name <<
                                "HP: " << listele::magList[j].hp <<
                                "Power: " << listele::magList[j].power <<
                                "Magical Power: " << listele::magList[j].magicalPower <<
                                "MP: " << listele::magList[j].mp <<
                                "Defence: " << listele::magList[j].defence <<
                                std::endl;
                        }
                    }
                    else if (!listele::undeadList.empty())
                    {

                    }
                    else if (!listele::kingList.empty())
                    {

                    }
                }
                else
                {
                    std::cout << "Nu aveti unitati detinute." << std::endl;
                }
                break;
            }
            default:
                std::cout << "Alegeti o optiune valida! " << std::endl;
                break;
            }
        }
        if (i == 1)
        {
            std::cout << "Generare..." << std::endl;
        }

    } while (true);
}
