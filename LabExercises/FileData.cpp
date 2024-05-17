#include <iostream>
#include <fstream>
#include <string>
#include <cctype> 
using namespace std;
// Function to calculate the number of vowels in a string
int countVowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (toupper(c) == 'A' || std::toupper(c) == 'E' || std::toupper(c) == 'I' || std::toupper(c) == 'O' || std::toupper(c) == 'U') {
            count++;
        }
    }
    return count;
}

// Function to calculate the number of words in a string
int countWords(const std::string& str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (isalpha(c)) {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    return count;
}

// Function to reverse a string
string Reverse(const std::string& str) {
    return std::string(str.rbegin(), str.rend());
}

// Function to capitalize the second letter of each word in a string
string capitalizeSecondLetter(const std::string& str) {
    string result = str;
    bool capitalize = false;
    for (char& c : result) {
        if (isalpha(c)) {
            if (capitalize) {
                c = toupper(c);
                capitalize = false;
            } else {
                capitalize = true;
            }
        } else {
            capitalize = false;
        }
    }
    return result;
}

int main() {
    ifstream inputFile("textfile.txt"); // Open the text file
   string fileData;

    // Read the contents of the file into a string variable
    if (inputFile.is_open()) {
      getline(inputFile, fileData);
        inputFile.close(); // Close the file
    } else {
       cerr << "Unable to open file." << std::endl;
        return 1;
    }

    // Output the number of vowels in the text file statement
   cout << "Number of vowels: " << countVowels(fileData) << std::endl;

    // Output the number of words in the text file statement
  cout << "Number of words: " << countWords(fileData) << std::endl;

    // Output the statement in reverse
    cout << "Reversed statement: " << Reverse(fileData) << std::endl;

    // Output the statement with the second letter of each word capitalized
    cout << "Capitalized second letter: " << capitalizeSecondLetter(fileData) << std::endl;

    return 0;
}