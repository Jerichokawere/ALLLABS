
#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;
int main() {
    // Seed 
   srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 0 and 11
    int daysUntilExpiration = rand() % 12;

    // Output message based on conditions
    if (daysUntilExpiration <= 0) {
        std::cout << "Your subscription has expired." << std::endl;
    } else if (daysUntilExpiration <= 1) {
    cout << "Your subscription expires within a day!\nRenew now and save 20%!" << std::endl;
    } else if (daysUntilExpiration <= 5) {
    cout << "Your subscription expires in " << daysUntilExpiration << " days.\nRenew now and save 10%!" << std::endl;
    } else if (daysUntilExpiration <= 10) {
    cout << "Your subscription will expire soon. Renew now!" << std::endl;
    } else {
       cout << "You have an active subscription." << std::endl;
    }

    return 0;
}