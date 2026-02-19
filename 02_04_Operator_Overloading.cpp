/*Topic: Operator Overloading

	author		: Saroj Kumar N
	craeted on	: 24/09/2021
	modified on	: 24/09/2021
*/

/*Operator overloading: overloading = operator-> copy semantics & move semantics, overloading operators as member function, as global function, overloading << & >> 
	Allows user defined typesd to behave similar to built-in-types
	eg: + is predefined to add tho numbers, as an user defined we want to add two objects -> Operator overloading
	eg2: == is used to compare two numbers, as an user defined we want to comapre two objects of a class
	Both predefined and user defined work will be done, so overloaded
	All operators can be overloaded except-> ::; .;  .*;  sizeof;   ternary op : ? 
	syntax for declaration: return_type operator  symbol(args);
*/

/***********************************************************************************/

#include<iostream>
using namespace std;

/***********************************************************************************/
class Test
{
private:
	int a;
public:
	void get_data() { cin >> a; }

	void operator == (Test t)
	{
		if (a == t.a)
		{
			cout << "\n t1 and t2 are same.";
		}
		else
		{
			cout << "\n t1 and t2 are not same.";
		}
	}

};


/***********************************************************************************/

//Program to create 2 objects of the same class and then compare whether same or not using operator overloading
/*int main()
{
	Test t1, t2;
	cout << "Enter value for t1: ";
	t1.get_data();
	cout << "\nEnter value for t2: ";
	t2.get_data();

	//call operator overloaded
	t1 == t2;

	return 0;
}*/
/***********************************************************************************/
