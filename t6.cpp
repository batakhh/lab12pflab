#include <iostream>
using namespace std;

void borrowBooks(int *p, int b[], int size) {
    for (int i = 0; i < size; i++)
        p[i] -= b[i];
}

int main() {
    cout << "Enter stock: ";
    int stock[5], borrowArr[5];

    for (int i = 0; i < 5; i++)
        cin >> stock[i];

    cout << "Enter borrow: ";
    for (int i = 0; i < 5; i++)
        cin >> borrowArr[i];

    borrowBooks(stock, borrowArr, 5);

    cout << "Updated stock: ";
    for (int i = 0; i < 5; i++)
        cout << stock[i] << " ";
    cout << endl;

    cout << "Enter new stock: ";
    int newStock[5];

    for (int i = 0; i < 5; i++)
        cin >> newStock[i];

    int *ptr = newStock;

    cout << "New stock: ";
    for (int i = 0; i < 5; i++)
        cout << ptr[i] << " ";
}

