#include <iostream>
using namespace std;

void deduct(int *p, int amount) {
    int notes[4] = {5000, 1000, 500, 100};
    for (int i = 0; i < 4; i++) {
        int needed = amount / notes[i];
        if (needed <= p[i]) {
            p[i] -= needed;
            amount -= needed * notes[i];
        }
    }
}

int main() {
    int arr[4];
    for (int i = 0; i < 4; i++)
        cin >> arr[i];

    int withdraw;
    cin >> withdraw;

    int *ptr = arr;

    deduct(ptr, withdraw);

    ptr = nullptr;

    int notes[4] = {5000, 1000, 500, 100};
    for (int i = 0; i < 4; i++)
        cout << notes[i] << ": " << arr[i] << endl;
}
