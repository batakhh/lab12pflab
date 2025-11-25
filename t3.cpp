#include <iostream>
using namespace std;

void showBeds(int *p, int size) {
    for (int i = 0; i < size; i++)
        cout << *(p + i) << " ";
    cout << endl;
}

int main() {
    int beds[4];
    for (int i = 0; i < 4; i++)
        cin >> beds[i];

    int *currentBed = beds;

    showBeds(currentBed, 4);

    currentBed = nullptr;

    if (currentBed == nullptr)
        cout << "No bed selected";
}
