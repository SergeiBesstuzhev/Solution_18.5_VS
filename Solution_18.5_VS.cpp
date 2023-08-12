#include <iostream>
#include <string>
#include <vector>

class PlayerList {
public:
    PlayerList() : Name("Player"), Score(0) {}
    PlayerList(std::string _Name, float _Score) : Name(_Name), Score(_Score) {}
    void ShowParam() {
        std::cout << Name << " " << Score << "\n";
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

    for (int i = 0; i < PlayerCount; i++) {
        pArr[i].ShowParam();
    }
}