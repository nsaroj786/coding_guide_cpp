/*Topic: Constructors and Destructors

	author		: Saroj Kumar N
	craeted on	: 23/09/2021
	modified on	: 23/09/2021
*/

/*Copy constructor
	is used to create new object with reference to an old object args, obj2 = obj1
	declaration: Type::Type (const Type &source); eg: Account::Account(const Account &source);
	
	Shallow copy and Deep copy:
	Problem ->	in copy constructor data member is copied from source object, pointer is copied not what it points to
				when we release the storage in destructor, the other object still refers to released storage
*/

/*This pointer; const in object, member function;  static in datamember and member function; Friend to a calass

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
	int * pin_code;	//pointer data member
public:
	void open_account_detail(int accno, string ahname, float blc);
	void print_account_detail();

	//Constructor
	Account() {	//default constructor
		acc_no = 0; name = "New ACC Holder"; balance = 0.0;
		cout << "Constructor called with default   args. " << endl;
	}
	Account(int accno, string accname, float blc)
		: acc_no{ accno }, name{ accname }, balance{ blc } {	//better way of writing
		cout << "Constructor called with all args. " << endl;
	}

	//Copy constructor, const is to keep any one object
	Account(const Account& old_obj) {
		acc_no = old_obj.acc_no; name = old_obj.name; balance = old_obj.balance;
		cout << "---Copy constructor.--- " << endl;
	}

	//Destructor
	~Account() {
		cout << "Destructor is called. " << endl;
	}
};

void Account::open_account_detail(int accno, string ahname, float blc)
{
	acc_no = accno;
	name = ahname;
	balance = blc;
}
void Account::print_account_detail()
{
	cout << "\n Account no: " << acc_no << " Name: " << name << " and balance: " << balance << endl;
}
/***********************************************************************************/

class Shallow 
{
private:
	int *data;	//pointer data
public:
	void set_data_value(int d) { *data = d; };
	int get_data_value() { return *data; };

	Shallow(int d);	
	Shallow(const Shallow &source);	//copy constructor
	~Shallow();	//destructor
};

Shallow::Shallow(int d) {
	data = new int;
	*data = d;
}

Shallow::~Shallow() {
	delete data;
	cout << "Destructor freeing data." << endl; 
}

Shallow::Shallow(const Shallow& source) 
	:data(source.data){						//Shallow copy->only pointer is copied not what its point to, both aource and newly created object point to same data address
	cout << "Copy constructor- Shallow." << endl;
}

void display_shallow(Shallow s) {
	cout << "Display" << s.get_data_value() << endl;
}

/***********************************************************************************/
int main()
{
	Account a3(101, "Anil", 10500.0);	//COnstructor with all args is called
	//Object by referencing to another object by using copy constructor
	Account b1= a3; //or b1(a3)
	b1.print_account_detail();

	//Shallow copy
	Shallow obj1 = 100;
	display_shallow(obj1);
	Shallow obj2 = obj1;

	return 0;
}

