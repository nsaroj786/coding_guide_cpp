// Online C++ compiler to run C++ program online
// [capture_clause](parameters) -> return_type { function_body }
#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include <memory>
#include <thread>

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro"<<std::endl;;
    
    // Basic lambda: []
    auto greet = [](){std::cout<<"Hello"<<std::endl;};
    greet();
    
    // Return type should not be int, as its a function pointer type
    auto sum1 = [](int x, int y){return x+y;};
    std::cout<< "Sum: "<<sum1(10,20)<<std::endl;
    
    // Another way of writing the return type of lambda
    std::function<int(int,int)> sum2 = [](int x, int y){return x+y;};
    std::cout<< "Sum: "<<sum2(1,2)<<std::endl;
    
    int a = 10, b =25;
    //Capture by value: a = 15 not allowed inside lambda
    auto cap_val = [a](){ std::cout<<"a: "<<a<<std::endl;};
    cap_val();
    std::cout<< "value of a after lambda: "<<a<<std::endl;
    
    //Capture by reference: changes value of actual par
    auto cap_ref = [&a](){a=15; std::cout<<"a: "<<a<<std::endl;};
    cap_ref();
    std::cout<< "value of a after lambda: "<<a<<std::endl;
    //Mutable lambda: enables capture by value to create a local variable and modify the value in local to lambda, not the global scope
    auto cap_mut = [a]() mutable{a = 25; std::cout<<"a inside mutable: "<<a<<std::endl;};
    cap_mut();
    std::cout<< "value of a after mutable lambda: "<<a<<std::endl;
    
    // Lambda with STL
    std::vector<int> vec1 = {10,40,30,50,60,60,70};
    std::sort(vec1.begin(),vec1.end(),[](int a, int b)
    {return a>b;});
    for(int i:vec1)
        std::cout<< i<<",";
    std::cout<<std::endl;
    
    //Generic lambda
    auto res = [](auto x, auto y){return x*y;};
    std::cout<<"Generic lambda: " <<res(10,20)<<std::endl;
    std::cout<<"Generic lambda: " <<res(10.2,20.2)<<std::endl;
    
    // Lambda with std::for_each : &x in case want to change the actual value. For each never holds the return so body should not retun anything
    std::for_each(vec1.begin(), vec1.end(),[](int& x){x *= 2;});
    for(int i:vec1)
        std::cout<< i<<",";
    std::cout<<std::endl;
    
    // Reccursive lambda : capture is require to hold return of 1st cycle ie global variable fact
    std::function<int(int)> fact= [&](int n){return n<=1? 1:n*fact(n-1);};
    std::cout<< "Fact :" << fact(5)<<std::endl;
    
    // Capture- move only object
    auto ptr = std::make_unique<int>(100);
    auto func = [p = std::move(ptr)](){std::cout<<"P: "<<*p<<std::endl;};
    func();
    //std::cout<< "Ptr after move"<< *ptr<<std::endl; // segmentation fault
    
    // Lambda in thread
    std::thread t([]() {
        std::cout << "Running in thread"<<std::endl;
    });

    t.join();
    
    //Lambda inside lambda : auto inner = is not allowed as outer can not retun anything in that case
    auto outer = [](int x){
      return [x](int y){
          return x+y;
      }  ;
    };
    
    auto add5 = outer(5);
    std::cout<< " Nested lambda: "<<add5(3)<<std::endl;
    
    return 0;
}
