/*Topic: Constructors and Destructors

	author		: Saroj Kumar N
	craeted on	: 23/09/2021
	modified on	: 23/09/2021
*/


/* Constructors and Destructors
	Constructor is a special member method invoked during object creation
	Used as default initialization to avoid garbage value if missed to initialize data memebers for an object
	With same name as class and no return type is specified, can be overloaded
	Destructor is with same name with ~, no return type, can not be overloaded, helps in releasing memory
	destructor is called automatically when delete is used for pointer object

	default constructor: no args, created by c++ by default with no initialization i/p
	Once user defined constructor is defined, default one will not be there internally
	So have to pass proper argumetns while creating object

	: acc_no{ accno }, name{ accname }, balance{ blc }	//better way of writing
	: Account(0,"None", 0.0)							//another way of writing constructor
	: Account(int acc_no = accno, string name = accname, float balance = blc);	//by using function feature -> declaration with default arguments
			//above last one is only the declaration, defination have to be mentioned later inside or outside class
*/


/***********************************************************************************/

#include<iostream>
using namespace std;
/***********************************************************************************/


class Account
{
private:
	int acc_no;
	string name;
	float balance;
public:
	void openaccount(int accno, string ahname, float blc);
	void print_account_details();

	//Constructor
	Account() {	//default constructor
		acc_no = 0; name = "New ACC Holder"; balance = 0.0;
		cout << "Constructor called with default   args. " << endl;
	}
	Account(string accname){	//Constructor overloaded based on given data during object creation, particular constructor will work
		name = accname;
		cout << "Constructor called with only name. " << endl;
	}
	Account(int accno, string accname, float blc)
		: acc_no{ accno }, name{ accname }, balance{ blc } {	//better way of writing
		cout << "Constructor called with all args. " << endl;
	}

	//Destructor
	~Account() {
		cout << "Destructor is called. " << endl;
	}
};

void Account::openaccount(int accno, string ahname, float blc)
{
	this->acc_no = accno;
	this->name = ahname;
	this->balance = blc;
}
void Account::print_account_details()
{
	cout << "\n Account no: " << acc_no << " Name: " << name << " and balance: " << balance << endl;
}

/***********************************************************************************/

//Main function
/*int main()
{	
	//constructor call during object creation
	Account a1;				//construcor with no args is called, destructor will be called before end of the scope of the object
	Account a2("Sunil");	//Constructor with name is called
	Account a3(101, "Anil", 10500.0);	//COnstructor with all args is called

	//constructor call during pointer object creation
	Account* acc_ptr1 = new Account;
	Account* acc_ptr2 = new Account(102, "Ambika",500.0);

	return 0;
}*/
/***********************************************************************************/
