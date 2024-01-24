#include <iostream>

struct Calculations
{
    int a;
    int b;
    int return_value;
};

void multiplyValues(const int& refA, const int& refB, int& refReturn) {
    std::cout << "In reference function " << std::endl;
    refReturn = refA * refB;
}

void multiplyValues(int* ptrA, int* ptrB, int* ptrReturn) {
    std::cout << "In pointers function " << std::endl;
    *ptrReturn = *ptrA * *ptrB;
}

void multiplyValues(Calculations& refVal) {
    std::cout << "In struct funcion " << std::endl;
    refVal.return_value = refVal.a * refVal.b;
}

int main () {
    int a = 20;
    int b = 6;
    int result = 0;

    multiplyValues(a,b,result);
    std::cout << "Result by reference: " << result << std::endl;

    multiplyValues(&a,&b,&result);
    std::cout << "Result by pointer: " << result << std::endl;

    Calculations values = {40,80,0};
    multiplyValues(values);
    std::cout << "Result by struct: " << values.return_value << std::endl;

    return 0;
}