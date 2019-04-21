#include <iostream>
#include <typeinfo>

class Base {
protected:
    int x, y;
public:
    Base () {
        std::cout << "# Calling default constructor for " 
            << typeid(*this).name() << std::endl;
    }
    Base (int x_) : x(x_) {}
    void setx(const int x_) { x = x_; }
    int getx() { return x; }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "# Calling default constructor for Dervied" << std::endl;
        x = 0;
        y = 0;
    }
    Derived(int y_) {}
};

int main(int argc, char** argv) {
    Derived t;
    std::cout << t.getx() << std::endl;
    t.setx(20);
    std::cout << t.getx() << std::endl;
    return 0; 
}