#include <iostream>
using namespace std;
void swapNumber(int* varA, int* varB);
int main() {
    int A= 25;
    int B = 100;

    cout << "Before swapping: A = " << A << ", B = " << B << std::endl;

    swapNumber(&A, &B);

cout << "After swapping: A = " << A << ", B = " << B << endl;

    return 0;
}
void swapNumber(int* varA, int* varB) {
    int temp = *varA;
    *varA = *varB;
    *varB = temp;
}