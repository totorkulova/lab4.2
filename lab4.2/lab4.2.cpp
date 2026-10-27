// lab4.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    char symbol; // Переменная для хранения символа

    // Запрашиваем один символ
    cout << "Введите один символ: ";
    cin >> symbol;

    // Определяем тип символа
    switch (symbol) {
        // Гласные буквы в нижнем регистре
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        // Гласные буквы в верхнем регистре
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "Гласная буква" << endl;
        break;

        // Согласные буквы в нижнем регистре
    case 'b': case 'c': case 'd': case 'f':
    case 'g': case 'h': case 'j': case 'k':
    case 'l': case 'm': case 'n': case 'p':
    case 'q': case 'r': case 's': case 't':
    case 'v': case 'w': case 'x': case 'y':
    case 'z':

        // Согласные буквы в верхнем регистре
    case 'B': case 'C': case 'D': case 'F':
    case 'G': case 'H': case 'J': case 'K':
    case 'L': case 'M': case 'N': case 'P':
    case 'Q': case 'R': case 'S': case 'T':
    case 'V': case 'W': case 'X': case 'Y':
    case 'Z':
        cout << "Согласная буква" << endl;
        break;

        // Все десять цифр объединены в один вариант
    case '0': case '1': case '2': case '3':
    case '4': case '5': case '6': case '7':
    case '8': case '9':
        cout << "Цифра" << endl;
        break;

        // Все остальные символы
    default:
        cout << "Другой символ" << endl;
        break;
    }

    return 0;
}
