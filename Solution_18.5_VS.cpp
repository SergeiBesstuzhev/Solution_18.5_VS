#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class PlayerList {
public:
    PlayerList() : Name("Player"), Score(0) {}
    PlayerList(std::string _Name, float _Score) : Name(_Name), Score(_Score) {}
    void ShowParam() {
        std::cout << Name << " " << Score << "\n";
    }
    float GetScore() {
        return Score;
    }
private:
    std::string Name;
    float Score;
};

int main()
{
    int iter = 0; 
    int PlayerCount;
    std::cout << "How many players to add: ";
    std::cin >> PlayerCount;
    
    std::vector<PlayerList>pArr(PlayerCount);

    std::cout << "Fill the list\n";

    for (int i = 0; i < PlayerCount; i++) {
        std::string Name;
        std::cout << "Enter Name: ";
        std::cin >> Name;

        float Score;
        std::cout << "Enter Score: ";
        std::cin >> Score;

        std::cout << std::endl;

        PlayerList p(Name, Score);
        pArr[i] = p;
    }

    std::cout << "\t.:Player List:. \n\n";

    // sort array
    for (int i = 0; i < PlayerCount - 1; i++) {
        PlayerList p;
        for (int j = 1; j < PlayerCount; j++) {
            if (pArr[i].GetScore() < pArr[j].GetScore()) {
                p = pArr[i];
                pArr[i] = pArr[j];
                pArr[j] = p;
                // метод меняет местами элементы
                //std::swap(pArr[i], pArr[j]); 
            }
        }
    }

    for (int i = 0; i < PlayerCount; i++) {
        pArr[i].ShowParam();
    }
}