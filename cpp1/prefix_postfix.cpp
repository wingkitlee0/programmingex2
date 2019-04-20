#include <iostream>

int main(int argc, char** argv) {
    int guests = 0;

    while(guests++ < 5){
        // guests + 1 AFTER comparison with 5
        // output up to 5 
        std::cout << guests << std::endl;
    }

    guests = 0;
    while(++guests < 5){
        // guests + 1 BEFORE comparison with 5
        // output up to 4
        std::cout << guests << std::endl;
    }
}