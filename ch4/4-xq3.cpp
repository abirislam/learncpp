#include <iostream>

int towerHeightInput();
double calculateHeight(int seconds);
void printHeight(int towerHeight, int seconds);
bool checkHeight(int towerHeight, double fallDistance);

int main() {
    int towerHeight { towerHeightInput() };
    printHeight(towerHeight, 0);
    printHeight(towerHeight, 1);
    printHeight(towerHeight, 2);
    printHeight(towerHeight, 3);
    printHeight(towerHeight, 4);
    printHeight(towerHeight, 5);

    return 0;
}

int towerHeightInput() {
    std::cout << "Enter the height of the tower in meters:\t";
    int height{};
    std::cin >> height;
    return height;
}

double calculateHeight(int seconds) {
    double fallDistance = 9.8 * seconds * seconds / 2;
    return fallDistance;
}
bool checkHeight(int towerHeight, double fallDistance) {
    return (towerHeight > fallDistance);
}

void printHeight(int towerHeight, int seconds) {
    if (checkHeight(towerHeight, calculateHeight(seconds)))
        std::cout << "At " << seconds << " seconds, the ball is at height: " << towerHeight - calculateHeight(seconds) << " meters.\n";
    else
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}
