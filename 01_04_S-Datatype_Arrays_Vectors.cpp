/*Secondary datatypes	

	author		: Saroj Kumar N
	craeted on	: 18/09/2021
	modified on	: 19/09/2021
*/

/*Secondary datatypes:
	Derived datatypes: Array, function, pointer
		Array:	Holds memory location of start of the array or 0th index
				Fixed in size, can not change size runtime, each element of array is of same size. 
				Individual element can be assessed by its position, index starts from 0 to size-1.
				Always initialize arrays, looping is used often to access
				Declaration: syntax: data_type array_name [size], eg: int num_array[100];
				Initilization:	
					compile time: eg: int test_score[5]= {50,90,30,60,80}, eg2: int test_score[] = {50,90,30,60,80}; eg2 automatically size is calculated 
					runtime		: means array will be initialized after compilation of program. eg- scanf, for loop
				Accessing: syntax: array_name [elemnt_index] 
	User defined datatypes: typedef, enum, structure, union

*/

/*Vectors:
	Container in C++ standard template library which can hold data of dynamic array
	syntax: #include <vector>; vector <data_type> vec_name;
*/

#include<iostream>
#include<vector>
using namespace std;


/*int main()
{
	// 1D array
	char vowels[] = {'a','e','i','o','u' }; // 0[a], 1[e], 2[i], 3[o], 4[u] -> compile time initialization
	cout << "First vowel is: " << vowels[0] << endl;	//accessing
	cout << "Last vowel is: " << vowels[4] << endl;

	int test_scores[5];		//Declaration
	//cout << "test_score_1 is : " << test_scores[0] << endl;		//not initialized, so have garbage value
	cout << "Enter 5 test scores" << endl;
	cin >> test_scores[0];
	cin >> test_scores[1];	//run time initialization
	cin >> test_scores[2];
	cin >> test_scores[3];
	cin >> test_scores[4];

	cout << "Test scores are: " << test_scores[0] << test_scores[1] << test_scores[2] << test_scores[3] << test_scores[4] << endl;

	//Multi-dimensional array

	//Vectors
	vector <char> vowel_1[5];	//size-5, initialized by default as 0
	vector <char> vowel_2 = { 'a','e','i','o','u' };
	//cout << "Default initialization : " << vowel_1[0];
	cout << "initialization : " << vowel_2[0] <<endl;
	vowel_2.push_back('z');	//to add new element at the last, shoul dbe of same size/type
	cout << "accessing : " << vowel_2[5];

	//2D vector
	vector <vector <int>> students_marks = { {20,30,40}, {30,40,50}, {40,50,60} };
	cout << endl;
	cout << students_marks[0][0];

	return 0;
}*/