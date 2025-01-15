#include <iostream>
#include <string>
using namespace std;

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