#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 5;

    int& reference_a = a; // reference must be assigned when declared
    reference_a = b; // reference can't be re-assigned. a gets value of b

    int *pointer_a = &a; // it's possible to make pointer without assingment
    cout << *pointer_a << endl;

    cout << "Value of variable a: " << a << endl;
    cout << "Value of reference a: " << reference_a << endl;
    cout << "Value of pointer a: " << pointer_a << endl;
    cout << "Value in location pointer_a points: " << *pointer_a << endl;
    return 0;
}