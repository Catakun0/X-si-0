#include "Paint.hpp"
#include "iostream"
#include "listele.hpp"

void Paint::afisare(int i) {
    if (i == 0) {
        int selector = 0;
        std::cout << "\n1 - Afisarea unitatilor detinute" << std::endl;
        std::cout << "2 - Generarea de unitati" << std::endl;
        std::cout << "3 - Mergi la urmatoarea lupta" << std::endl;
        std::cin >> selector;
        switch (selector) {
        case 1: {
            if (!listele::unityList.empty()) {
                std::cout << "Numarul de unitati pe care il detineti este de: " << listele::unityList.size() << " unitati" << std::endl;
                for (int j = 0; j < listele::unityList.size(); j++) {
                    std::cout << "Numele: " << listele::unityList[j].unityName << "/ HP: " << listele::unityList[j].unityHP << "/ Power: "
                        << listele::unityList[j].unityPower << "/ Defence: " << listele::unityList[j].unityDefence << std::endl;
                }
            }
            else {
                std::cout << "Nu aveti unitati detinute." << std::endl;
            }
            break;
        }
        default:
            break;
        }
    }
    return;
}
