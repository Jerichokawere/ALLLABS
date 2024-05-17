#include <limits> // For numeric_limits

int main() {
    int userInput;

    // Prompt the user for an integer value between 5 and 10
    std::cout << "Please enter an integer value between 5 and 10: ";

    // Repeat until a valid integer within the specified range is entered
    while (true) {
        // Check if the input is an integer
        if (std::cin >> userInput) {
            // Check if the input is within the specified range
            if (userInput >= 5 && userInput <= 10) {
                break; // Exit the loop if the input is valid
            } else {
                std::cout << "Invalid input. Please enter an integer value between 5 and 10: ";
            }
        } else {
            std::cout << "Invalid input. Please enter an integer value between 5 and 10: ";
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        }
    }

    // Output a statement informing the user that their input value has been accepted
    std::cout << "Your input value " << userInput << " has been accepted." << std::endl;

    return 0;
}