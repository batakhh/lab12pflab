#include <iostream>
using namespace std;

int computeTotal(int *p, int size) {
    int total = 0;
    for (int i = 0; i < size; i++)
        total += *(p + i);  // or total += p[i];
    return total;
}

int main() {
    int n;
    cin >> n;

    int *prices = new int[n];
    for (int i = 0; i < n; i++)
        cin >> prices[i];

    int *discount = new int[n];
    for (int i = 0; i < n; i++)
        cin >> discount[i];

    cout << computeTotal(prices, n) << endl;
    cout << computeTotal(discount, n) << endl;
}