#include <iostream>
#include <string>
using namespace std;

// Функция для вычисления факториала
string factorial(int n) {
    string result = "1"; // 0! и 1! равны 1
    for (int i = 2; i <= n; i++) {
        result = multiply(result, i);
    }
    return result;
}
// Функция для вычисления суммы факториалов от 1 до n
string sum_of_factorials(int n) {
    string total_sum = "0";

    for (int i = 1; i <= n; i++) {
        total_sum = add(total_sum, factorial(i));
    }
    return total_sum;
}
// Функция для получения корректного ввода от пользователя
int get_input() {
    int n;
    while (true) {
        cout << "Введите целое число n (n > 10): ";
        cin >> n;

        if (cin.fail() || n <= 10) {
            cin.clear(); // сбросить состояние потока
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // игнорировать некорректный ввод
            cout << "Ошибка: введите целое число больше 10." << endl;
        }
        else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // очистить буфер ввода
            return n;
        }
    }
}
int main() {
    setlocale(LC_ALL, "Russian");
    int n = get_input(); // Получаем корректный ввод
    string result = sum_of_factorials(n);
    cout << "Сумма факториалов от 1 до " << n << " равна: " << result << endl;
    return 0;
}