/*Introduction to c++ programming
	Variables, COnstants, datatypes in c++

	author		: Saroj Kumar N
	craeted on	: 18/09/2021
	modified on	: 19/09/2021
*/

/*
Declare and Initialize variables:
	declaration syntax: data_type variable_name;	eg: int age; string name;
	can use alphanumeric or _, excluding the keywords, can not duplicate name in the same scope
	Never use variables before initialization
	
	int age;		//un-initialization
	Initialization:
		int age =18; //c-like initilization
		int age (18);//constructor initilization
		int age {18};//c++11 list initilization

	Global and local variable:
		variable declared inside a function is local in that function
		variable declared outside a function is global
		if the global and local variable name is exactly same, its preferred to use local variable value
*/
/*
Constant: constant values, compiler does not allow to change tha value
	literal	: x =12 or 12U for unsigned int, 12L for long int, 12LL for long long int, float 12F for float, float 12L for double
			  character literal constants : followed by \ chara, eg - \n - new line, \r - return, \t- tab, \b - backspace 
	const	: const double pi = 3.141;
	constexpr:
	enum	:
	#define	: #define pi 3.141, dont use #define constants in C++ 14
*/


/*
datatypes: primitive or primary or fundamental and secondary datatypes
Primitive or Primary datatypes:
	int: signed and unsigned
			int: 16bits, short int: 8bits, long int: 32 bits, long long int: 64 bits
			bydefault integer is a signed integer -x tp 0 to x. for unsigned integer have to declared
	float: used to represent non-int values, eg: pie, value: 3.17
			float: 7 ecimal digits, double: 15, long double:19
	char:	used to represent single characters like 'a' 'x'
			char: 8bits, char16_t: 16bits, char32_t: 32bits 
	boolean: true or false
			size: 8 bits

*/


#include<iostream>
using namespace std;

int age = 10;

//Program to calculate area of a room
/*int main()
{
	int age;		//declaration, without initialization its value will be some garbage.
	age = 18;
	cout << "Age is : " << age << endl;		// age =18 , as local variable value is preferred first

	int room_width, room_length, room_area;
	cout << "Enter room width : " << endl;
	cin >> room_width;
	cout << "ENter room length : " << endl;
	cin >> room_length;

	room_area = room_width * room_length;
	cout << "The room area is : "<< room_area << "sq feet" <<endl;
	return 0;
}*/

