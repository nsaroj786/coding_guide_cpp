#include <iostream>

// Lambda : Lambda is a function/expression without name and is not reusable code.
// Lambda is inline function, one time use
// It can access values & references of parent function variables.
// Syntax: [] (args) -> return_type { code }



int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro"<<std::endl;
    int a =4, b=5;
    [](int a,int b)->void {std::cout<<a<<","<<b<<std::endl; a=7;}(a,b); // call by value
    std::cout<<a<<std::endl;
    [](int &a,int &b)->void {std::cout<<a<<","<<b<<std::endl; a=7;}(a,b); // call by ref
    std::cout<<a<<std::endl;
    
    [=]()->void {std::cout<<a<<","<<b<<std::endl;}(); // not allowed a=10; read only, == means all variabls of main function by value
    [&]()->void {std::cout<<a<<","<<b<<std::endl; a=20;}(); // allowed a=10 as variales of main by reference
    std::cout<<a<<std::endl;
    [a]()->void {std::cout<<a<<","<<std::endl;}(); // only mentioned args accessible, error for cout<<b
    
    [&,a]()->void {std::cout<<a<<","<<std::endl;}(); // all other as ref, a as value
    
    
    return 0;
}

