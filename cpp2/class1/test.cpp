#include <iostream>
#include <vector>

template <typename T>
class Node {
public:
    T x;

    Node() {
        std::cout << "creating a node." << std::endl;
        std::cout << "&this = " << this << std::endl;
    };
    Node(T x_) : x(x_) {
        std::cout << "creating a node with value = " << x << std::endl;
        std::cout << "&this = " << this << std::endl;
    };
    ~Node() {
        std::cout << "removing a node with value = " << x << std::endl;
        std::cout << "&this = " << this << std::endl;
    }

    void setvalue(T x) {
        this->x = x;
    }
    void printvalue() {
        std::cout << "value = " << x << std::endl;
    }


};



int main(int argc, char** argv) {

    auto *node = new Node<int>(10);
    node->printvalue();

    const int N = 3;

    Node<int> *manynodes = new Node<int>[N];

    #pragma omp parallel for
    for (int i=0; i<N; ++i) {
        manynodes[i].setvalue(i);
    }

    std::cout << std::endl;
    std::cout << "print out values" << std::endl;

    
    for (int i=0; i<N; ++i) {
        manynodes[i].printvalue();
    }
    

    std::cout << std::endl;
    delete [] manynodes;
    std::cout << std::endl;

    //std::vector<Node<int> > lotsofnodes[3];
    auto lotofnodes = std::vector< Node<int> > {1, 2, 3};

    lotofnodes[0].setvalue(10);
    for (int i=0; i<N; ++i) {
        std::cout << &lotofnodes[i] << std::endl;
    }

    std::cout << std::endl;
    std::cout << "reserve memory and push_back" << std::endl;
    // https://stackoverflow.com/questions/6142830/how-do-i-initialize-a-stl-vector-of-objects-who-themselves-have-non-trivial-cons

    std::vector<Node<int> > manynodes2;

    //manynodes2.reserve(N);
    manynodes2.resize(N); // reserve memory for N Nodes, no initialiation yet
    
    std::cout << "address of manynodes2[0] = " << &manynodes2[0] << std::endl;
    for (int i=0; i<N; ++i) {
        //manynodes2.push_back( Node<int>(i*100)); 
        manynodes2[i] = Node<int>(i*100);
    }
    std::cout << "size of manymodes2 = " << manynodes2.size() << std::endl;

    std::cout << "print out nodes:" << std::endl;
    for (int i=0; i<N; ++i) {
        manynodes2[i].printvalue();
    }
    

    std::cout << std::endl;

    return 0;
}