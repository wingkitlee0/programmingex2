#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node
{
public:
    int x;
    //float y;
    Node();
    Node(int x);
    ~Node();
};

Node::Node(/* args */)
{
    std::cout << "creating a node." << std::endl;
}

Node::Node(int x) : Node() {
    this->x = x;
    std::cout << "initial x = " << x << std::endl;
}

Node::~Node()
{
    std::cout << "removing a node with x = "  << x <<  std::endl;
}



#endif // NODE_H