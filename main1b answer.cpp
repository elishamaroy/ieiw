#include <iostream>
using namespace std;

int main() {
    double sum = 0.0;
    for (int i = 1; i <= 95; i += 2) {
        sum += (double)i / (i + 2);
    }
    cout << "The final sum of the series is : " << sum << endl;
    return 0;
}

