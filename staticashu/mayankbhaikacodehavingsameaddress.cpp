#include <iostream>
using namespace std;
// static function and member function ka address nikalna hai
// static function call using object of class (done)
// access static function using non static object
// access non static function using static object

class student
{
	static int age;

public:
	static int func(void)
	{
		cout << "The age of the student is: " << age << endl;
	}
	int function()
	{
		cout << "The age of the student is: " << age << endl;
	}
};

int student::age = 20;
int main()
{
	student Mayank1;
	student Mayank2;

	Mayank1.func(); // static member function called using object name
	// student::func();//static member function called using class name
	//	int (*func_ptr)(void)= &student::func;
	// printf("Address is:%p\n ",&student::func);
	// printf("Address is:%p\n ",&Mayank1.function());
	// printf("Address is:%p\n ",&Mayank2.function());
	int (*func_ptr1)() = &student::func;
	int (student::*func_ptr2)() = &student::function;

	cout << "Address of static function: " << func_ptr1 << endl;
	cout << "Address of non-static function: " << func_ptr2 << endl;
	// cout<<"The address of the static function is : "<<&Mayank2.function<<endl;
	return 0;
}