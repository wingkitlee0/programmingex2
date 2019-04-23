#include <iostream>
#include <iomanip>
#include <vector>
#include <utility>
#include <memory>

#include "node.h"

int main(int argc, char** argv) {

    std::cout << "\nTest 1: Creating a single node." << std::endl;
    auto *singlenode = new Node();
    std::cout << "main:\n\taddress of singlenode : " << singlenode << std::endl;
    delete singlenode;


    std::cout << "\nTest 2: Creating two nodes using: Node *node[N]." << std::endl;
    const int N = 5;

    Node *node[N]; // create a pointer that points to N Node addresses
    for (int i=0; i<N; i++) {
        node[i] = new Node(i); // create a new Node and assign it to node[i]
    }
    
    std::cout << "main:\n\taddress of node : " << node << std::endl;
    for (int i=0; i<N; i++) {
        std::cout << "main:\n\taddress of node[" << 
            std::setw(2) << i << "] : " << &node[i] << std::endl;
    }
    
    // removing all nodes
    for (int i=0; i<N; i++) {
        delete node[i];
    }

    std::cout << "\nTest 3: Creating N nodes using vector dynamically.." << std::endl;
    int NN = 5;

    //std::vector<Node* > nodes; // arrays of Node pointers
    std::vector< std::shared_ptr<Node> > nodes;  // arrays of Node shared-pointers
    std::cout << "nodes.size() = " << nodes.size() << std::endl;
    std::cout << "&nodes = " << &nodes << std::endl;
    
    nodes.resize(NN); // does not invoke Node() constructor
    std::cout << "nodes.size() = " << nodes.size() << std::endl;
    for (int i=0; i<NN; i++) {
        //nodes[i] = new Node(i);
        nodes[i] = std::make_shared<Node >(i);
    }
    for (int i=0; i<NN; i++) {
        std::cout << nodes[i]->x << std::endl;
        std::cout << "nodes[" << std::setw(1) << i << "] = " << &nodes[i] << std::endl; 
    }
    std::cout << "size of Node = " << sizeof(nodes[0]) << std::endl;
    for (int i=0; i<NN; i++) { // shared-pointers do not need deletion
        //delete nodes[i]; 
    }
    std::cout << "nodes.size() = " << nodes.size() << std::endl;

    std::cout << "\nTest 4: Creating N nodes using STL vector .." << std::endl;
    auto manynodes = std::vector<Node>(NN);
    for (int i=0; i<NN; i++) {
        manynodes[i].x = 50+i;
        std::cout << "nodes[" << std::setw(1) << i << "] = " << &manynodes[i] << std::endl; 
    }


    /*
    https://stackoverflow.com/questions/2425728/delete-vs-delete-operators-in-c/2425771

    delete vs delete []
    */
    std::cout << "\nTest 5: delete vs delete []" << std::endl;

    auto lotsofnodes = new Node[N]; // create N nodes with default constructor
    delete [] lotsofnodes; // delete N nodes
}