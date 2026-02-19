/*Expressions, Statements, Operators, Typecasting

	author		: Saroj Kumar N
	craeted on	: 20/09/2021
	modified on	: 20/09/2021
*/

/*Expression and Statement:
	Expression:	Seqquence of operands and operation
				eg- 30 or 2*5 or a=b
	STatement:	is a complete line of code,  astatemnt can hold expression
				eg- int x, x = 2*5, if(x){}
*/

/*Operators:
	Unary, binary, ternary -> based on no of operands used for the operation
	assignment: =, lhs = rhs -> valu eof rhs is store to rhs
	arithmatic: +, -, *, /, % -> % gives reminder, supports only for integers, other operators are overloaded for all datatypes
	increment/decrement: ++ or -- -> pre, post
	relational: >, < , <=, >=, ==, !=
	logical: AND &&, OR ||, NOT !
	member access:
	conditional or ternary op: cond ? true statement : false statment 
	bitwise operator: &, |, <<, >>, ^ exclusive OR 
	other:

*/
// Typecasting:
// implicit typecasting :	Higher type to lower type -> int -> unsigned int -> long -> unsigned long -> float -> double -> long double
// explicit typecasting :	(datatype) num1/num2; datatype defined by user intended 

#include<iostream>
using namespace std;

int main()
{
	int num1 = 10;
	int num2;
	int result;

	num2 = num1;	//assignment operator
	cout << "Num_2: " << num2 << endl;

	result = num1 * num2;	// arithmatic operator
	cout << "Integers operation: " << 5 / 10 << endl;	//o/p is laso integer
	cout << "Floating operation: " << 5.0 / 10.0 << endl;	//o/p is laso float

	int counter = 10;
	int results = 0;

	//increment/decrement operator
	cout << "Pre- increment: " << ++counter << endl; // Pre-> first increase the value then return -> counter = counter+1, cout << counter
	cout << "Post-increment: " << results++ << endl; // Post-> first return the value, then increment -> cout<< result, result = result+1

	//Implicit typecasting
	int sum = 2 + 10.0;	// 2 was lower, so prompted to higher datatype 2.0
	int num = 100.2;	//100.2 is higher, so demoted to lower 100

	//Explicit typecasting
	double div;
	div = 5 / 2;
	cout << "Without typecasting value: " << div << endl;
	div = (double) 5/2;
	cout << "Explicit typecasting value: " << div << endl;


	return 0;
}













