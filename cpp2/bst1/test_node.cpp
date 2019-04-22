#include <iostream>
#include "node.h"

int main(int argc, char** argv) {

    Node<int> *node = new Node<int>(1);

    node->setvalue(2);
    node->printvalue();

    //delete [] node;
    return 0;
}
