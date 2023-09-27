
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    
    while (T--) {
        int X, Y;
        cin >> X >> Y; // Tastiness values for chocolate and candy
        
        int chocolate_tastiness = 2 * X;
        int candy_tastiness = 5 * Y;
        
        if (chocolate_tastiness > candy_tastiness) {
            cout << "Chocolate" << endl;
        } else if (candy_tastiness > chocolate_tastiness) {
            cout << "Candy" << endl;
        } else {
            cout << "Either" << endl;
        }
    }
    
    return 0;
}
