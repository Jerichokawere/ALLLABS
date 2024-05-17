//obtaining file size
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    streampos begin;
    streampos end;
    ifsteam myfile ("example.bin, ios::binary");
    begin = myfile.tellg();
    myfile.seekg (0, ios::end);
    end = myfile.tellg();
    myfile.close();
    return 0;
}