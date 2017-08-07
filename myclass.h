#include<iostream>

class MyClass {
        int myNumber;
public:
        MyClass(int number): myNumber(number){}
        void sayHello() {
                std::cout << "Hello, my number is:" 
                << myNumber <<std::endl;
        }
};
