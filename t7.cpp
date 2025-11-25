#include <iostream>
using namespace std;

void reserveSeats(int *p, int size, int group) {
    int id = 101;
    for (int i = 0; i < size && group > 0; i++) {
        if (p[i] == 0) {
            p[i] = id++;
            group--;
        }
    }
}

int main() {
    int seats[6];
    for (int i = 0; i < 6; i++)
        cin >> seats[i];

    int group;
    cin >> group;

    int *currentSeat = seats;

    reserveSeats(currentSeat, 6, group);

    for (int i = 0; i < 6; i++)
        cout << seats[i] << " ";
    cout << endl;

    currentSeat = nullptr;

    if (currentSeat == nullptr)
        cout << "No seat selected";
}
