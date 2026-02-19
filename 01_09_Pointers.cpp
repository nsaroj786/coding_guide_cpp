/*Topic: Ponters

	author		: Saroj Kumar N
	craeted on	: 22/09/2021
	modified on	: 22/09/2021
*/

/*Pointers -> declaration, stroing address, dereferencing, dynamic memory allocation, pointers arithmatic, pointers and arrays, 
				const and pointer, using pointer to function, potential pointer ptyfalls, const and references, raw vs smart pointers
	  Pointer is a derived datatype/variable whose value is an address, address can be of another variable or function
	  to use the data that pointer pointing to we must know the datatype of the variable points to
	  & is used to assign an address to pointer, * is used to get the value stored in the address

	  Inside a function, pointer can be used to access data that are defined outside the function, those variables are not in scope so can not be accessed by name directly
	  Pointers can be used to operate on arrays efficiently
	  can allocate memory dynamically, can assess specific memory address, so useful in embedded and system application

	  Syntax declaration -> variable_data_type * pointer_name; eg: int * ptr; -> ptr is a pointer to a variable of integer type
	  initialization -> required to initialize with null to avoid directing to garbage address, or initilaise with null pointer
	  assignment -> pointer_variable = & another_variable;
	  Size -> pointer of any datatype have the size 4-bytes as it holds the same memory address for any datatype
	  Memory -> is stored in heap memory
	  
	  Compiler will matach whether datatype of pointer and variable is matching or not, will through error if not
*/

/*Dynamic memory allocation -> eg: student data where no of student in a coaching class is not fixed/known
							//pointers can be used to access newly allocated heap storage/memory runtime
							//new keyword is used, delete keyword is used to release the allocated memory 
*/

/* Constantand pointer->pointer to constant, constant pointer, constant pointer to constant
	pointer to constant -> data pointed to by the pointer is constant and cannot be changed, pointer can change and point to somewhere else.	syntax: const datatype *ptr = &var;
	constant pointer	-> data pointed to by the pointer can be changed, pointer itself can not point to somewhere else. syntax: datatype * const ptr = & var
	constant pointer to constant -> data pointed to by the pointer is constant and cannot be changed, also pointer itself can not point to somewhere else. syntax: const datatype * const ptr = &var
*/

#include<iostream>
using namespace std;

//Main function
/*int main()
{
	int num;
	num = 10;
	//Normal local variable
	cout << "Value of num is: " << num << endl;			//10
	cout << "Size of num is: " << sizeof(num) << endl;	//4 bytes
	cout << "Address of num is: " << &num << endl;		//0x12345

	//uninitialised pointer
	int* ptr;
	//cout << "Valur of ptr: " << ptr << endl;			//0x12345- garbage
	//cout << "Address of ptr: " << &ptr << endl;		//0x12456
	//cout << "Size of ptr: " << sizeof(ptr) << endl;	//4 bytes

	//pointer initialization
	ptr = nullptr;	//set p to point nowhere
	cout << "Valur of null ptr: " << ptr << endl;			//0x12345
	//cout << "Valur of null *ptr: " << *ptr << endl;		// will not give any output as not yet initialized or holding memory of any variable, so value at that memory can not find out
	cout << "Address of null ptr: " << &ptr << endl;		//0x12456
	cout << "Size of null ptr: " << sizeof(ptr) << endl;	//4 bytes

	//pointer declaration, initilization and assignment
	float min_speed = 30.0;
	float max_speed = 80.0;

	//pointer declaration
	float* f_ptr;
	//initialization
	f_ptr = nullptr;
	//assigning or stroring an address of another variable
	f_ptr = &min_speed;	//points to minimum speed
	f_ptr = &max_speed;	//points to maximum speed, pointer is a varibale so it can change

	//dereferencing a pointer -> getting the valu stored at location which pointer is pointing to
	*f_ptr = 100.0;

	//Dynamic memory allocation 
	int* int_ptr = nullptr;
	int_ptr = new int;		//allocates an integer on the heap
	*int_ptr = 105;			//value of the integer, but no name is given for the variable

	//release allocated space
	delete int_ptr;

	//delete [] temp_array_ptr; // to release block of memory assigned for an array
	int * int_array_ptr = nullptr;
	int_array_ptr = new int[10];
	delete[] int_array_ptr;

	//using pointer in expression
	int scores[] = {100,90,80};
	int * score_ptr = scores;	//no need to mention & of variable for array
	cout << "\naddress of var: " << &scores << " and address of ptr: " << score_ptr << endl; // address is exactly same to variable, not a diffent place
	cout << "Scorepointer 0th element: " << score_ptr[0] << endl;	//100
	cout << "Scorepointer 1th element: " << score_ptr[1] << endl;		//90
	cout << "Scorepointer 2nd element: " << score_ptr[2] << endl;		//80

	cout << "score_ptr: " << score_ptr << endl;			// address is exactly same to variable, not a diffent place
	cout << "score_ptr +1 " << (score_ptr + 1) << endl; // 1 = 4bytes here, whcih gives address of the next element
	cout << "score_ptr +2 " << (score_ptr + 2) << endl;

	cout << "score_ptr: " << *score_ptr << endl;
	cout << "score_ptr +1 " << *(score_ptr + 1) << endl; 
	cout << "score_ptr +2 " << *(score_ptr + 2) << endl;

	//pointer in arithmatic ->	inc/dec-> int_ptr++ means to point to the next element, int_ptr-- points to previous element
	//							comparision-> ptr1 == ptr2 true if both ptr1 and ptr2 points to same address/ points to same variable 
	//										 *ptr1 == *ptr2 true if the value stored in address ptr1 and ptr2 is same

	//Constant and pointer -> pointer to constant, constant pointer, constant pointer to constant
	//pointer to constant
	const float * speed_ptr = &max_speed;	// *speed_ptr = 120 is illeagal, will through error
	speed_ptr = &min_speed;			//is sallowed

	//Constant pointer
	float * const const_ptr = &max_speed;

	//Constant pointer to constant
	const float* const const_ptr_const = &max_speed;





	return 0;
}*/