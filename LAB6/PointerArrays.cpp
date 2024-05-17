#include <iostream>
using naemspace std;
int main () {
    int numbersArray[5];
    int * pPointer = nullptr;
    //assigning the address to the first element to the pointer
    pPointer = numbersArray;
    *pPointer = 10; //assign a value to the second element
    /*increment the pointer using pointer arithemetic to assign the address of the second element to the pointer*/
    pPointer++;
   *pPointer = 20 ; //assign a value to the second value
   //assign the address of the third element to the pointer
   pPointer = &numberArray[2];
   *pPointer = 30; //assign a value to the third element
   /*assign the address of the fourth element to the pointer using pointer arithmetic*/
   pPointer = numberArray + 3;
   *pPointer = 40; // assign a value of the fourth element to the pointer
//assign a value to the fifth element using indirection and pointer pointer arithmetic
*(p+4) = 50;
//iterate and output all the element elements in the array
for (int n = 0; n < 5; n++){
    cout << numberArray[n] << ",";
}
return 0;
}