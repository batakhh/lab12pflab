#include <iostream>
using namespace std;

int computeTotal(int **pp, int size) {
    int total = 0;
    int *p = *pp;
    for (int i = 0; i < size; i++)
        total += *(p + i);
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

    int *ptr = prices;
    cout << computeTotal(&ptr, n) << endl;

    ptr = discount;
    cout << computeTotal(&ptr, n) << endl;
}
