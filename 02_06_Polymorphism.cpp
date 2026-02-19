/*Topic: Polymorphism: compile time-> function overloading, operator overloading, Runtime-> Virtual function

	author		: Saroj Kumar N
	craeted on	: 24/09/2021
	modified on	: 24/09/2021
*/

/*Polymorphism: what, using bas class pointer, stati vs dynamic binding, virtual function, virtual destructor, 
override and final specifier, base class reference, pure virtual function and abstract class
	Compile time -> function overloading, operator overloading
	Runtime-> Virtual function/ function overriding



*/

/***********************************************************************************/

#include<iostream>
using namespace std;

/***********************************************************************************/

class Base
{
public:
	virtual void say_hello() const
	{
		cout << "Hello, I am in base class obj." << endl;
	}
};

class Derived : public Base
{
public:
	void say_hello() const
	{
		cout << "Hello, I am in derived ckass obj." << endl;
	}
};

//Base class by reference
void greetings(const Base& obj) {
	cout << "Greetings" << endl;
	obj.say_hello();
}
/***********************************************************************************/

/*int main()
{
	Base b1;
	b1.say_hello();

	Derived d1;
	d1.say_hello();

	greetings(b1);
	greetings(d1); //problem -> base class object


	cout << "******************" << endl;
	Derived d2;
	d2.say_hello(); // derived class method, function ovrerriding

	Base* base_ptr;
	base_ptr = &d2;
	base_ptr->say_hello();	//expected derived class method, but gives base class method if without virtual, this is runtime polymorphism



	return 0;
}*/
/***********************************************************************************/
