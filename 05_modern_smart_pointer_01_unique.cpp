// Online C++ compiler to run C++ program online
/******************************************************************************
Smart poitners: are introduced from C++11, there are three: unique_ptr, shared_ptr, weak_ptr
Benifits:
    - Resource management
    - Avoiding memory leaks
    - Avoid Dangling pointers issue
    - Pointer ownership
    - Avoid manual memory management errors, all features by taking care of memory issues are implemented as class so objects can be created
More Info:
    - unique_ptr owns the object it points to. Only one unique_ptr can own an object at a time.
    - Copy constructor is not allowed for unique_ptr, as it intended to not create 2 pointers to the same address
    - So if required, ownership can be transferrded from one to another unique pointer by using std::move()
    - ptr.get(), ptr2.reset() 
*******************************************************************************/

#include <iostream>
#include <memory> // required for unique pointers
int danglingPointer()
{
    int *p = new int(10);
    if (*p > 0)
        return *p;  // memory leak as delete is not called for all positive/valid numbers each cycle
    delete p;
}

int uniquePointer()
{
    // Object style with template of type in <>
    std::unique_ptr<int> p(new int(10)); // old style, C++11
    std::unique_ptr<int> ptr = std::make_unique<int>(10); // preferedded from c++14
    
    if (*p >10)
        return *p;
    //no need of delete p as automatically will be deleted once out of this current block.
}

int main()
{ 
     std::cout<<"Hello World"<<std::endl;
    // to understand how normal pointer creates memory leak
    //danglingPointer();
    // how smart pointer resolves the memory leak
    //uniquePointer();

    int a =10;
    std::unique_ptr<int> ptr = std::make_unique<int>(a);
    std::cout << "VALUE: " << *ptr << std::endl;  // Dereferencing unique_ptr
    
    // Two pointers can not point to a same address
    //std::unique_ptr<int> ptr1 = ptr; // not allowed as unique_ptr(const unique_ptr&) = //delete;
    // If required, ownership can be transferrded from one to another unique pointers
    std::unique_ptr<int> ptr2; 
    ptr2 = std::move(ptr);
    
    // ptr.get() for address
    std::cout << "After move:" << std::endl;
    std::cout << "ptr  address: " << ptr.get() << std::endl;   // nullptr
    std::cout << "ptr2 address: " << ptr2.get() << std::endl;  // valid address
    
    ptr2.reset(new int(50)); //or ptr2.reset() to null
    std::cout << "VALUE after to 50 : " << *ptr2 << std::endl; 
    ptr2.reset();
    std::cout << "VALUE after just reset : " << *ptr2 << std::endl; // Segmentation fault
    
    return 0;
}
