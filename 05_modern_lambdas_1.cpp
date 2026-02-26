// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
// std::for_each is a standard library algorithm which iterates each element in the given range for a function/lambda/functor
// Lambda makes the code compact and crispy 

//using function
bool isPrime(int x)
{
    for(int i=2;i<x;i++)
        if(x%i==0)
            return false;
    return true;
}
void printPrime(int n)
{
    if(isPrime(n))
        std::cout<<n<<" ";
}

//using functor
class Prime
{
  public:
  bool isPrime(int x)
  {
    for(int i=2;i<x;i++)
        if(x%i==0)
            return false;
    return true;
  }
  void operator()(int n)
  {
      if(isPrime(n))
        std::cout<<n<<" ";
  }
};
int main() {
    std::vector vec1 = {10,11,12,13,15,45,48,56,54};
    //using function
    for_each(vec1.begin(),vec1.end(), printPrime);    
    //using functor
    for_each(vec1.begin(),vec1.end(), Prime());  
    //using lambda
    for_each(vec1.begin(),vec1.end(),[](int x){
        int i;
        for(i=2;i<x;i++)
            if(x%i ==0)
            break;
        if(i==x)
            std::cout<<x<<" ";
    });
    
    return 0;
}
