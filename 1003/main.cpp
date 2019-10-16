#include <iostream>
#include <vector>

using namespace std;

int main() {
    double test_case;
    vector<double> test_cases;
    cin >> test_case;
    while (test_case != 0.00) {
        test_cases.push_back(test_case);
        cin >> test_case;
    }
    //cout << "DEBUG: we got here" << endl;
    // Iterate over each test case
    for (unsigned i = 0; i < test_cases.size(); i++) {
        double test_overhang = 0;
        int num_cards = 0;
        // Add one to num_cards to
        while (test_overhang < test_cases.at(i)) {
            test_overhang = 0;
            num_cards++;
            // Calculate the overhang for a certain number of cards
            for (int j = 2; j <= num_cards + 1; j++) {
                test_overhang += 1.00 / (double) j;
            }
            //cout << "test_overhang: " << test_overhang << endl;
            //cout << "test_cases.at(i): " << test_cases.at(i) << endl;
            //cout << "num_cards: " << num_cards << endl;
        }
        //cout << "Final test_overhang: " << test_overhang << endl;
        cout << num_cards << " card(s)" << endl;
    }
}
