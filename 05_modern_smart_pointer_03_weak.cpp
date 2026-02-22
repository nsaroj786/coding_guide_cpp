// Online C++ compiler to run C++ program online
/******************************************************************************
//Weak pointer: 
    
*******************************************************************************/

#include <iostream>
#include <memory> // required for unique pointers

int main()
{ 
    std::shared_ptr<int> p1(new int(10));
    std::weak_ptr<int> p2(p1); // two pointers pointing to the same address
    std::cout<<"p1.use_count : "<< p1.use_count()<<std::endl; //2
    std::cout<<"p2.use_count : "<< p2.use_count()<<std::endl; //2
    p2.reset();
     std::cout<<"p1.use_count : "<< p1.use_count()<<std::endl; // 1 as no impact because of weak ptr
    std::cout<<"p2.use_count : "<< p 2.use_count()<<std::endl; // 0 as weak pointer is deleted
    p1.reset();
     std::cout<<"p1.use_count : "<< p1.use_count()<<std::endl; // 0 as shared pointer got deleted
    std::cout<<"p2.use_count : "<< p2.use_count()<<std::endl; //0

    
    return 0;
}
