// RUle of 3 & Rule of 5
// Rule of 3 : 
    //Destructor, Copy constructor, copy assignment
    //usually applies when your class manages resources (dynamic memory, file handles, sockets, etc.)
    // will perform shallow copy, which can cause:Double delete, Memory leaks, Undefined behavior
    // shallow copy can happen by compiler generated 1)copy constucor 2)assignment operator =

// Rule of 5:
    //Additionally: move copy constructor, move copy assignemnt
    // required when move is called, it calls compiler generated copy/assignemnt which creates shallow copy problem again

#include <iostream>
#include <cstring>

// Example without rule of 3 : creates issue
class Bad {
private:
    int* ptr;

public:
    Bad(int val) {
        ptr = new int(val);
    }

    ~Bad() {
        delete ptr;
    }
};

// Example with rule of 3
class Number
{
  int* value;
  public:
    Number(): value{nullptr}{} // set to nullptr required to avaoid crash
    Number(int v){ // Constructor
        value = new int(v);
    }
    ~Number(){ //Destructor
        delete value; 
    }
    // Copy constructor ( deep copy)
    Number(const Number & other){
        std::cout<<"copy constructor is called"<<std::endl;
        value = new int(*other.value); // created a new pointer and store the data
    }
    // Copy assignment operator
    Number& operator=(const Number& other){ // why Number& ? ans: it modifies existing not creating new object of Number
        std::cout<<"copy assignment is called"<<std::endl;
        if(this == &other)
        {
            std::cout<< "Copy assignment if block should work"<<std::endl;
            return *this;
        }
        delete value; // why not *this->value = *other.value; ? ans: will crash if there is Number() and created objects like Number a; Number b(10); a = b;
        value = new int(*other.value);
        return *this;
    }
    void printData(){
        if (value) std::cout << *value << std::endl;
        else std::cout << "null" << std::endl;
    }
    
    // For rule of 5
    // Move constructor
    Number(Number && other) noexcept: value{other.value}{
        std::cout<<"Move constructor is called"<<std::endl;
        other.value = nullptr; // why this step ? ans: if not done both a & b points to same memory and segmentation fault when both destructors are called
    }
    // Move assignment
    Number& operator=(Number && other) noexcept{
        std::cout<<"Move copy assignment is called"<<std::endl;
        if(this == &other)
            return *this;
        value = other.value;
        other.value = nullptr;
        return *this;
    }
};

int main()
{
    // without Rule of 3
    Bad a(10);
    //Bad b = a;  // default copy  is called : shallow copy ie value = other.value; 
    // Above step creates double delete, udefined behaviour / crash
    
    // with Rule of 3
    Number n1(10);
    Number n2(n1); // copy constructor is called
    n2 = n2; // Copy assignment if block should work
    Number n3;
    n3 = n2; // copy assignment is called
    n3.printData();
    
    // with Rule of 5
    Number n5(std::move(n2));
    Number n6;
    n6 = n5;
    
    return 0;
}
