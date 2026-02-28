// Online C++ compiler to run C++ program online
// Lvalue: can take address of expression then its Lvalue, and they last extended period of time
// Rvalue: expression which address can not be taken, does not exist after that line
#include <iostream>

void print(int& x) {
    std::cout << "Lvalue reference\n";
}

void print(int&& x) {
    std::cout << "Rvalue reference\n";
}
    
int main() {
    // lvalue: Has a name, a persistent memory address, Can appear on the left side of assignment
    // lvalue lasts extended period of time
    int a =10;
    a = 20;
    
    // rvalue: temporary value, does not have a persistent memory, Usually appears on the right side of assignment
    int x = 10; // 10 is rvalue
    int y = 5+10; //(5+10) is  a rvalue
    
    // 10 = x; // illegal
    
    // lvalue reference : binds to lvalues.
    int z = 10;
    int& ref = z;
    ref = 20;  // modifies 
    
    // can not bind to rvalue
    //int& ref = 5;
    
    //rvalue reference: binds to rvalues (temporaries)
    int&& rref = 10;
    std::cout<<"rref: "<<rref<<std::endl;
    
    print(z); // lvalue version
    print(10); // rvalue version

    return 0;
}
