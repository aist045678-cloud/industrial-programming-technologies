#include <iostream>

void moveIngredients(int n, int from, int to, int aux) {
    if (n == 0) {
        return;
    }
    
    // Перекладываем n-1 ингредиентов со стартовой на вспомогательную салфетку
    moveIngredients(n - 1, from, aux, to);
    
    // Перекладываем самый крупный из текущих (n-й) на целевую салфетку
    std::cout << "Ingredient " << n << " move from " << from << " to " << to << "\n";
    
    // Перекладываем n-1 ингредиентов со вспомогательной на целевую салфетку
    moveIngredients(n - 1, aux, to, from);
}

int main() {
    int n;
    if (std::cin >> n) {
        moveIngredients(n, 1, 3, 2);
    }
    return 0;
}
