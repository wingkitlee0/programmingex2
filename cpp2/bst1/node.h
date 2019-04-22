#ifndef NODE_H
#define NODE_H

template <typename T>
class Node
{
public:
    /* data */
    T val;
    Node* left;
    Node* right;

    Node() {
        //val   = nullptr;
        left  = nullptr;
        right = nullptr; 
    };

    Node(const T x) {
        std::cout << "# calling constructor of Node." << std::endl;
        std::cout << "# assigning value : " << x << std::endl;
        val = x;
        left  = nullptr;
        right = nullptr; 
    }

    void setvalue(const T x) {
        val = x;
    }
    void printvalue() {
        std::cout << val << std::endl;
    }
};

#endif


