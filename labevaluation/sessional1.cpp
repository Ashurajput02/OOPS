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
};

// Friend function to compare salaries
bool compareSalary(const Person &p1, const Person &p2)
{
    return p1.salary < p2.salary;
}

int main()
{
    Employee emp("John Doe", 30, 101, 50000.0);
    Manager mgr("Jane Smith", 40, 201, "HR");

    std::cout << "Employee Information: ";
    emp.displayInfo();
    std::cout << "\n";

    std::cout << "Manager Information: ";
    mgr.displayInfo();
    std::cout << "\n";

    if (compareSalary(emp, mgr))
    {
        std::cout << "John Doe earns less than Jane Smith.\n";
    }
    else
    {
        std::cout << "Jane Smith earns less than John Doe.\n";
    }

    return 0;
}
