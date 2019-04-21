#include <iostream>
#include "node.h"


template <typename T>
Node<T>::Node() 
{
    std::cout << "# calling constructor of Node." << std::endl;
}

template <typename T>
Node<T>::Node(const T x) 
{
    std::cout << "# calling constructor of Node." << std::endl;
    std::cout << "# assigning value : " << x << std::endl;
    val = x;
}

template <typename T>
void Node<T>::setvalue(const T x) {
    val = x;
}

template <typename T>
void Node<T>::printvalue() {
    std::cout << "val = " << val << std::endl;
}