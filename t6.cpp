#include <iostream>
using namespace std;

void borrowBooks(int **pp, int b[], int size) {
    int *p = *pp;
    for (int i = 0; i < size; i++)
        p[i] -= b[i];
}

int main() {
    int stock[5], borrowArr[5];
    for (int i = 0; i < 5; i++)
        cin >> stock[i];
    for (int i = 0; i < 5; i++)
        cin >> borrowArr[i];

    int *ptr = stock;

    borrowBooks(&ptr, borrowArr, 5);

    for (int i = 0; i < 5; i++)
        cout << stock[i] << " ";
    cout << endl;

    int newStock[5];
    for (int i = 0; i < 5; i++)
        cin >> newStock[i];

    ptr = newStock;

    for (int i = 0; i < 5; i++)
        cout << ptr[i] << " ";
}
