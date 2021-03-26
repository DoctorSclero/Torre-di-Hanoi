#include <iostream>
using namespace std;

void moveDisk(unsigned int disk, unsigned int dest, unsigned int arr) {
    cout << "Move disk " << disk << ": " << dest << " => " << arr << endl;
}

void moveTower(unsigned int tower_height, unsigned int dest, unsigned int arr) {
    if (tower_height > 0) {
        moveTower(tower_height - 1, dest, 6 - dest - arr);
        moveDisk(tower_height, dest, arr);
        moveTower(tower_height - 1, 6 - dest - arr, arr);
    }
}

int main() {
    int tower_height = 3;
    cout << "Calcolo delle mosse per la torre di Hanoi\n";
    moveTower(tower_height, 1, 3);
}