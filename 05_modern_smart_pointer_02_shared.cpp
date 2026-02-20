// Shared Pointer:std::shared_ptr
/******************************************************************************
//Shared pointer: 
 - is a container for a raw pointer, maintains reference counting ownership of its contained pointer
 - An object referenced by the contained raw pointer will be destroyed only when all copies of the shared pointer have been deleted.
 - p1.use_count : to get number of referncing count
    
*******************************************************************************/

#include <iostream>
#include <memory> // required for unique pointers

int main()
{ 
    std::shared_ptr<int> p1(new int(10));
    std::shared_ptr<int> p2(p1); // two pointers pointing to the same address
    std::cout<<"p1.use_count : "<< p1.use_count()<<std::endl; //2
    std::cout<<"p2.use_count : "<< p2.use_count()<<std::endl; //2
    p1.reset();
     std::cout<<"p1.use_count : "<< p1.use_count()<<std::endl; // 0 as p1 alread set to nullptr
    std::cout<<"p2.use_count : "<< p2.use_count()<<std::endl;
    std::cout<< p1.get(); // 0 as nothing
    std::cout<< p2.get(); // valid address
    
    return 0;
}
