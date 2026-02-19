/*Topic: Functions in C/C++

	author		: Saroj Kumar N
	craeted on	: 21/09/2021
	modified on	: 21/09/2021
*/

/* Functions: declaration/prototype, defination, parameters and pass by value, return , default parameters, overloading, passing arrays to functions, pass by reference, inline function, auto return type, recursive function
	Function allow to reuse the block of logic by using single line
	can be of =>C++ standard library eg: <cmath> -> sqrt() or pow() or range() etc
				Third-party library 
				User-defined
	
	Function declaration -> to notice to compiler that there is a function with this name which is defined later, require if calling happens before defination

	Function defination ->	name: same rule as variable, should be meaningful to the logic/body
							parameters list: passed into function as input, type should be specified
							return type: type of the data that is returned from the function
							body: statements for the logic development, should be in {}
							
						syntax: data_type function_name ()  { statements }
	
	Function calling -> from main or any other function also

	Parameters should match in number, order and tye from declaration, defination and calling
	Implicit type conversion can happen from lower to upper updation in datatype of parameters


*/

/* Actual vs Formal Para and Call by value:
	Actual Parameters: arguments: are passed from calling method, which have the actual values
	Formal Parameters: are parameters used in function defination, which receive passed data from actual

Call by reference:
	Sometimes we want to change the value of actual parameters from function body, to achieve this we need location or address of actual parametes
	needs & in declaration and defination

Pass by pointer:
	with pointers defining the function
*/

/*Function overloading -> functions have same name with different parameters list

*/

/* How function calls work
	Function calls work in LIFO order -> Last in First out
							start_order		Completion_order
	main()						1				3
	{											
		abc()					2				2
		{
			xyz()				3				1
		}
	}
*/

/*Inline function:
	can suggest compiler to compile them inline
	syntax defination: inline data_type function_name (args);
*/

/*Recursive funstion:
	is a function that calls itself
	useful in binary search, search trees, factorial, fibonacci, fractals
	factorial -> base case 0! = 1
				n ! = n * (n-1)!
*/

/*Returning pointer from function-> syntax: datatype * function_name(args);
	Should return to memory dynamically allocated in the function
	Never return a pointer to a local function variable
*/

#include<iostream>
#include<cmath>		//for c++ standard library for maths operation
using namespace std;
const float PI{3.141};
/***********************************************************************************/

//function declaration -> required as calling happens before defination. otherwise compiler will through error as its still unknown to compiler at calling time.
void say_hello();	
void area_circle();
float calc_area_circle(float radi); //just name and datatype is important, para name is just for formality here.
//Actual vs formal para and Call by value
void param_test(int formal);
//function overloading
int add_numbers(int a, int b);		
double add_numbers(double a, double b);
//Passing array as argument
void print_std_mark(int marks[], size_t size);
void set_std_mark(int marks[], size_t size, int full_mark);
//Pass by reference
void swap(int &x, int &y);
//recursiv efunction
double factorial(double num);
//pass by pointer
void pass_by_pointer(int *ptr);
//Returning pointer from function
int* find_largest_num(int* int_ptr1, int* int_ptr2);
/************************************************************************************/


//Main function
int main()
{
	double num = 100;
	double num_f = 100.6;

	// Standard library functions-> are defined in cmath or any predefined library, just need to include
	cout << "Sqrt of 100 is: " << sqrt(num) << endl;
	cout << "Round of 100.6 is: " << round(num_f) << endl;

	//function calling - user defined function
	say_hello();
	area_circle();

	//Actual vs formal para and Call by value
	cout << "------Actual vs formal para and Call by value------" << endl;
	int actual = 50;
	cout << "Actual para from calling/main: " << actual << endl;
	param_test(actual);
	cout << "Actual para after passing: " << actual << endl;		// actual para doesnot change bcz of change of formal para

	//Function overloading
	cout << "\n Rsult of 10 and 20: " << add_numbers(10, 20) << endl;
	cout << "Rsult of 30.5 and 20.2: " << add_numbers(30.5,20.2) << endl;

	//Passing array as argument
	cout << "\n ------Pass array as argument------" << endl;
	int student_mark[] = {90,50,60,40,60};
	print_std_mark(student_mark, 5);		// address of student_mark is passed instead of complete array
	set_std_mark(student_mark, 5, 100);		// address of student_mark is passed, so actual parameters also will change
	print_std_mark(student_mark, 5);		// actual arguments are changed to 100

	//Pass by reference
	int a = 10, b = 20;
	cout << "\n ------Pass by reference------" << endl;
	cout << "Before swaping a= " << a << " and b= " << b<<endl;
	swap(a,b);
	cout << "After swaping a= " << a << " and b= " << b << endl;

	//recursion function
	cout << "recursion function " << endl;
	cout << factorial(5) << endl;

	//Pass by pointer
	int var =10;
	pass_by_pointer(&var);

	//Returning pointer from function
	int a1 = 100, a2 = 200;
	int* largest_ptr = nullptr;	//pointer is preferred instead of normal local variable

	largest_ptr = find_largest_num(&a1, &a2);
	cout << "\n*largest_ptr: " << *largest_ptr << endl;

	return 0;
}
/***********************************************************************************/

//function defination or body
void say_hello()
{
	cout << "Hello world !!" << endl;
}

void area_circle()
{
	float radius;
	cout << "\n Enter the radius of the circle: ";
	cin >> radius;
	cout << "The ares of circle with radius " << radius << " is: " << calc_area_circle(radius) << endl;
}

float calc_area_circle(float rad)
{
	return PI * rad * rad;
}
/**************************************************************************************/

//Pass by value
void param_test(int formal)
{
	cout << "FOrmal para received: " << formal << endl;
	formal = formal + 50;
	cout << "Formal para changed: " << formal << endl;	// changed in local variable ie formal para but not the actual para
}

//Function overloading -> there shoul dbe a change in parametre type, only change in return in through error
int add_numbers(int a, int b)
{
	return a + b;
}

double add_numbers(double a, double b)
{
	return a + b;
}

//Passing array as argument
void print_std_mark(int marks[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << marks[i] << " ";
	}
	cout << endl;
}

void set_std_mark(int marks[], size_t size, int full_mark)
{
	for (size_t i = 0; i < size; i++)
	{
		marks[i] = full_mark;
	}
}

//Pass by reference
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//recursion function
double factorial(double num)
{
	if (num == 0)
		return 1;
	else
		return num * factorial(num - 1);

}

//Pass by pointer
void pass_by_pointer(int * ptr)
{
	*ptr = 500;
}

//Returning pointer from function
int* find_largest_num(int* int_ptr1, int* int_ptr2)
{
	if (*int_ptr1 > * int_ptr2)
		return int_ptr1;
	else
		return int_ptr2;

}
