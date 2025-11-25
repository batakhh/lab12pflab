#include <iostream>
using namespace std;

void update(int *p, int add) {
    *p += add;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int add;
    cin >> add;

    int *ptr;

    ptr = &a;
    update(ptr, add);

    ptr = &b;
    update(ptr, add);

    ptr = &c;
    update(ptr, add);

    cout << a << endl << b << endl << c;
}
