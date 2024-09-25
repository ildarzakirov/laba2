#include <iostream>
#include <string>

// Функция для вывода приветственного сообщения
void printGreeting(const std::string& name, int age) {
    std::cout << "Пока, " << name << "! Вам " << age << " лет." << std::endl;
}

int main() {
    setlocale(LC_ALL, "Ru");
    // Переменные для хранения имени и возраста
    std::string name;
    int age;

    // Ввод имени и возраста
    std::cout << "Введите ваше имя: ";
    std::cin >> name;
    std::cout << "Введите ваш возраст: ";
    std::cin >> age;

    // Вывод приветственного сообщения
    printGreeting(name, age);

    return 0;
}