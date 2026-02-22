// weak vs shared pointer -> shared pointer has ownership of the object, weak pointer does not have ownership, it just observes the object, it can not access the object directly, it needs to convert to shared pointer to access the object, it is used to break circular reference in shared pointer
// Online C++ compiler to run C++ program online
/******************************************************************************
//Weak pointer: 
    
*******************************************************************************/

#include <iostream>
#include <memory> // required for unique pointers

class B;

class A
{
  public:
  //std::shared_ptr<B> p1;
  std::weak_ptr<B> p1;
  void set_ptr(std::shared_ptr<B> &ptr1){ p1=ptr1;}
  ~A() {std::cout<<"Destructor A";}
};
class B
{
  public:
  //std::shared_ptr<A> p2;
  std::weak_ptr<A> p2;
  void set_ptr(std::shared_ptr<A> &ptr2){ p2=ptr2;}
  ~B() {std::cout<<"Destructor B";}
};

void f1()
{
    std::shared_ptr<A> objAptr(new A());
    std::shared_ptr<B> objBptr(new B());
    objAptr->set_ptr(objBptr);
    std::cout<< "objBptr: "<<objBptr.use_count()<<std::endl;
    std::cout<< "objAptr: "<<objAptr.use_count()<<std::endl;
    objBptr->set_ptr(objAptr);
    std::cout<< "objBptr: "<<objBptr.use_count()<<std::endl;
    std::cout<< "objAptr: "<<objAptr.use_count()<<std::endl;
}
int main()
{ 
    f1();
    // Destructor of A & B are not called once block of f1 is finished because of cyclic complexity.
    
    
    return 0;
}
