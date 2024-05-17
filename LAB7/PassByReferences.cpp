#include <iostream>
using namespace std;
void swapNumber(int &varA, int &varB);
int main() {
int varA = 25;
int varB = 100;
cout << " varA before swap : "<< varA << endl; //varA is 25
cout << "varB before swap : "<< varB << endl; //varB is 100
cout << "varA after swap: " << varB << endl; //varA is 100
cout << "varB after swap :" << varA << endl; //varB is 25

    return 0;
}
void swapNumber(int &varA, int &varB) {
    int temp = varA;
    varA = varB;
    varB = temp;
}