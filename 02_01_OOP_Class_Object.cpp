/*Topic: OOP, Class and Object

	author		: Saroj Kumar N
	craeted on	: 23/09/2021
	modified on	: 23/09/2021
*/

/*OOP, Class and object, declaration of class and creating objects, dot and pointer operator, access specifiers
  Methods, constructor and destructor, this pointer, static class members, struct vs class, friend of a class
*/

/*OOP- Object Oriented Programming
	Demerit of Procedureal Programming => Focus on process not on data, difficult to extend reuse, easy to break
	OOP benifit => focus on class and object, higher level abstraction, encapsulation, easy to mantain and extend

	Class => blueprint from which objects are created
			a user defined data-type, has attributes/datamemebrs and methods/member functions
			eg: Account, Employee, Image, std::vedtor
	Object => created from a class, represents an instance of a class, each object has its idenity
			eg: Account- each has its own balance, can deposit, withdraw, etc
	
	Access specifiers=>
		Public: assessible through object anywhere
		Private: accessible only by members or friends of the class
		Protected: used in inheritance
*/
/***********************************************************************************/

#include<iostream>
using namespace std;
/***********************************************************************************/

//Class declaration shoul dbe outside main/any function
class Account
{
	//atributes or data members, private by default. C++ fature
private:
	int acc_no;
	string name;
	float balance;
public:
	//methods or member functions can be defined insie the class, best to declare within class and define outside the class using :: score resolution operato
	//member functions have access to data members of same class by default
	void open_account(int accno, string ahname, float blc);
	void deposit(float amount) { balance += amount; }
	void withdraw(float amount) { balance -= amount; }
	void print_account_details()
	{
		cout << "\n Account no: " << acc_no << " Name: " << name << " and balance: " << balance << endl;
	}
};

// Meber functoin defination outside the class
void Account::open_account(int accno, string ahname, float blc)
{
	acc_no = accno;
	name = ahname;
	balance = blc;
}
/***********************************************************************************/

/*int main()
{
	//Creating objects
	Account piku;
	Account chinu;
	//Accessing class members through object, dor operator
	//cout << piku.acc_no; //not allowed to access private members, by default member type is private
	piku.open_account(101, "Piku Dash", 0.0);
	piku.deposit(100.0);
	piku.print_account_details();

	//Creating pointer objects
	Account* loan = nullptr;
	loan = new Account;
	//Accessing through pointer objects, pointer operator or dot operator
	loan->deposit(100.0);
	(*loan).withdraw(100.0);

	delete loan;
	return 0;
}*/
/***********************************************************************************/