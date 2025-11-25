#include <iostream>
using namespace std;

void update(int *p, int add) {
    *p += add;
}

int main() {
    cout << "Enter a, b, c: ";
    int a, b, c;
    cin >> a >> b >> c;

    cout << "Enter add value: ";
    int add;
    cin >> add;

    int *ptr;

    ptr = &a;
    update(ptr, add);

    ptr = &b;
    update(ptr, add);

    ptr = &c;
    update(ptr, add);

    cout << "Updated values:" << endl;
    cout << a << endl << b << endl << c;
} 