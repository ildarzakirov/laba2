#include <iostream>
#include <string>

// Функция для вывода приветственного сообщения
void printGreeting(const std::string& name, int age) {
    std::cout << "Пока, " << name << "! Вам " << age << " лет." << std::endl;
}

// Функция для вывода меню
void printMenu() {
    std::cout << "Меню:" << std::endl;
    std::cout << "1. Ввести имя и возраст" << std::endl;
    std::cout << "2. Вывести приветственное сообщение" << std::endl;
    std::cout << "3. Изменить имя" << std::endl;
    std::cout << "4. Изменить возраст" << std::endl;
    std::cout << "5. Выход" << std::endl;
}

// Функция для изменения имени
void changeName(std::string& name) {
    std::cout << "Введите новое имя: ";
    std::cin >> name;
}

// Функция для изменения возраста
void changeAge(int& age) {
    std::cout << "Введите новый возраст: ";
    std::cin >> age;
}

int main() {
    setlocale(LC_ALL, "Ru");
    // Переменные для хранения имени и возраста
    std::string name;
    int age;

    int choice;

    // Основной цикл программы
    while (true) {
        printMenu();
        std::cout << "Введите ваш выбор: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            // Ввод имени и возраста
            std::cout << "Введите ваше имя: ";
            std::cin >> name;
            std::cout << "Введите ваш возраст: ";
            std::cin >> age;
            break;
        }
        case 2: {
            // Вывод приветственного сообщения
            if (!name.empty()) {
                printGreeting(name, age);
            }
            else {
                std::cout << "Введите имя и возраст перед выводом приветственного сообщения." << std::endl;
            }
            break;
        }
        case 3: {
            // Изменить имя
            if (!name.empty()) {
                changeName(name);
            }
            else {
                std::cout << "Введите имяФСФС перед изменением." << std::endl;
            }
            break;
        }
        case 4: {
            // Изменить возраст
            if (age != 0) {
                changeAge(age);
            }
            else {
                std::cout << "Введите возраст перед изменением." << std::endl;
            }
            break;
        }
        case 5: {
            // Выход
            std::cout << "До свидания!" << std::endl;
            return 0;
        }
        default: {
            std::cout << "Неправильный выбор. Попробуйте снова." << std::endl;
        }
        }
    }

    return 0;
}