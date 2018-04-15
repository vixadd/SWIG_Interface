#include<iostream>

class MyClass {
        int myNumber;
public:
        MyClass(int num): myNumber(num){}
        void sayHello() {
                std::cout << "Hello, my number is:" 
                << myNumber <<std::endl;
        }
};
