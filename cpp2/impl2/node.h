#ifndef NODE_H
#define NODE_H

template <typename T>
class Node
{
private:
    /* data */
    T val;
public:

    Node() {
        std::cout << "# calling constructor of Node." << std::endl;
    }

    Node(const T x_) {
        std::cout << "# calling constructor of Node." << std::endl;
        std::cout << "# assigning value : " << x_ << std::endl;
        val = x_;
    }

    void setvalue(const T x) {val = x;}
    void printvalue() {
        std::cout << "val = " << val << std::endl;
    }
};

#endif


