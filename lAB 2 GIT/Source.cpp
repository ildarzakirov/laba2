#include <iostream>
#include <string>

// ������� ��� ������ ��������������� ���������
void printGreeting(const std::string& name, int age) {
    std::cout << "������, " << name << "! ��� " << age << " ���." << std::endl;
}

int main() {
    // ���������� ��� �������� ����� � ��������
    std::string name;
    int age;

    // ���� ����� � ��������
    std::cout << "������� ���� ���: ";
    std::cin >> name;
    std::cout << "������� ��� �������: ";
    std::cin >> age;

    // ����� ��������������� ���������
    printGreeting(name, age);

    return 0;
}