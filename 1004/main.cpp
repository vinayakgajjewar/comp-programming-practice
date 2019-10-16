#include <iostream>

using namespace std;

int main() {
    double total = 0;
    for (int i = 0; i < 12; i++) {
        double closing_bal;
        cin >> closing_bal;
        total += closing_bal;
    }
    cout << total / 12 << endl;
    return 0;
}
