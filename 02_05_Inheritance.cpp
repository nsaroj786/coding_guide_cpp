/*Topic: Inheritance

	author		: Saroj Kumar N
	craeted on	: 24/09/2021
	modified on	: 24/09/2021
*/

/*Inheritance -> why, terminology, Inheritance vs composition, Types, Protected, Constructor & Destructor, redefining base class methods, class hierarchies, multiple inheritance
	Why ->	creates a method to create new class from existing class, allow to reuse existing class
			Allows new classes to modify behaviour of existing classes without actually modifying the original class
	syntax:	class Derived_Class : acc_specifier Base_Class{ };
	Types->	Single inh, multi-level, hierarchical, multiple inhertance, hybrid
	Inheritance -> An Employee IS a Person , Employee and Person are classes
	Composition -> AN Employee HAS an Account, inheritance can not be applied in this concept

	Derived inh->	PrivateInh		ProtectedInh		PublicInh
	Base			Derived			Derived				Derived
		Private		 x					x					x
		Protected	Private			Protected			Protected
		Private		Private			Protected			Public
*/

/*Constructor and Destructor during inhertance:
	cons and dest are also inherited to derived class
	when derived object is created ->	base class constructor executes first, then derived class constructire executes -> but does not inherit as constructors are not members of class
	when derived object is destroyed ->	derived class destrucotr executes first, then base class destructor executes								

	Derived class can not inherit -> constructor, destructor, overloaded assignment operators, friend functions
	but derived class can invoke base lass version constructor, destructor

	Copy constructor-> ***
	Operator overloading -> ***
*/



/***********************************************************************************/

#include<iostream>
using namespace std;

/***********************************************************************************/
//Base-class
class Person
{
private:
	float adhar_no;
	string name;
	int age;
protected:
	string PAN_no;	//dont have direct access to base or derived object like public members
public:
	void peronal_details() { cout << "\n Person's personal details are available. " << endl; };
	Person() { cout << "\n Constructor for Person class" << endl; }
	Person(float adhar) { cout << "\n Constructor for Person class with args" << endl; }
	~Person() { cout << "\n Destructor for Person class" << endl; }

};

//Derived class -> single inheritance
class Employee : public Person
{
private:
	float emp_id;
	float salaey;
	string org_name;
protected:
	/* ------- PAN_no is inherited by default  -------*/
public:
	/*---- peronal_details() by default inherited------ */
	
	void company_details() { cout << "\n Employee's company details are available. " << endl; /*cout << PAN_no; allowed*/ };
	Employee() { 
		Person(),  //optional base class cons overloading
		cout << "\n Constructor for Employee class" << endl;
	}
	Employee(float emp_id) {
		Person(emp_id),  //optional base class cons overloading, proper value to be passed
			cout << "\n Constructor for Employee class wit args" << endl;
	}
	~Employee() { cout << "\n Destructor for Employee class" << endl; }
};

/***********************************************************************************/

/*int main()
{
	//Base class object
	//Person p1;
	//p1.peronal_details();
	//p1.PAN_no; error-> protected members are not allowed to object of any/base class 

	//Derived class object
	Employee e1;
	e1.peronal_details();	//base class public memebers are copied to derived class also
	e1.company_details();
	
	Employee e2(1001);

	return 0;
}*/
/***********************************************************************************/