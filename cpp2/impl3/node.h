#ifndef NODE_H
#define NODE_H

template <typename T>
class Node
{
private:
    /* data */
    T val;
    Node* left;
    Node* right;
    
public:
    Node();
    Node(const T x_);

    void setvalue(const T x);
    void printvalue();
};

#endif


