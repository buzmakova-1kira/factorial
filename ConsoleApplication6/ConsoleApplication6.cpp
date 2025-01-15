#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n = get_input(); // Получаем корректный ввод
    string result = sum_of_factorials(n);
    cout << "Сумма факториалов от 1 до " << n << " равна: " << result << endl;
    return 0;
}