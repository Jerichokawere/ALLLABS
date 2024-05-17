#include <iostream>
using namespace std;
int main() {
    //null pointer
    int * pPointer = nullptr;
    int numberArray[3] = {10, 20, 30};
    //assign address of the first element to pointer
    pPointer =  numberArray;
    //output the address of the first element 
    cout << "Address at pPointer : " << pointer << endl;
    cout << "Address of numbersArray[0]: " << numberArray << endl;
    //output the value of the first element using the pointer and indirection 
    cout < "Value at pPointer : " << *pPointer << endl;
    //this outputs the value of the second element 
    cout << " Value at ++pPointer : " << *(++pPointer) << endl;
    //assign address of the first element to pointer
    pPointer = numberArray;
    This outputs the value of the first element 
    cout << "Value at pPointer++: " << *(pPointer++) << endl;
    return 0;
}