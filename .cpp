#include <iostream>
#include <string>
#include <windows.h>
using namespace std;


struct Person {
    string name;         
    int birthday;       
    int birthMonth;      
    int birthYear;      
    string birthPlace;   
};
int calcAge(const Person& person, int currentDay, int currentMonth, int currentYear) {
    int age = currentYear - person.birthYear;

    if (currentMonth < person.birthMonth ||
        (currentMonth == person.birthMonth && currentDay < person.birthday)) {
        age--;
    }

    return age;
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int currentDay = 13;
    int currentMonth = 6;
    int currentYear = 2024;

    Person person;
    person.name = "Дмитро Іванович";
    person.birthday = 16;
    person.birthMonth = 10;
    person.birthYear = 1998;
    person.birthPlace = "Дніпро";
    int age = calcAge(person, currentDay, currentMonth, currentYear);


    cout << "Ім'я: " << person.name << endl;
    cout << "Дата народження: " << person.birthday << "." << person.birthMonth << "." << person.birthYear << endl;
    cout << "Місце народження: " << person.birthPlace << endl;
    cout << "Вік: " << age << " років" << endl;

    return 0;
}
