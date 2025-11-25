#include <iostream>
using namespace std;

void calculate(int *money, int total) {
    int values[4] = {5000, 1000, 500, 100};

    for (int i = 0; i < 4; i++) {
        int count = total / values[i];
        if (count <= money[i]) {
            money[i] = money[i] - count;
            total = total - (count * values[i]);
        }
    }
}

int main() {
    cout << "Enter bank notes: ";
    int bank[4];

    for (int i = 0; i < 4; i++) {
        cin >> bank[i];
    }

    cout << "Enter amount needed: ";
    int need;
    cin >> need;

    int *wallet = bank;

    calculate(wallet, need);

    wallet = nullptr;

    cout << "Remaining bank notes:" << endl;
    int types[4] = {5000, 1000, 500, 100};
    for (int i = 0; i < 4; i++) {
        cout << types[i] << " " << bank[i] << endl;
    }

    return 0;
}