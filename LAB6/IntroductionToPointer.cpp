#include <iostream>
using namespace std;
int main {
   /* declaring the pointer and initialize it so that it doesn't store a random address */
   int* pPointer = nullptr;
   int integerVar = 5;
   //assign poiter to address of object 
    pPointer = &integerVar;
   // output the value  of integerVar
 cout << "integerVar: " << intergerVar << endl;
  // output the address of integerVar
  cout << "Address of intergerVar : " << &intergerVar << endl;
  //out the address of the pointer
  cout << "Address of pPointer" << &pPointer << endl;
  return 0 ;
}