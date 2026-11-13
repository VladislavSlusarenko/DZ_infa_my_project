#include <iostream>
using namespace std;

bool checkOverlap(double blockLeft, double blockRight,
                  double baseLeft, double baseRight) {
    if (blockRight < baseLeft || blockLeft > baseRight) {
        return false;
    }

    return true;
}

int main() {
    bool result = checkOverlap(-20, 80, -50, 50);

    cout << result << endl;

    return 0;
}
