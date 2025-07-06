#include <iostream>
#include <cstring>
using namespace std;

struct Employee {
    char surname[30];
    int birth_year;
    char position[30];
    double salary;
    char education[30];
};

int main() {
    const int SIZE = 5;
    Employee staff[SIZE];

    strcpy_s(staff[0].surname, sizeof(staff[0].surname), "Ivanenko");
    staff[0].birth_year = 1959;
    strcpy_s(staff[0].position, sizeof(staff[0].position), "Engineer");
    staff[0].salary = 15000;
    strcpy_s(staff[0].education, sizeof(staff[0].education), "Higher");

    strcpy_s(staff[1].surname, sizeof(staff[1].surname), "Petrenko");
    staff[1].birth_year = 1980;
    strcpy_s(staff[1].position, sizeof(staff[1].position), "Accountant");
    staff[1].salary = 12000;
    strcpy_s(staff[1].education, sizeof(staff[1].education), "Secondary");

    strcpy_s(staff[2].surname, sizeof(staff[2].surname), "Syderenko");
    staff[2].birth_year = 1960;
    strcpy_s(staff[2].position, sizeof(staff[2].position), "Guard");
    staff[2].salary = 10000;
    strcpy_s(staff[2].education, sizeof(staff[2].education), "Secondary");

    strcpy_s(staff[3].surname, sizeof(staff[3].surname), "Melnyk");
    staff[3].birth_year = 1990;
    strcpy_s(staff[3].position, sizeof(staff[3].position), "HR");
    staff[3].salary = 13000;
    strcpy_s(staff[3].education, sizeof(staff[3].education), "Higher");

    strcpy_s(staff[4].surname, sizeof(staff[4].surname), "Koval");
    staff[4].birth_year = 1955;
    strcpy_s(staff[4].position, sizeof(staff[4].position), "Director");
    staff[4].salary = 25000;
    strcpy_s(staff[4].education, sizeof(staff[4].education), "Higher");

    int current_year = 2025;

    cout << "Employees older than 60 years:\n";
    for (int i = 0; i < SIZE; i++) {
        int age = current_year - staff[i].birth_year;
        if (age > 60) {
            cout << "Surname: " << staff[i].surname << endl;
            cout << "Birth Year: " << staff[i].birth_year << endl;
            cout << "Position: " << staff[i].position << endl;
            cout << "Salary: " << staff[i].salary << endl;
            cout << "Education: " << staff[i].education << endl;
            cout << "Age: " << age << endl;
            cout << "--------------------------\n";
        }
    }

    return 0;
}
