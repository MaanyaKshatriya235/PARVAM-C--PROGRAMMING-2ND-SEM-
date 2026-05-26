#include <iostream>
#include <string>

// 1. Basic Function Declaration (Prototype)
void greetUser(std::string name);

int main() {
    // 1. Basic Function
    greetUser("Yashna");
    greetUser("Ayra");
    greetUser("Krishna");
    return 0;
}
// --- Function Definitions ---

void greetUser(std::string name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}

