#include <iostream>
#include "node.h"
#include "bst.h"

int main(int argc, char** argv) {
    int a = 1;
    auto bst = new BST<int>(a);
    

    bst->setvalue(1);
    bst->printvalue();
    

    delete bst;
    return 0;
}
