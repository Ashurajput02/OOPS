#include <iostream>
#include <string>

class Person
{
protected:
    std::string name;
    int age;

public:
    Person(const std::string &n, int a) : name(n), age(a) {}

    void displayInfo()
    {
        std::cout << "Name: " << name << ", Age: " << age;
    }
};

class Employee : public Person
{
private:
    int employeeID;
    double salary;

public:
    Employee(const std::string &n, int a, int id, double sal)
        : Person(n, a), employeeID(id), salary(sal) {}

    void displayInfo()
    {
        Person::displayInfo();
        std::cout << ", EmployeeID: " << employeeID << ", Salary: " << salary;
    }

    friend bool compareSalary(const Employee &emp1, const Employee &emp2);
};

class Manager : public Person
{
private:
    int managerID;
    std::string department;

public:
    Manager(const std::string &n, int a, int id, const std::string &dept)
        : Person(n, a), managerID(id), department(dept) {}

    void displayInfo()
    {
        Person::displayInfo();
        std::cout << ", ManagerID: " << managerID << ", Department: " << department;
    }

    friend bool compareSalary(const Manager &mgr1, const Manager &mgr2);
};

// Friend functions to compare salaries for Employee and Manager
bool compareSalary(const Employee &emp1, const Employee &emp2)
{
    return emp1.salary < emp2.salary;
}

// bool compareSalary(const Manager& mgr1, const Manager& mgr2) {
//     return emp1.salary < emp2.salary;
// }

int main()
{
    Employee emp1("John Doe", 30, 101, 50000.0);
    Employee emp2("Alice Johnson", 28, 102, 55000.0);
    Manager mgr1("Jane Smith", 40, 201, "HR");
    Manager mgr2("Bob Brown", 45, 202, "Finance");

    std::cout << "Employee Information: ";
    emp1.displayInfo();
    std::cout << "\n";
    emp2.displayInfo();
    std::cout << "\n";

    std::cout << "Manager Information: ";
    mgr1.displayInfo();
    std::cout << "\n";
    mgr2.displayInfo();
    std::cout << "\n";

    if (compareSalary(emp1, emp2))
    {
        std::cout << "John Doe earns less than Alice Johnson.\n";
    }
    else
    {
        std::cout << "Alice Johnson earns less than John Doe.\n";
    }

    // if (compareSalary(mgr1, mgr2))
    // {
    //     std::cout << "Jane Smith earns less than Bob Brown.\n";
    // }
    // else
    // {
    //     std::cout << "Bob Brown earns less than Jane Smith.\n";
    // }

    return 0;
}
