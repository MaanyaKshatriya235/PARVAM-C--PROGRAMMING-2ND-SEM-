//restaurant
#include <iostream>
#include <string>

class Restaurant {
public:
    std::string restaurantName;

    void showMenu() {
        std::cout << "Welcome to " << restaurantName << "!\n";
        std::cout << "----------- MENU -----------\n";

        std::cout << "1. Biryani      - Rs. 250\n";
        std::cout << "2. Pizza        - Rs. 300\n";
        std::cout << "3. Burger       - Rs. 150\n";
        std::cout << "4. Pasta        - Rs. 220\n";
        std::cout << "5. Ice Cream    - Rs. 100\n";
    }
};

int main() {

    Restaurant myRestaurant;
    myRestaurant.restaurantName = "Food Paradise";

    myRestaurant.showMenu();

    return 0;
}