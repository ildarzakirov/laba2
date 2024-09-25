#include <iostream>
#include <string>

// ������� ��� ������ ��������������� ���������
void printGreeting(const std::string& name, int age) {
    std::cout << "����, " << name << "! ��� " << age << " ���." << std::endl;
}

// ������� ��� ������ ����
void printMenu() {
    std::cout << "����:" << std::endl;
    std::cout << "1. ������ ��� � �������" << std::endl;
    std::cout << "2. ������� �������������� ���������" << std::endl;
    std::cout << "3. �������� ���" << std::endl;
    std::cout << "4. �������� �������" << std::endl;
    std::cout << "5. �����" << std::endl;
}

// ������� ��� ��������� �����
void changeName(std::string& name) {
    std::cout << "������� ����� ���: ";
    std::cin >> name;
}

// ������� ��� ��������� ��������
void changeAge(int& age) {
    std::cout << "������� ����� �������: ";
    std::cin >> age;
}

int main() {
    setlocale(LC_ALL, "Ru");
    // ���������� ��� �������� ����� � ��������
    std::string name;
    int age;

    int choice;

    // �������� ���� ���������
    while (true) {
        printMenu();
        std::cout << "������� ��� �����: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            // ���� ����� � ��������
            std::cout << "������� ���� ���: ";
            std::cin >> name;
            std::cout << "������� ��� �������: ";
            std::cin >> age;
            break;
        }
        case 2: {
            // ����� ��������������� ���������
            if (!name.empty()) {
                printGreeting(name, age);
            }
            else {
                std::cout << "������� ��� � ������� ����� ������� ��������������� ���������." << std::endl;
            }
            break;
        }
        case 3: {
            // �������� ���
            if (!name.empty()) {
                changeName(name);
            }
            else {
                std::cout << "������� ������� ����� ����������." << std::endl;
            }
            break;
        }
        case 4: {
            // �������� �������
            if (age != 0) {
                changeAge(age);
            }
            else {
                std::cout << "������� ������� ����� ����������." << std::endl;
            }
            break;
        }
        case 5: {
            // �����
            std::cout << "�� ��������!" << std::endl;
            return 0;
        }
        default: {
            std::cout << "������������ �����. ���������� �����." << std::endl;
        }
        }
    }

    return 0;
}