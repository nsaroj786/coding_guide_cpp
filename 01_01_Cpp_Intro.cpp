/*Introduction to c++ programming
	Execution process of c++ code
	Basic structure of a c++ programming

	author		: Saroj Kumar N
	craeted on	: 16/09/2021 
	modified on	: 17/09/2021
*/
//C with classes -> c++, c++11, c++14, c++17, .cpp & .h extension
/* Execution process of c/c++
	source code ->	high-level, what programmer write, undestandable by human, text-editor is used to write the code
					many .cpp, one main.cpp which calls all executions
	pre-processor->	removes comments, includes required headers, replaces macro-name by code
	compiler ->		translates from high-level to low-level, 
					will create .obj file for each .cpp
	linker ->		links together our code with other libraries or headers, creates executable code
					will include c++ and other libraries to create an executable program. in windows .exe and in linux no extension
*/
// IDE -> Integrated Development Environment, provides editor, cjompiler, linker, debugger together. eg- eclipse, visual studio
//Errors -> compiler: syntax and semantic, compiler warning, linker error, runtime error, logic error

/*Structure of a c++ program 
	Basic components	:
		keywords		: total 90,  which are reserved words for the programming language. eg: return, int, char
		identifiers		: alphanumeric charachetrs which are defined by programmer (max 31 latters, start with alphabat or _), eg: sumOfTwoNums, _localVar
		punchuation		: ; " " { }
		statement		: is a comination of keyword, identifier and punchuation
	Preprocessor directives:
		runs before the compiler executes, is a compiler ddirective not a statement so not required ; at the end
		# symblolic constant is defined with uppercase, illegal to change the value throughtout the program 
		# include , #ifndef
	The main function:
		every progrram must have one main program  return_type main (arguments)
		return 0 indicates successful program execution
	Namespaces:
		is used to avoid naming conflicts
		std::cout because std is the name for C++ standard namespace
		or define for entire code -> using namespace std; or few from C++ std as -> using std::cin; using std::cout;
	Comments: 
		refernce for the programmer, not taken for compilation. single line ->//, multi-line -> /*
	Basic I/O:
		cin, cout, cerr, clog are objects representing streams, need to include iostream to use
	*/

#include<iostream>		// for basic I/O streams

using namespace std;	// for using default c++ standards

/*int main()
{
	int num;
	cout << "Hello world !!" << endl;
	cout << "Enter an integer. " << endl;
	cin >> num;
	cout << "Entered number is: " << num << endl;
	

	return 0;
} */
