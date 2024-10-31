#include <iostream>
#include "logger.h"

using namespace std;

int main() {
    try {
        
        logger frac1(3, 4); // 3/4
        logger frac2(2, 5); // 2/5

        // Виведення дробів
        cout << "Fraction 1: ";
        frac1.print();
        cout << endl;

        cout << "Fraction 2: ";
        frac2.print();
        cout << endl;

        // Арифметичні операції
        logger sum = frac1 + frac2;
        logger difference = frac1 - frac2;
        logger product = frac1 * frac2;
        logger quotient = frac1 / frac2;

       
        cout << "Sum: ";
        sum.print();
        cout << endl;

        cout << "Difference: ";
        difference.print();
        cout << endl;

        cout << "Product: ";
        product.print();
        cout << endl;

        cout << "Quotient: ";
        quotient.print();
        cout << endl;

    }
    catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
