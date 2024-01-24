#include <iostream>
#include "Example_5.h"

using namespace std;

int main() {
    int a = 5;
    int b = 8;

    int result = sum(a, b);
    cout << "Result: " << result << endl;
}

int sum(int aa, int bb) {
    return aa+bb;
}