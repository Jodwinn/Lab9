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

    int currentDay = 13;
    int currentMonth = 6;
    int currentYear = 2024;

    Person person;
    person.name = "Dmytro Ivanovych";
    person.birthday = 16;
    person.birthMonth = 10;
    person.birthYear = 1998;
    person.birthPlace = "Dnipro";
    int age = calcAge(person, currentDay, currentMonth, currentYear);


    cout << "Name: " << person.name << endl;
    cout << "Date of birth: " << person.birthday << "." << person.birthMonth << "." << person.birthYear << endl;
    cout << "Place of birth: " << person.birthPlace << endl;
    cout << "Age: " << age << " years" << endl;

    return 0;
}
