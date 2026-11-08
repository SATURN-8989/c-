#include <iostream>

int main() {
    
    int portions = 2;     
    int cooking_time = 5;   
    int ready_portions = 0; 

    
    std::cout << "Recipe: Banana milkshake" << std::endl;
    std::cout << "Portions: " << portions << std::endl;
    std::cout << "Time: " << cooking_time << " min" << std::endl;
    std::cout << "Ready before: " << ready_portions << std::endl;

    
    std::cout << "Ingredients:" << std::endl;
    std::cout << "- Milk" << std::endl;
    std::cout << "- Banana" << std::endl;
    std::cout << "- Honey" << std::endl;

    
    std::cout << "Steps:" << std::endl;
    std::cout << "1. Peel the banana." << std::endl;
    std::cout << "2. Mix the ingredients." << std::endl;
    std::cout << "3. Pour into glasses." << std::endl;

    
    ready_portions = portions;
    std::cout << "Ready after: " << ready_portions << std::endl;

    return 0;
}
