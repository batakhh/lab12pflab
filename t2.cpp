#include <iostream>
using namespace std;

void markAttendance(int *p, int size) {
    for (int i = 0; i < size; i++, p++)
        (*p)++;
}

int main() {
    cout << "Enter attendance: ";
    int attendance[5];
    for (int i = 0; i < 5; i++)
        cin >> attendance[i];

    int *ptr = attendance;

    markAttendance(ptr, 5);

    ptr = nullptr;

    cout << "Updated attendance: ";
    for (int i = 0; i < 5; i++)
        cout << attendance[i] << " ";
}