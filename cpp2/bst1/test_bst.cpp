#include <iostream>
#include "node.h"
#include "bst.h"

int main(int argc, char** argv) {


    BST<int> *bst = new BST<int>(1);

    bst->setvalue(2);
    bst->printvalue();

    delete bst;
    return 0;
}
