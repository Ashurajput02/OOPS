#include <iostream>
#include <string>
#include <vector>

class Employee
{
private:
    static int employeeCount; // Static data member to count employees
    std::string name;
    int age;
    int employeeID;
    double salary;

public:
    Employee() : name(""), age(0), employeeID(0), salary(0.0)
    {
        employeeCount++;
        employeeID = employeeCount;
    }

    Employee(const std::string &n, int a, double sal) : name(n), age(a), salary(sal)
    {
        employeeCount++;
        employeeID = employeeCount;
    }

    void displayInfo()
    {
        std::cout << "Employee ID: " << employeeID << "\nName: " << name << "\nAge: " << age << "\nSalary: " << salary << "\n";
    }

    static int getEmployeeCount()
    {
        return employeeCount;
    }

    // Friend function to compare salaries
    friend bool compareSalaries(const Employee &emp1, const Employee &emp2);

    ~Employee()
    {
        employeeCount--;
    }
};

int Employee::employeeCount = 0;

bool compareSalaries(const Employee &emp1, const Employee &emp2)
{
    return emp1.salary < emp2.salary;
}

int main()
{
    std::vector<Employee> employees;

    Employee emp1("John Doe", 30, 50000.0);
    Employee emp2("Alice Johnson", 28, 55000.0);
    Employee emp3("Bob Brown", 25, 48000.0);

    employees.push_back(emp1);
    employees.push_back(emp2);
    employees.push_back(emp3);

    for (const Employee &emp : employees)
    {
        emp.displayInfo();
        std::cout << "\n";
    }

    std::cout << "Total Employees: " << Employee::getEmployeeCount() << "\n";

    Employee lowestPaid = emp1;
    for (const Employee &emp : employees)
    {
        if (compareSalaries(emp, lowestPaid))
        {
            lowestPaid = emp;
        }
    }

    std::cout << "Employee with the lowest salary:\n";
    lowestPaid.displayInfo();

    return 0;
}
