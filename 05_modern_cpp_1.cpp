//auto & decltype
#include <iostream>
#include <typeinfo>

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro"<<std::endl;
    
    // auto : C++ 11
    auto x = 10;        // int
    auto y = 3.14;      // double
    auto z = x + y;     // double

    std::cout << typeid(x).name() << "\n";
    std::cout << typeid(z).name() << "\n";
    
    int a = 5;
    int& ref = a;
    auto b = ref;     // b is int (reference removed)
    auto& c = ref;    // c is int&
    
    // decltype : C++11
    int x1 = 10;
    const int& ref1 = x1;

    decltype(x1) y1 = 20;   // int
    decltype(ref1) ref2 = x1;  // const int&
    
    decltype(x1) x2 = x1;     // int
    decltype((x1)) x3 = x1;   // int&  ⚠ decltype((variable)) → lvalue reference
    x3 = 50;
    std::cout<< "x1: "<< x1; // 50 as (()) works as reference
    
    // auto vs decltype together
    // C+ 11
    template<typename T, typename U>
    auto add(T a, U b) -> decltype(a + b) {
        return a + b;
    }
    // C++ 14 onwards : auto can take care of return type
    template<typename T, typename U>
    auto add(T a, U b) {
        return a + b;   // return type deduced
    }
    
    // decltype(auto) in C++ 14 onwards
    int var = 100;
    
    decltype(auto) fun(){
        return (var); // returns int& (because of parentheses)
    }
    decltype(auto) func1() {
        return var;   // returns int (copy)
    }   
    
    return 0;
}

