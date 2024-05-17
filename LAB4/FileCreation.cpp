#include <iostream> 
#include <fstream> 
using namespace std; 
int main(){ 
// Create and open a text file 
ifstream myfile("exampleFile.txt"); 
// Close the file 
myfile.close(); 
return 0;
}