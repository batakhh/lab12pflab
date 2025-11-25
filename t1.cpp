#include <iostream>
using namespace std;

int computeTotal(int *p, int size) {
    int total = 0;
    for (int i = 0; i < size; i++)
        total += p[i];
    return total;
}

int main() {
    cout << "Enter array size: ";
    int n;
    cin >> n;

    cout << "Enter prices: ";
    int *prices = new int[n];
    for (int i = 0; i < n; i++)
        cin >> prices[i];

    cout << "Enter discounts: ";
    int *discount = new int[n];
    for (int i = 0; i < n; i++)
        cin >> discount[i];

    cout << "Total prices: " << computeTotal(prices, n) << endl;
    cout << "Total discounts: " << computeTotal(discount, n) << endl;
}