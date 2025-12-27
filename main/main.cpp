#include <iostream>
#include </Users/maksimkokotkin/Documents/unified_labs/lab1/lab1.h>
#include </Users/maksimkokotkin/Documents/unified_labs/lab2/lab2.h>
#include </Users/maksimkokotkin/Documents/unified_labs/lab3/lab3.h>
#include </Users/maksimkokotkin/Documents/unified_labs/lab4/lab4.h>

using namespace std;

void showMenu() {
    cout << "\n";
    cout << "     ★   ★   ★   ★   ★   ★   ★   ★   ★   ★   ★\n";
    cout << "        О Б Ъ Е Д И Н Е Н Н Ы Й   П Р О Е К Т\n";
    cout << "     ★   ★   ★   ★   ★   ★   ★   ★   ★   ★   ★\n";
    cout << "\n";
    cout << "              4 ЛАБОРАТОРНЫЕ РАБОТЫ\n";
    cout << "\n";
    cout << "         /\\         /\\         /\\         /\\\n";
    cout << "        /  \\       /  \\       /  \\       /  \\\n";
    cout << "       /____\\     /____\\     /____\\     /____\\\n";
    cout << "         1          2          3          4\n";
    cout << "\n";
    cout << "      ======================================\n";
    cout << "      1. Лабораторная 1: Работа с битами\n";
    cout << "      2. Лабораторная 2: Сортировки и поиск\n";
    cout << "      3. Лабораторная 3: Матрицы и блоки\n";
    cout << "      4. Лабораторная 4: Обработка текста\n";
    cout << "      0. Выход из программы\n";
    cout << "      ======================================\n";
    cout << "\n";
    cout << "     Выберите номер лабораторной (1-4) или 0: ";
}

void clearInputBuffer() {
    cin.clear();
    cin.ignore(1000, '\n');
}

void waitForEnter() {
    cout << "\n     Нажмите Enter чтобы вернуться в меню...";
    clearInputBuffer();
    cin.get();
}

int main() {
    int choice;

    do {
        showMenu();
        cin >> choice;

        if (cin.fail()) {
            cout << "\n     Ошибка ввода! Введите число.\n";
            clearInputBuffer();
            continue;
        }

        switch(choice) {
            case 1:
                cout << "\n     ★ ★ ★ ЛАБОРАТОРНАЯ 1: РАБОТА С БИТАМИ ★ ★ ★\n";
                runLab1();
                waitForEnter();
                break;

            case 2:
                cout << "\n     ★ ★ ★ ЛАБОРАТОРНАЯ 2: СОРТИРОВКИ И ПОИСК ★ ★ ★\n";
                runLab2();
                waitForEnter();
                break;

            case 3:
                cout << "\n     ★ ★ ★ ЛАБОРАТОРНАЯ 3: МАТРИЦЫ И БЛОКИ ★ ★ ★\n";
                runLab3();
                waitForEnter();
                break;

            case 4:
                cout << "\n     ★ ★ ★ ЛАБОРАТОРНАЯ 4: ОБРАБОТКА ТЕКСТА ★ ★ ★\n";
                runLab4();
                waitForEnter();
                break;

            case 0:
                cout << "\n     ★ ★ ★ ВЫХОД ИЗ ПРОГРАММЫ. ДО СВИДАНИЯ! ★ ★ ★\n";
                break;

            default:
                cout << "\n     Неверный выбор! Введите число от 0 до 4.\n";
                waitForEnter();
                break;
        }

    } while (choice != 0);

    return 0;
}