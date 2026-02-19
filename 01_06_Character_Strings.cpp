/*Character, Strings

	author		: Saroj Kumar N
	craeted on	: 20/09/2021
	modified on	: 20/09/2021
*/

/*Character:
	#include <cctype>: gives all test libraries for char eg- isalpha, isdigit

*/

/*String:	sequence/array of characters stored contineous in memory
			Implemented as an array of characters, there is no different datatype fpr string
			\0 is used for identification of last of string, so assigned size = required size + 1
			C-> #include<cstring> -> copying strcpy(), concatenation strcat(), comparision, searching
			C++-> #include<string> -> STL 
				  string.h has all defined lib like for cin cout lenth find etc
*/


#include<iostream>
#include<cstring>	//for c-stype string functions
#include<cctype>	//for character based functions

#include <string>

using namespace std;

/*int main()
{
	char first_name[20];
	//cout << first_name << endl;	//garbage as not initialized

	cout << "Enter ur first name: ";
	cin >> first_name;
	cout << "Hello " << first_name << "!! "<<endl;
	cout << "Size of string is of latters  = " << strlen(first_name) << endl;

	//C++ srtings
	//Declaration
	string s1;
	string s2 = { "Saroj" };
	string s3 = s2;
	string s4 = {"Saroj", 123};

	//Assignment
	s1 = s2;

	//substr() -> substr(start_index, length)
	string s5 = {"This is a test"};
	cout << s5.substr(0, 4) <<endl;
	cout << s5.substr(5, 10) << endl;

	//find() -> search if found return index
	cout << "Index of 'This' is: " << s5.find("This") << endl;
	cout << "Index of non available variable is: " << s5.find("xyz") << endl;

	//length() -> length of a string
	cout << "Length of s5: " << s5.length() <<endl;

	//with string.h cin and cout can be directly used for I/O operation
	return 0;
}*/


